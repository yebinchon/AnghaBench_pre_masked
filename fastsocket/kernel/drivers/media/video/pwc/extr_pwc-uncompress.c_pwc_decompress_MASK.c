
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct pwc_raw_frame {struct pwc_raw_frame* cmd; void* vbandlength; void* type; } ;
struct pwc_frame_buf {void* data; } ;
struct TYPE_8__ {int x; int y; } ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_6__ {int y; int x; } ;
struct pwc_device {size_t fill_image; int frame_header_size; scalar_t__ pixfmt; scalar_t__ type; scalar_t__ vbandlength; void* cmd_buf; int frame_size; scalar_t__ vsize; int vframes; scalar_t__ vsnapshot; TYPE_4__ image; TYPE_3__ view; TYPE_2__ offset; TYPE_1__* images; void* image_data; struct pwc_frame_buf* read_frame; } ;
struct TYPE_5__ {int offset; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pwc_raw_frame*,void*,int) ;
 int FUNC_4 (struct pwc_device*,void*,void*,int ) ;

int FUNC_5(struct pwc_device *VAR_5)
{
 struct pwc_frame_buf *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 void *VAR_11, *VAR_12;
 u16 *VAR_13;
 u16 *VAR_14, *VAR_15, *VAR_16;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = VAR_5->read_frame;
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_12 = VAR_5->image_data;
 VAR_12 += VAR_5->images[VAR_5->fill_image].offset;

 VAR_11 = VAR_6->data + VAR_5->frame_header_size;


 if (VAR_5->pixfmt != VAR_4)
 {
  struct pwc_raw_frame *VAR_17 = VAR_12;
  VAR_17->type = FUNC_2(VAR_5->type);
  VAR_17->vbandlength = FUNC_2(VAR_5->vbandlength);



  FUNC_3(VAR_17->cmd, VAR_5->cmd_buf, 4);
  FUNC_3(VAR_17+1, VAR_11, VAR_5->frame_size);
  return 0;
 }

 if (VAR_5->vbandlength == 0) {
  VAR_13 = (u16 *)VAR_11;
  VAR_7 = VAR_5->view.x * VAR_5->view.y;


  VAR_10 = VAR_5->view.x * VAR_5->offset.y + VAR_5->offset.x;
  VAR_14 = (u16 *)(VAR_12 + VAR_10);


  VAR_10 = VAR_5->view.x * VAR_5->offset.y / 4 + VAR_5->offset.x / 2;
  VAR_15 = (u16 *)(VAR_12 + VAR_7 + VAR_10);
  VAR_16 = (u16 *)(VAR_12 + VAR_7 + VAR_7 / 4 + VAR_10);


  VAR_10 = (VAR_5->view.x - VAR_5->image.x) / 2;

  for (VAR_8 = 0; VAR_8 < VAR_5->image.y; VAR_8++) {
   for (VAR_9 = 0; VAR_9 < VAR_5->image.x; VAR_9 += 4) {
    *VAR_14++ = *VAR_13++;
    *VAR_14++ = *VAR_13++;
    if (VAR_8 & 1)
     *VAR_16++ = *VAR_13++;
    else
     *VAR_15++ = *VAR_13++;
   }
   VAR_14 += VAR_10;
   if (VAR_8 & 1)
    VAR_16 += (VAR_10 >> 1);
   else
    VAR_15 += (VAR_10 >> 1);
  }

  return 0;
 }






 if (VAR_5->vsize == VAR_2 && VAR_5->vframes == 5 && VAR_5->vsnapshot) {
  FUNC_1("Mode Bayer is not supported for now\n");

  return -VAR_1;
 }

 if (FUNC_0(VAR_5->type)) {


  FUNC_1("This chipset is not supported for now\n");
  return -VAR_1;

 } else {
  FUNC_4(VAR_5, VAR_11, VAR_12, VAR_3);
 }
 return 0;
}
