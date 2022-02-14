
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_swapchain_images; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_4__ {int interval; int egl; } ;
typedef TYPE_2__ gfx_ctx_drm_data_t ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void *VAR_3, void *VAR_4)
{
   gfx_ctx_drm_data_t *VAR_5 = (gfx_ctx_drm_data_t*)VAR_3;
   video_frame_info_t *VAR_6 = (video_frame_info_t*)VAR_4;

   switch (VAR_0)
   {
      case 130:
      case 129:
      case 128:



         break;
      default:
         break;
   }






   if (FUNC_3(VAR_5->interval))
      return;

   VAR_2 = FUNC_2();


   if (VAR_6->max_swapchain_images >= 3 &&
         FUNC_1(VAR_1))
      return;

   FUNC_3(1);
}
