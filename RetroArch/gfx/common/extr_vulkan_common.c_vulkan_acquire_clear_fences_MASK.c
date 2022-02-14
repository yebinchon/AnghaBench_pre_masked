
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num_swapchain_images; int* swapchain_fences_signalled; scalar_t__* swapchain_fences; int device; } ;
struct TYPE_5__ {TYPE_1__ context; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1(gfx_ctx_vulkan_data_t *VAR_1)
{
   unsigned VAR_2;
   for (VAR_2 = 0; VAR_2 < VAR_1->context.num_swapchain_images; VAR_2++)
   {
      if (VAR_1->context.swapchain_fences[VAR_2])
      {
         FUNC_0(VAR_1->context.device,
               VAR_1->context.swapchain_fences[VAR_2], ((void*)0));
         VAR_1->context.swapchain_fences[VAR_2] = VAR_0;
      }
      VAR_1->context.swapchain_fences_signalled[VAR_2] = 0;
   }
}
