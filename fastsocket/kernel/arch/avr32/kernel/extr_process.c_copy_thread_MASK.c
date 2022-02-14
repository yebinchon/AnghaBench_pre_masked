
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sr; unsigned long ksp; unsigned long pc; } ;
struct TYPE_4__ {TYPE_1__ cpu_context; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {unsigned long sp; scalar_t__ r12; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

int FUNC_5(unsigned long VAR_6, unsigned long VAR_7,
  unsigned long VAR_8,
  struct task_struct *VAR_9, struct pt_regs *VAR_10)
{
 struct pt_regs *VAR_11;

 VAR_11 = ((struct pt_regs *)(VAR_3 + (unsigned long)FUNC_2(VAR_9))) - 1;
 *VAR_11 = *VAR_10;

 if (FUNC_4(VAR_10))
  VAR_11->sp = VAR_7;
 else
  VAR_11->sp = (unsigned long)FUNC_2(VAR_9) + VAR_3;

 VAR_11->r12 = 0;

 VAR_9->thread.cpu_context.sr = VAR_1 | VAR_2;
 VAR_9->thread.cpu_context.ksp = (unsigned long)VAR_11;
 VAR_9->thread.cpu_context.pc = (unsigned long)VAR_5;

 FUNC_0(VAR_9, VAR_4);
 if ((VAR_6 & VAR_0) && FUNC_3(VAR_4))
  FUNC_1(VAR_9);

 return 0;
}
