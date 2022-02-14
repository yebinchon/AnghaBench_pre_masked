
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct urb {int status; int number_of_packets; unsigned char* transfer_buffer; TYPE_3__* iso_frame_desc; struct cx231xx_dmaqueue* context; } ;
struct cx231xx_dmaqueue {int last_sav; int partial_buf; scalar_t__ is_partial_line; } ;
struct cx231xx_buffer {int vb; } ;
struct TYPE_4__ {struct cx231xx_buffer* buf; } ;
struct TYPE_5__ {scalar_t__ max_pkt_size; TYPE_1__ isoc_ctl; } ;
struct cx231xx {int state; TYPE_2__ video_mode; } ;
struct TYPE_6__ {int status; scalar_t__ actual_length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int ,int*) ;
 int FUNC_1 (unsigned char*,int,int*) ;
 int FUNC_2 (struct cx231xx*,struct cx231xx_dmaqueue*,int,unsigned char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (struct cx231xx*,int,int) ;
 unsigned char* FUNC_6 (int *) ;

__attribute__((used)) static inline int FUNC_7(struct cx231xx *VAR_4, struct urb *VAR_5)
{
 struct cx231xx_buffer *VAR_6;
 struct cx231xx_dmaqueue *VAR_7 = VAR_5->context;
 unsigned char *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 1;
 unsigned char *VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0;
 u8 VAR_14 = 0;

 if (!VAR_4)
  return 0;

 if ((VAR_4->state & VAR_0) || (VAR_4->state & VAR_1))
  return 0;

 if (VAR_5->status < 0) {
  FUNC_5(VAR_4, -1, VAR_5->status);
  if (VAR_5->status == -VAR_2)
   return 0;
 }

 VAR_6 = VAR_4->video_mode.isoc_ctl.buf;
 if (VAR_6 != ((void*)0))
  VAR_8 = FUNC_6(&VAR_6->vb);

 for (VAR_9 = 0; VAR_9 < VAR_5->number_of_packets; VAR_9++) {
  int VAR_15 = VAR_5->iso_frame_desc[VAR_9].status;

  if (VAR_15 < 0) {
   FUNC_5(VAR_4, VAR_9, VAR_15);
   if (VAR_5->iso_frame_desc[VAR_9].status != -VAR_3)
    continue;
  }

  if (VAR_5->iso_frame_desc[VAR_9].actual_length <= 0) {

   continue;
  }
  if (VAR_5->iso_frame_desc[VAR_9].actual_length >
      VAR_4->video_mode.max_pkt_size) {
   FUNC_3("packet bigger than packet size");
   continue;
  }


  VAR_11 = VAR_5->transfer_buffer + VAR_5->iso_frame_desc[VAR_9].offset;
  VAR_13 = VAR_5->iso_frame_desc[VAR_9].actual_length;
  VAR_12 = 0;

  if (VAR_7->is_partial_line) {

   VAR_14 = VAR_7->last_sav;
  } else {


   VAR_14 =
       FUNC_0(VAR_11,
         VAR_7->partial_buf,
         &VAR_12);
  }

  VAR_14 &= 0xF0;


  if (VAR_14) {
   VAR_12 += FUNC_2(VAR_4, VAR_7,
    VAR_14,
    VAR_11 + VAR_12,
    VAR_13 - VAR_12);
  }




  while (VAR_12 < VAR_13) {
   u32 VAR_16 = 0;

   VAR_14 = FUNC_1(
    VAR_11 + VAR_12,
    VAR_13 - VAR_12,
    &VAR_16);

   VAR_12 += VAR_16;

   VAR_14 &= 0xF0;
   if (VAR_14 && (VAR_12 < VAR_13)) {
    VAR_12 += FUNC_2(VAR_4,
     VAR_7, VAR_14,
     VAR_11 + VAR_12,
     VAR_13 - VAR_12);
   }
  }



  FUNC_4(VAR_7->partial_buf, VAR_11 + VAR_13 - 4, 4);
  VAR_12 = 0;

 }
 return VAR_10;
}
