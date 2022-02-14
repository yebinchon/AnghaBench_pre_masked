
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* swapchain_images; int has_acquired_swapchain; scalar_t__* swapchain_semaphores; scalar_t__* swapchain_fences; int device; } ;
struct TYPE_5__ {scalar_t__ swapchain; TYPE_1__ context; int mailbox; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(gfx_ctx_vulkan_data_t *VAR_2)
{
   unsigned VAR_3;

   FUNC_5(&VAR_2->mailbox);
   if (VAR_2->swapchain != VAR_0)
   {
      FUNC_4(VAR_2->context.device);
      FUNC_3(VAR_2->context.device, VAR_2->swapchain, ((void*)0));
      FUNC_0(VAR_2->context.swapchain_images, 0, sizeof(VAR_2->context.swapchain_images));
      VAR_2->swapchain = VAR_0;
      VAR_2->context.has_acquired_swapchain = 0;
   }

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if (VAR_2->context.swapchain_semaphores[VAR_3] != VAR_0)
         FUNC_2(VAR_2->context.device,
               VAR_2->context.swapchain_semaphores[VAR_3], ((void*)0));
      if (VAR_2->context.swapchain_fences[VAR_3] != VAR_0)
         FUNC_1(VAR_2->context.device,
               VAR_2->context.swapchain_fences[VAR_3], ((void*)0));
   }

   FUNC_0(VAR_2->context.swapchain_semaphores, 0, sizeof(VAR_2->context.swapchain_semaphores));
   FUNC_0(VAR_2->context.swapchain_fences, 0, sizeof(VAR_2->context.swapchain_fences));
}
