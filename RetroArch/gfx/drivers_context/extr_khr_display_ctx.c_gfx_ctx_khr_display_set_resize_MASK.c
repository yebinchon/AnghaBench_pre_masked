
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int invalid_swapchain; } ;
struct TYPE_7__ {int need_new_swapchain; TYPE_1__ context; scalar_t__ created_new_swapchain; } ;
struct TYPE_6__ {unsigned int width; unsigned int height; TYPE_3__ vk; int swap_interval; } ;
typedef TYPE_2__ khr_display_ctx_data_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0,
      unsigned VAR_1, unsigned VAR_2)
{
   khr_display_ctx_data_t *VAR_3 = (khr_display_ctx_data_t*)VAR_0;

   VAR_3->width = VAR_1;
   VAR_3->height = VAR_2;
   if (!FUNC_2(&VAR_3->vk, VAR_3->width, VAR_3->height,
            VAR_3->swap_interval))
   {
      FUNC_0("[Vulkan]: Failed to update swapchain.\n");
      return 0;
   }

   if (VAR_3->vk.created_new_swapchain)
      FUNC_1(&VAR_3->vk);

   VAR_3->vk.context.invalid_swapchain = 1;
   VAR_3->vk.need_new_swapchain = 0;
   return 0;
}
