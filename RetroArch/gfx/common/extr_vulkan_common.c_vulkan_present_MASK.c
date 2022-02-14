
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int has_acquired_swapchain; int queue_lock; int queue; int * swapchain_semaphores; } ;
struct TYPE_8__ {scalar_t__ swapchain; TYPE_1__ context; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;
typedef scalar_t__ VkResult ;
struct TYPE_9__ {int swapchainCount; scalar_t__* pSwapchains; unsigned int* pImageIndices; scalar_t__* pResults; int waitSemaphoreCount; int * pWaitSemaphores; int member_0; } ;
typedef TYPE_3__ VkPresentInfoKHR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(gfx_ctx_vulkan_data_t *VAR_3, unsigned VAR_4)
{
   VkPresentInfoKHR VAR_5 = { VAR_1 };
   VkResult VAR_6 = VAR_2;
   VkResult VAR_7 = VAR_2;

   if (!VAR_3->context.has_acquired_swapchain)
      return;
   VAR_3->context.has_acquired_swapchain = 0;


   if (VAR_3->swapchain == VAR_0)
   {
      FUNC_1(10);
      return;
   }

   VAR_5.swapchainCount = 1;
   VAR_5.pSwapchains = &VAR_3->swapchain;
   VAR_5.pImageIndices = &VAR_4;
   VAR_5.pResults = &VAR_6;
   VAR_5.waitSemaphoreCount = 1;
   VAR_5.pWaitSemaphores = &VAR_3->context.swapchain_semaphores[VAR_4];





   VAR_7 = FUNC_5(VAR_3->context.queue, &VAR_5);





   if (VAR_7 != VAR_2 || VAR_6 != VAR_2)
   {
      FUNC_0("[Vulkan]: QueuePresent failed, destroying swapchain.\n");
      FUNC_6(VAR_3);
   }




}
