
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; unsigned long ksp; } ;
struct task_struct {TYPE_1__ thread; int * clear_child_tid; int set_child_tid; } ;
struct switch_stack {unsigned long return_ip; scalar_t__ r9; } ;
struct pt_regs {scalar_t__ r10; } ;


 int FUNC_0 (char*,struct pt_regs*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pt_regs*) ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;

int FUNC_3(unsigned long VAR_1, unsigned long VAR_2,
  unsigned long VAR_3,
  struct task_struct *VAR_4, struct pt_regs *VAR_5)
{
 struct pt_regs * VAR_6;
 struct switch_stack *VAR_7;





 VAR_6 = FUNC_2(VAR_4);

 *VAR_6 = *VAR_5;

        VAR_4->set_child_tid = *(VAR_4->clear_child_tid = ((void*)0));

        VAR_6->r10 = 0;



 VAR_7 = ((struct switch_stack *)VAR_6) - 1;

 VAR_7->r9 = 0;



 VAR_7->return_ip = (unsigned long) VAR_0;



 VAR_4->thread.usp = VAR_2;



 VAR_4->thread.ksp = (unsigned long) VAR_7;






 return 0;
}
