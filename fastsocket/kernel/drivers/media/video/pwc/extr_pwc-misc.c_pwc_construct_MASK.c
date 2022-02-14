
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int x; int y; int size; } ;
struct TYPE_4__ {int x; int y; int size; } ;
struct pwc_device {int image_mask; int vcinterface; int vendpoint; TYPE_3__ abs_max; int len_per_image; TYPE_2__ view_max; TYPE_1__ view_min; int pixfmt; scalar_t__ frame_trailer_size; scalar_t__ frame_header_size; int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

void FUNC_3(struct pwc_device *VAR_9)
{
 if (FUNC_0(VAR_9->type)) {

  VAR_9->view_min.x = 128;
  VAR_9->view_min.y = 96;
  VAR_9->view_max.x = 352;
  VAR_9->view_max.y = 288;
  VAR_9->abs_max.x = 352;
  VAR_9->abs_max.y = 288;
  VAR_9->image_mask = 1 << VAR_4 | 1 << VAR_1 | 1 << VAR_0;
  VAR_9->vcinterface = 2;
  VAR_9->vendpoint = 4;
  VAR_9->frame_header_size = 0;
  VAR_9->frame_trailer_size = 0;

 } else if (FUNC_1(VAR_9->type)) {

  VAR_9->view_min.x = 160;
  VAR_9->view_min.y = 120;
  VAR_9->view_max.x = 640;
  VAR_9->view_max.y = 480;
  VAR_9->image_mask = 1 << VAR_2 | 1 << VAR_3 | 1 << VAR_5;
  VAR_9->abs_max.x = 640;
  VAR_9->abs_max.y = 480;
  VAR_9->vcinterface = 3;
  VAR_9->vendpoint = 5;
  VAR_9->frame_header_size = VAR_6;
  VAR_9->frame_trailer_size = VAR_7;

 } else {

  VAR_9->view_min.x = 128;
  VAR_9->view_min.y = 96;

  VAR_9->view_max.x = 640;
  VAR_9->view_max.y = 480;
  VAR_9->image_mask = 1 << VAR_4 | 1 << VAR_2 | 1 << VAR_1 | 1 << VAR_3 | 1 << VAR_0 | 1 << VAR_5;
  VAR_9->abs_max.x = 640;
  VAR_9->abs_max.y = 480;
  VAR_9->vcinterface = 3;
  VAR_9->vendpoint = 4;
  VAR_9->frame_header_size = 0;
  VAR_9->frame_trailer_size = 0;
 }
 VAR_9->pixfmt = VAR_8;
 VAR_9->view_min.size = VAR_9->view_min.x * VAR_9->view_min.y;
 VAR_9->view_max.size = VAR_9->view_max.x * VAR_9->view_max.y;

 VAR_9->len_per_image = FUNC_2((VAR_9->abs_max.x * VAR_9->abs_max.y * 3) / 2);
}
