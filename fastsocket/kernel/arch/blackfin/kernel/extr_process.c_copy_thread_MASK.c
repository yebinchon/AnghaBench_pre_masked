
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; unsigned long ksp; unsigned long pc; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {scalar_t__ r0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

int
FUNC_1(unsigned long VAR_2,
     unsigned long VAR_3, unsigned long VAR_4,
     struct task_struct *VAR_5, struct pt_regs *VAR_6)
{
 struct pt_regs *VAR_7;

 VAR_7 = (struct pt_regs *) (FUNC_0(VAR_5) + VAR_0) - 1;
 *VAR_7 = *VAR_6;
 VAR_7->r0 = 0;

 VAR_5->thread.usp = VAR_3;
 VAR_5->thread.ksp = (unsigned long)VAR_7;
 VAR_5->thread.pc = (unsigned long)VAR_1;

 return 0;
}
