
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int current_swapchain_index; scalar_t__* swapchain_fences; int* swapchain_fences_signalled; int device; } ;
struct TYPE_7__ {TYPE_1__ context; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;
struct TYPE_8__ {int member_0; } ;
typedef TYPE_3__ VkFenceCreateInfo ;
typedef scalar_t__ VkFence ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*,int *,scalar_t__*) ;
 int FUNC_1 (int ,int,scalar_t__*) ;
 int FUNC_2 (int ,int,scalar_t__*,int,int ) ;

__attribute__((used)) static void FUNC_3(gfx_ctx_vulkan_data_t *VAR_3)
{
   VkFenceCreateInfo VAR_4 =
   { VAR_2 };

   unsigned VAR_5 = VAR_3->context.current_swapchain_index;
   VkFence *VAR_6 = &VAR_3->context.swapchain_fences[VAR_5];

   if (*VAR_6 != VAR_1)
   {
      if (VAR_3->context.swapchain_fences_signalled[VAR_5])
         FUNC_2(VAR_3->context.device, 1, VAR_6, 1, VAR_0);
      FUNC_1(VAR_3->context.device, 1, VAR_6);
   }
   else
      FUNC_0(VAR_3->context.device, &VAR_4, ((void*)0), VAR_6);
   VAR_3->context.swapchain_fences_signalled[VAR_5] = 0;
}
