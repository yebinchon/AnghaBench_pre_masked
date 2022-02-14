
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vulkan_emulated_mailbox {int dead; scalar_t__ cond; scalar_t__ lock; scalar_t__ thread; } ;


 int FUNC_0 (struct vulkan_emulated_mailbox*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(struct vulkan_emulated_mailbox *VAR_0)
{
   if (VAR_0->thread)
   {
      FUNC_4(VAR_0->lock);
      VAR_0->dead = 1;
      FUNC_2(VAR_0->cond);
      FUNC_5(VAR_0->lock);
      FUNC_6(VAR_0->thread);
   }

   if (VAR_0->lock)
      FUNC_3(VAR_0->lock);
   if (VAR_0->cond)
      FUNC_1(VAR_0->cond);

   FUNC_0(VAR_0, 0, sizeof(*VAR_0));
}
