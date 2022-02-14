
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_swapchain_images; int * swapchain_fences; int device; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;
struct TYPE_8__ {int member_0; } ;
typedef TYPE_3__ VkFenceCreateInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int *,int *) ;

__attribute__((used)) static void FUNC_1(gfx_ctx_vulkan_data_t *VAR_1)
{
   VkFenceCreateInfo VAR_2 =
   { VAR_0 };

   unsigned VAR_3;
   for (VAR_3 = 0; VAR_3 < VAR_1->context.num_swapchain_images; VAR_3++)
   {
      if (!VAR_1->context.swapchain_fences[VAR_3])
      {
         FUNC_0(VAR_1->context.device, &VAR_2, ((void*)0),
               &VAR_1->context.swapchain_fences[VAR_3]);
      }
   }
}
