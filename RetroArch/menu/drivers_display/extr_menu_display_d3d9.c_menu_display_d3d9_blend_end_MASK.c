
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ userdata; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_2__ d3d9_video_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(video_frame_info_t *VAR_0)
{
   d3d9_video_t *VAR_1 = (d3d9_video_t*)VAR_0->userdata;

   if (!VAR_1)
      return;

   FUNC_0(VAR_1->dev);
}
