
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int current_swapchain_index; int invalid_swapchain; int has_acquired_swapchain; int num_swapchain_images; scalar_t__* swapchain_semaphores; int device; int swap_interval; int swapchain_height; int swapchain_width; } ;
struct TYPE_13__ {scalar_t__ swapchain; TYPE_1__ context; int mailbox; scalar_t__ emulating_mailbox; } ;
typedef TYPE_2__ gfx_ctx_vulkan_data_t ;
struct TYPE_14__ {int member_0; } ;
typedef TYPE_3__ VkSemaphoreCreateInfo ;
typedef scalar_t__ VkResult ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_4__ VkFenceCreateInfo ;
typedef scalar_t__ VkFence ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,scalar_t__,scalar_t__,int*) ;
 int FUNC_5 (int ,TYPE_4__*,int *,scalar_t__*) ;
 int FUNC_6 (int ,TYPE_3__*,int *,scalar_t__*) ;
 int FUNC_7 (int ,scalar_t__,int *) ;
 int FUNC_8 (int ,int,scalar_t__*,int,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (int *,int*) ;

void FUNC_14(gfx_ctx_vulkan_data_t *VAR_9)
{
   unsigned VAR_10;
   VkResult VAR_11;
   VkFence VAR_12;
   VkFenceCreateInfo VAR_13 =
   { VAR_5 };
   VkSemaphoreCreateInfo VAR_14 =
   { VAR_6 };

   bool VAR_15 = 0;

retry:
   if (VAR_9->swapchain == VAR_4)
   {

      if (!FUNC_11(VAR_9, VAR_9->context.swapchain_width,
               VAR_9->context.swapchain_height, VAR_9->context.swap_interval))
      {
         FUNC_0("[Vulkan]: Failed to create new swapchain.\n");
         return;
      }

      if (VAR_9->swapchain == VAR_4)
      {

         VAR_9->context.current_swapchain_index = 0;
         FUNC_9(VAR_9);
         FUNC_10(VAR_9);
         VAR_9->context.invalid_swapchain = 1;
         return;
      }
   }

   FUNC_1(!VAR_9->context.has_acquired_swapchain);

   if (VAR_9->emulating_mailbox)
   {



      VAR_11 = FUNC_13(&VAR_9->mailbox, &VAR_9->context.current_swapchain_index);
      VAR_12 = VAR_4;
   }
   else
   {
      FUNC_5(VAR_9->context.device, &VAR_13, ((void*)0), &VAR_12);
      VAR_11 = FUNC_4(VAR_9->context.device,
            VAR_9->swapchain, VAR_0,
            VAR_4, VAR_12, &VAR_9->context.current_swapchain_index);
   }

   if (VAR_11 == VAR_7)
   {
      if (VAR_12 != VAR_4)
         FUNC_8(VAR_9->context.device, 1, &VAR_12, 1, VAR_0);
      VAR_9->context.has_acquired_swapchain = 1;
   }
   else
      VAR_9->context.has_acquired_swapchain = 0;





   if (VAR_12 != VAR_4)
      FUNC_7(VAR_9->context.device, VAR_12, ((void*)0));

   if (VAR_11 == VAR_3 || VAR_11 == VAR_8)
   {

      VAR_9->context.current_swapchain_index =
         (VAR_9->context.current_swapchain_index + 1) % VAR_9->context.num_swapchain_images;
   }
   else if (VAR_11 == VAR_1)
   {

      FUNC_12(VAR_9);

      if (VAR_15)
      {
         FUNC_0("[Vulkan]: Swapchain is out of date, trying to create new one. Have tried multiple times ...\n");
         FUNC_2(10);
      }
      else
         FUNC_0("[Vulkan]: Swapchain is out of date, trying to create new one.\n");
      VAR_15 = 1;
      FUNC_9(VAR_9);
      goto retry;
   }
   else if (VAR_11 != VAR_7)
   {

      FUNC_12(VAR_9);
      FUNC_0("[Vulkan]: Failed to acquire from swapchain (err = %d).\n",
            (int)VAR_11);
      if (VAR_11 == VAR_2)
         FUNC_0("[Vulkan]: Got VK_ERROR_SURFACE_LOST_KHR.\n");

      VAR_9->context.invalid_swapchain = 1;
      FUNC_9(VAR_9);
      return;
   }

   VAR_10 = VAR_9->context.current_swapchain_index;
   if (VAR_9->context.swapchain_semaphores[VAR_10] == VAR_4)
   {
      FUNC_6(VAR_9->context.device, &VAR_14,
            ((void*)0), &VAR_9->context.swapchain_semaphores[VAR_10]);
   }
   FUNC_10(VAR_9);
}
