
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ smooth; } ;
struct TYPE_9__ {int cache; } ;
struct TYPE_15__ {int filter_chain; TYPE_6__ video; int tex_fmt; TYPE_5__* context; int render_pass; int vk_vp; int tex_h; int tex_w; TYPE_2__* swapchain; TYPE_1__ pipelines; } ;
typedef TYPE_7__ vk_t ;
struct TYPE_12__ {int num_indices; int render_pass; int format; int viewport; } ;
struct TYPE_11__ {int height; int width; } ;
struct vulkan_filter_chain_create_info {int original_format; TYPE_4__ swapchain; TYPE_3__ max_input_size; int command_pool; int queue; int pipeline_cache; int * memory_properties; int gpu; int device; } ;
typedef int info ;
struct TYPE_13__ {size_t current_swapchain_index; int num_swapchain_images; int swapchain_format; int queue; int memory_properties; int gpu; int device; } ;
struct TYPE_10__ {int cmd_pool; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vulkan_filter_chain_create_info*,int ,int) ;
 int FUNC_2 (struct vulkan_filter_chain_create_info*,int ) ;

__attribute__((used)) static bool FUNC_3(vk_t *VAR_2)
{
   struct vulkan_filter_chain_create_info VAR_3;

   FUNC_1(&VAR_3, 0, sizeof(VAR_3));

   if (!VAR_2->context)
      return 0;

   VAR_3.device = VAR_2->context->device;
   VAR_3.gpu = VAR_2->context->gpu;
   VAR_3.memory_properties = &VAR_2->context->memory_properties;
   VAR_3.pipeline_cache = VAR_2->pipelines.cache;
   VAR_3.queue = VAR_2->context->queue;
   VAR_3.command_pool = VAR_2->swapchain[VAR_2->context->current_swapchain_index].cmd_pool;
   VAR_3.max_input_size.width = VAR_2->tex_w;
   VAR_3.max_input_size.height = VAR_2->tex_h;
   VAR_3.swapchain.viewport = VAR_2->vk_vp;
   VAR_3.swapchain.format = VAR_2->context->swapchain_format;
   VAR_3.swapchain.render_pass = VAR_2->render_pass;
   VAR_3.swapchain.num_indices = VAR_2->context->num_swapchain_images;
   VAR_3.original_format = VAR_2->tex_fmt;

   VAR_2->filter_chain = FUNC_2(
         &VAR_3,
         VAR_2->video.smooth ?
         VAR_0 : VAR_1);

   if (!VAR_2->filter_chain)
   {
      FUNC_0("Failed to create filter chain.\n");
      return 0;
   }

   return 1;
}
