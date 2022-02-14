
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; scalar_t__ userdata; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_7__ {int dev; } ;
typedef TYPE_2__ d3d9_video_t ;
struct TYPE_8__ {int bottom; int right; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_3__ RECT ;


 int FUNC_0 (int ,TYPE_3__*) ;

void FUNC_1(video_frame_info_t *VAR_0)
{
   RECT VAR_1;
   d3d9_video_t *VAR_2 = (d3d9_video_t*)VAR_0->userdata;

   if (!VAR_2)
      return;

   VAR_1.left = 0;
   VAR_1.top = 0;
   VAR_1.right = VAR_0->width;
   VAR_1.bottom = VAR_0->height;

   FUNC_0(VAR_2->dev, &VAR_1);
}
