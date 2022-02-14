
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long usp; unsigned long ksp; } ;
struct task_struct {TYPE_1__ thread; scalar_t__ mm; int * clear_child_tid; int set_child_tid; } ;
struct switch_stack {unsigned long return_ip; scalar_t__ r9; } ;
struct pt_regs {int mof; scalar_t__ r10; } ;
struct TYPE_4__ {int tls; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pt_regs* FUNC_0 (struct task_struct*) ;
 TYPE_2__* FUNC_1 (struct task_struct*) ;

int
FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
 unsigned long VAR_4,
 struct task_struct *VAR_5, struct pt_regs *VAR_6)
{
 struct pt_regs *VAR_7;
 struct switch_stack *VAR_8;






 VAR_7 = FUNC_0(VAR_5);
 *VAR_7 = *VAR_6;
        VAR_5->set_child_tid = *(VAR_5->clear_child_tid = ((void*)0));
        VAR_7->r10 = 0;




 if (VAR_5->mm && (VAR_2 & VAR_0)) {
  FUNC_1(VAR_5)->tls = VAR_6->mof;
 }


 VAR_8 = ((struct switch_stack *) VAR_7) - 1;


 VAR_8->r9 = 0;





 VAR_8->return_ip = (unsigned long) VAR_1;


 VAR_5->thread.usp = VAR_3;
 VAR_5->thread.ksp = (unsigned long) VAR_8;

 return 0;
}
