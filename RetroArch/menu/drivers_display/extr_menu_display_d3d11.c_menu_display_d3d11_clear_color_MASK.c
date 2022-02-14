
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ userdata; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int menu_display_ctx_clearcolor_t ;
struct TYPE_5__ {int renderTargetView; int context; } ;
typedef TYPE_2__ d3d11_video_t ;


 int FUNC_0 (int ,int ,float*) ;

__attribute__((used)) static void FUNC_1(
      menu_display_ctx_clearcolor_t* VAR_0,
      video_frame_info_t *VAR_1)
{
   d3d11_video_t *VAR_2 = (d3d11_video_t*)VAR_1->userdata;

   if (!VAR_2 || !VAR_0)
      return;

   FUNC_0(VAR_2->context,
         VAR_2->renderTargetView, (float*)VAR_0);
}
