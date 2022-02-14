
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vulkan_filter_chain_t ;
struct TYPE_5__ {scalar_t__ filter_chain; TYPE_1__* context; int render_pass; int vk_vp; } ;
typedef TYPE_2__ vk_t ;
struct vulkan_filter_chain_swapchain_info {int num_indices; int render_pass; int format; int viewport; } ;
struct TYPE_4__ {int num_swapchain_images; int swapchain_format; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct vulkan_filter_chain_swapchain_info*) ;

__attribute__((used)) static void FUNC_2(vk_t *VAR_0)
{
   struct vulkan_filter_chain_swapchain_info VAR_1;

   VAR_1.viewport = VAR_0->vk_vp;
   VAR_1.format = VAR_0->context->swapchain_format;
   VAR_1.render_pass = VAR_0->render_pass;
   VAR_1.num_indices = VAR_0->context->num_swapchain_images;

   if (!FUNC_1((vulkan_filter_chain_t*)VAR_0->filter_chain, &VAR_1))
      FUNC_0("Failed to update filter chain info. This will probably lead to a crash ...\n");
}
