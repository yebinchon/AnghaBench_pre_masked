
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct omap24xxcam_fh* priv_data; } ;
struct videobuf_buffer {scalar_t__ bsize; scalar_t__ size; scalar_t__ state; int field; scalar_t__ memory; int height; int width; scalar_t__ baddr; } ;
struct TYPE_2__ {scalar_t__ sizeimage; int height; int width; } ;
struct omap24xxcam_fh {TYPE_1__ pix; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct videobuf_queue*,int ) ;
 int FUNC_1 (struct videobuf_queue*,struct videobuf_buffer*) ;
 int FUNC_2 (struct videobuf_queue*,struct videobuf_buffer*,int *) ;
 int FUNC_3 (struct videobuf_buffer*) ;

__attribute__((used)) static int FUNC_4(struct videobuf_queue *VAR_4,
       struct videobuf_buffer *VAR_5,
       enum v4l2_field VAR_6)
{
 struct omap24xxcam_fh *VAR_7 = VAR_4->priv_data;
 int VAR_8 = 0;





 if (VAR_5->baddr) {

  if (VAR_7->pix.sizeimage > VAR_5->bsize) {

   VAR_8 = -VAR_0;
  } else
   VAR_5->size = VAR_7->pix.sizeimage;
 } else {
  if (VAR_5->state != VAR_2) {




   if (VAR_7->pix.sizeimage > VAR_5->size) {






    FUNC_1(VAR_4, VAR_5);
    VAR_5->size = VAR_7->pix.sizeimage;
   }
  } else {

   VAR_5->size = VAR_7->pix.sizeimage;
  }
 }

 if (VAR_8)
  return VAR_8;

 VAR_5->width = VAR_7->pix.width;
 VAR_5->height = VAR_7->pix.height;
 VAR_5->field = VAR_6;

 if (VAR_5->state == VAR_2) {
  if (VAR_5->memory == VAR_1)




   VAR_8 = FUNC_0(VAR_4, FUNC_3(VAR_5));
  else
   VAR_8 = FUNC_2(VAR_4, VAR_5, ((void*)0));
 }

 if (!VAR_8)
  VAR_5->state = VAR_3;
 else
  FUNC_1(VAR_4, VAR_5);

 return VAR_8;
}
