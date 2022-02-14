
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long usp; unsigned long ksp; scalar_t__* fpstate; int fs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct switch_stack {unsigned long retpc; } ;
struct pt_regs {scalar_t__ d0; } ;
struct TYPE_4__ {int seg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

int FUNC_2(unsigned long VAR_3,
  unsigned long VAR_4, unsigned long VAR_5,
  struct task_struct * VAR_6, struct pt_regs * VAR_7)
{
 struct pt_regs * VAR_8;
 struct switch_stack * VAR_9, *VAR_10;
 unsigned long *VAR_11;

 VAR_8 = (struct pt_regs *) (FUNC_1(VAR_6) + VAR_1) - 1;

 *VAR_8 = *VAR_7;
 VAR_8->d0 = 0;

 VAR_11 = ((unsigned long *) VAR_7);
 VAR_10 = ((struct switch_stack *) VAR_11) - 1;

 VAR_9 = ((struct switch_stack *) VAR_8) - 1;
 *VAR_9 = *VAR_10;
 VAR_9->retpc = (unsigned long)VAR_2;

 VAR_6->thread.usp = VAR_4;
 VAR_6->thread.ksp = (unsigned long)VAR_9;




 VAR_6->thread.fs = FUNC_0().seg;
 return 0;
}
