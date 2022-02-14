
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


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vulkan_filter_chain_create_info*,int ,int) ;
 int FUNC_2 (struct vulkan_filter_chain_create_info*,char const*,int ) ;

__attribute__((used)) static bool FUNC_3(vk_t *VAR_2, const char *VAR_3)
{
   struct vulkan_filter_chain_create_info VAR_4;

   FUNC_1(&VAR_4, 0, sizeof(VAR_4));

   VAR_4.device = VAR_2->context->device;
   VAR_4.gpu = VAR_2->context->gpu;
   VAR_4.memory_properties = &VAR_2->context->memory_properties;
   VAR_4.pipeline_cache = VAR_2->pipelines.cache;
   VAR_4.queue = VAR_2->context->queue;
   VAR_4.command_pool = VAR_2->swapchain[VAR_2->context->current_swapchain_index].cmd_pool;
   VAR_4.max_input_size.width = VAR_2->tex_w;
   VAR_4.max_input_size.height = VAR_2->tex_h;
   VAR_4.swapchain.viewport = VAR_2->vk_vp;
   VAR_4.swapchain.format = VAR_2->context->swapchain_format;
   VAR_4.swapchain.render_pass = VAR_2->render_pass;
   VAR_4.swapchain.num_indices = VAR_2->context->num_swapchain_images;
   VAR_4.original_format = VAR_2->tex_fmt;

   VAR_2->filter_chain = FUNC_2(
         &VAR_4, VAR_3,
         VAR_2->video.smooth ?
         VAR_0 : VAR_1);

   if (!VAR_2->filter_chain)
   {
      FUNC_0("[Vulkan]: Failed to create preset: \"%s\".\n", VAR_3);
      return 0;
   }

   return 1;
}
