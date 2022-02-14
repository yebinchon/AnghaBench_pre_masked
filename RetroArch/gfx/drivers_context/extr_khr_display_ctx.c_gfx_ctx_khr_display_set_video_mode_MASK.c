
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int monitor_index; } ;
typedef TYPE_2__ video_frame_info_t ;
struct vulkan_display_surface_info {unsigned int width; unsigned int height; int monitor_index; } ;
struct TYPE_6__ {int swapchain_height; int swapchain_width; } ;
struct TYPE_9__ {TYPE_1__ context; } ;
struct TYPE_8__ {TYPE_4__ vk; int height; int width; int swap_interval; } ;
typedef TYPE_3__ khr_display_ctx_data_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_4__*,int ,struct vulkan_display_surface_info*,int *,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(void *VAR_1,
      video_frame_info_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      bool VAR_5)
{
   struct vulkan_display_surface_info VAR_6;
   khr_display_ctx_data_t *VAR_7 = (khr_display_ctx_data_t*)VAR_1;

   if (!VAR_5)
   {
      VAR_3 = 0;
      VAR_4 = 0;
   }

   VAR_6.width = VAR_3;
   VAR_6.height = VAR_4;
   VAR_6.monitor_index = VAR_2->monitor_index;

   if (!FUNC_2(&VAR_7->vk, VAR_0, &VAR_6, ((void*)0),
            0, 0, VAR_7->swap_interval))
   {
      FUNC_0("[Vulkan]: Failed to create KHR_display surface.\n");
      goto error;
   }

   VAR_7->width = VAR_7->vk.context.swapchain_width;
   VAR_7->height = VAR_7->vk.context.swapchain_height;

   return 1;

error:
   FUNC_1(VAR_1);
   return 0;
}
