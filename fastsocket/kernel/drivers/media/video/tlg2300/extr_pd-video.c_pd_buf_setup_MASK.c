
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct front_face* priv_data; } ;
struct v4l2_pix_format {int height; int width; int sizeimage; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct video_data {int endpoint_addr; int lines_per_field; int lines_size; struct front_face* front; struct poseidon* pd; struct vbi_data* vbi; TYPE_1__ context; } ;
struct vbi_data {int vbi_size; struct video_data* video; } ;
struct poseidon {struct vbi_data vbi_data; struct video_data video_data; } ;
struct front_face {int type; struct poseidon* pd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;


 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (struct poseidon*) ;

__attribute__((used)) static int FUNC_3(struct videobuf_queue *VAR_1, unsigned int *VAR_2,
         unsigned int *VAR_3)
{
 struct front_face *VAR_4 = VAR_1->priv_data;
 struct poseidon *VAR_5 = VAR_4->pd;

 switch (VAR_4->type) {
 default:
  return -VAR_0;
 case 128: {
  struct video_data *VAR_6 = &VAR_5->video_data;
  struct v4l2_pix_format *VAR_7 = &VAR_6->context.pix;

  *VAR_3 = FUNC_0(VAR_7->sizeimage);
  if (*VAR_2 < 4)
   *VAR_2 = 4;
  if (1) {

   VAR_6->endpoint_addr = 0x82;
   VAR_6->vbi = &VAR_5->vbi_data;
   VAR_6->vbi->video = VAR_6;
   VAR_6->pd = VAR_5;
   VAR_6->lines_per_field = VAR_7->height / 2;
   VAR_6->lines_size = VAR_7->width * 2;
   VAR_6->front = VAR_4;
  }
  return FUNC_2(VAR_5);
 }

 case 129: {
  struct vbi_data *VAR_8 = &VAR_5->vbi_data;

  *VAR_3 = FUNC_0(VAR_8->vbi_size);
  FUNC_1("size : %d", *VAR_3);
  if (*VAR_2 == 0)
   *VAR_2 = 4;
 }
  break;
 }
 return 0;
}
