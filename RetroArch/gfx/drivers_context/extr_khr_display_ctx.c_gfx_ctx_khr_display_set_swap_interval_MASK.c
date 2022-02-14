
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int need_new_swapchain; scalar_t__ swapchain; } ;
struct TYPE_4__ {int swap_interval; TYPE_1__ vk; } ;
typedef TYPE_2__ khr_display_ctx_data_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0,
      int VAR_1)
{
   khr_display_ctx_data_t *VAR_2 = (khr_display_ctx_data_t*)VAR_0;

   if (VAR_2->swap_interval != VAR_1)
   {
      VAR_2->swap_interval = VAR_1;
      if (VAR_2->vk.swapchain)
         VAR_2->vk.need_new_swapchain = 1;
   }
}
