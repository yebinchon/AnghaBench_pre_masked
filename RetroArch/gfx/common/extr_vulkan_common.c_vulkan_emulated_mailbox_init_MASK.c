
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vulkan_emulated_mailbox {int thread; int lock; int cond; int swapchain; int device; } ;
typedef int VkSwapchainKHR ;
typedef int VkDevice ;


 int FUNC_0 (struct vulkan_emulated_mailbox*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct vulkan_emulated_mailbox*) ;
 int VAR_0 ;

bool FUNC_4(struct vulkan_emulated_mailbox *VAR_1,
   VkDevice VAR_2,
   VkSwapchainKHR VAR_3)
{
   FUNC_0(VAR_1, 0, sizeof(*VAR_1));
   VAR_1->device = VAR_2;
   VAR_1->swapchain = VAR_3;

   VAR_1->cond = FUNC_1();
   if (!VAR_1->cond)
      return 0;
   VAR_1->lock = FUNC_2();
   if (!VAR_1->lock)
      return 0;
   VAR_1->thread = FUNC_3(VAR_0, VAR_1);
   if (!VAR_1->thread)
      return 0;
   return 1;
}
