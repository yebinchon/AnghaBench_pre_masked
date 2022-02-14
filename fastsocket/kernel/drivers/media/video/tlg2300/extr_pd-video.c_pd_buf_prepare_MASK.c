
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videobuf_queue {struct front_face* priv_data; } ;
struct videobuf_buffer {int field; int state; int size; int height; int width; } ;
struct v4l2_pix_format {int height; int width; int sizeimage; } ;
struct front_face {int type; TYPE_4__* pd; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_7__ {int vbi_size; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct TYPE_6__ {TYPE_1__ context; } ;
struct TYPE_8__ {TYPE_3__ vbi_data; TYPE_2__ video_data; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct videobuf_queue*,struct videobuf_buffer*,int *) ;

__attribute__((used)) static int FUNC_1(struct videobuf_queue *VAR_3, struct videobuf_buffer *VAR_4,
      enum v4l2_field VAR_5)
{
 struct front_face *VAR_6 = VAR_3->priv_data;
 int VAR_7;

 switch (VAR_6->type) {
 case 128:
  if (VAR_1 == VAR_4->state) {
   struct v4l2_pix_format *VAR_8;

   VAR_8 = &VAR_6->pd->video_data.context.pix;
   VAR_4->size = VAR_8->sizeimage;
   VAR_4->width = VAR_8->width;
   VAR_4->height = VAR_8->height;
   VAR_7 = FUNC_0(VAR_3, VAR_4, ((void*)0));
   if (VAR_7 < 0)
    return VAR_7;
  }
  break;
 case 129:
  if (VAR_1 == VAR_4->state) {
   VAR_4->size = VAR_6->pd->vbi_data.vbi_size;
   VAR_7 = FUNC_0(VAR_3, VAR_4, ((void*)0));
   if (VAR_7 < 0)
    return VAR_7;
  }
  break;
 default:
  return -VAR_0;
 }
 VAR_4->field = VAR_5;
 VAR_4->state = VAR_2;
 return 0;
}
