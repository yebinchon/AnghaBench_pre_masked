
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vulkan_emulated_mailbox {int request_acquire; scalar_t__ result; int acquired; int device; int lock; int cond; int index; int swapchain; scalar_t__ dead; } ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ VkFenceCreateInfo ;
typedef int VkFence ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int,int *,int,int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_4)
{
   VkFence VAR_5;
   VkFenceCreateInfo VAR_6 = { VAR_2 };
   struct vulkan_emulated_mailbox *VAR_7 = (struct vulkan_emulated_mailbox*)VAR_4;

   if (!VAR_7)
      return;

   FUNC_5(VAR_7->device, &VAR_6, ((void*)0), &VAR_5);

   for (;;)
   {
      FUNC_2(VAR_7->lock);
      while (!VAR_7->dead && !VAR_7->request_acquire)
         FUNC_1(VAR_7->cond, VAR_7->lock);

      if (VAR_7->dead)
      {
         FUNC_3(VAR_7->lock);
         break;
      }

      VAR_7->request_acquire = 0;
      FUNC_3(VAR_7->lock);

      VAR_7->result = FUNC_4(VAR_7->device, VAR_7->swapchain, VAR_0,
            VAR_1, VAR_5, &VAR_7->index);

      if (VAR_7->result == VAR_3)
         FUNC_8(VAR_7->device, 1, &VAR_5, 1, VAR_0);
      FUNC_7(VAR_7->device, 1, &VAR_5);

      if (VAR_7->result == VAR_3)
      {
         FUNC_2(VAR_7->lock);
         VAR_7->acquired = 1;
         FUNC_0(VAR_7->cond);
         FUNC_3(VAR_7->lock);
      }
   }

   FUNC_6(VAR_7->device, VAR_5, ((void*)0));
}
