
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vulkan_emulated_mailbox {scalar_t__ swapchain; int has_pending_request; int request_acquire; int acquired; unsigned int index; int lock; int result; int cond; } ;
typedef int VkResult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

VkResult FUNC_3(struct vulkan_emulated_mailbox *VAR_3,
      unsigned *VAR_4)
{
   VkResult VAR_5;
   if (VAR_3->swapchain == VAR_1)
      return VAR_0;

   FUNC_1(VAR_3->lock);

   if (!VAR_3->has_pending_request)
   {
      VAR_3->request_acquire = 1;
      FUNC_0(VAR_3->cond);
   }

   VAR_3->has_pending_request = 1;

   if (VAR_3->acquired)
   {
      VAR_5 = VAR_3->result;
      *VAR_4 = VAR_3->index;
      VAR_3->has_pending_request = 0;
      VAR_3->acquired = 0;
   }
   else
      VAR_5 = VAR_2;

   FUNC_2(VAR_3->lock);
   return VAR_5;
}
