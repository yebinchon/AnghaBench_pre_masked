
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_frame {unsigned long back_chain; } ;
struct pt_regs {unsigned long* gprs; } ;
struct TYPE_2__ {scalar_t__ thread_info; scalar_t__ async_stack; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (unsigned int*,unsigned long,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pt_regs* const) ;

void FUNC_2(struct pt_regs * const VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;
 struct stack_frame* VAR_6;

 if (FUNC_1 (VAR_3))
  return;

 VAR_5 = VAR_3->gprs[15];
 VAR_6 = (struct stack_frame*)VAR_5;

 if (!VAR_6->back_chain)
  return;

 VAR_5 = VAR_6->back_chain;

 VAR_5 = FUNC_0(&VAR_4, VAR_5, VAR_1.async_stack - VAR_0,
       VAR_1.async_stack);

 FUNC_0(&VAR_4, VAR_5, VAR_1.thread_info,
       VAR_1.thread_info + VAR_2);
}
