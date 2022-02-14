
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {TYPE_3__* context; int cmd; struct vk_per_frame* chain; struct vk_per_frame* swapchain; } ;
typedef TYPE_4__ vk_t ;
struct TYPE_22__ {int context_data; int (* cb_swap_buffers ) (int ,TYPE_5__*) ;} ;
typedef TYPE_5__ video_frame_info_t ;
struct TYPE_19__ {int image; } ;
struct vk_per_frame {TYPE_2__ backbuffer; int cmd; } ;
struct TYPE_23__ {int commandBufferCount; int signalSemaphoreCount; scalar_t__* pSignalSemaphores; int * pCommandBuffers; int member_0; } ;
typedef TYPE_6__ VkSubmitInfo ;
struct TYPE_24__ {int member_2; int member_4; int member_3; int member_1; int member_0; } ;
typedef TYPE_7__ VkImageSubresourceRange ;
struct TYPE_25__ {int flags; int member_0; } ;
typedef TYPE_8__ VkCommandBufferBeginInfo ;
struct TYPE_18__ {float member_0; float member_1; float member_2; float member_3; } ;
struct TYPE_26__ {TYPE_1__ member_0; } ;
typedef TYPE_9__ VkClearColorValue ;
struct TYPE_20__ {unsigned int current_swapchain_index; scalar_t__* swapchain_semaphores; int* swapchain_fences_signalled; int queue_lock; int * swapchain_fences; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_8__*) ;
 int FUNC_4 (int ,int ,int ,TYPE_9__ const*,int,TYPE_7__ const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,TYPE_6__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(vk_t *VAR_13, video_frame_info_t *VAR_14)
{
   VkCommandBufferBeginInfo VAR_15 = {
      VAR_11 };
   VkSubmitInfo VAR_16 = {
      VAR_12 };

   const VkClearColorValue VAR_17 = {{ 0.0f, 0.0f, 0.0f, 1.0f }};
   const VkImageSubresourceRange VAR_18 = { VAR_3, 0, 1, 0, 1 };
   unsigned VAR_19 = VAR_13->context->current_swapchain_index;
   struct vk_per_frame *VAR_20 = &VAR_13->swapchain[VAR_19];
   VAR_13->chain = VAR_20;
   VAR_13->cmd = VAR_20->cmd;
   VAR_15.flags = VAR_2;
   FUNC_7(VAR_13->cmd, 0);
   FUNC_3(VAR_13->cmd, &VAR_15);

   FUNC_8(VAR_13, VAR_13->cmd, VAR_20->backbuffer.image,
         VAR_6, VAR_5,
         0, VAR_1,
         VAR_9,
         VAR_10);

   FUNC_4(VAR_13->cmd, VAR_20->backbuffer.image, VAR_5,
         &VAR_17, 1, &VAR_18);

   FUNC_8(VAR_13, VAR_13->cmd, VAR_20->backbuffer.image,
         VAR_5, VAR_4,
         VAR_1, VAR_0,
         VAR_10,
         VAR_8);

   FUNC_5(VAR_13->cmd);

   VAR_16.commandBufferCount = 1;
   VAR_16.pCommandBuffers = &VAR_13->cmd;
   if (VAR_13->context->swapchain_semaphores[VAR_19] != VAR_7)
   {
      VAR_16.signalSemaphoreCount = 1;
      VAR_16.pSignalSemaphores = &VAR_13->context->swapchain_semaphores[VAR_19];
   }




   FUNC_6(VAR_13->context->queue, 1,
         &VAR_16, VAR_13->context->swapchain_fences[VAR_19]);
   VAR_13->context->swapchain_fences_signalled[VAR_19] = 1;




   VAR_14->cb_swap_buffers(VAR_14->context_data, VAR_14);
}
