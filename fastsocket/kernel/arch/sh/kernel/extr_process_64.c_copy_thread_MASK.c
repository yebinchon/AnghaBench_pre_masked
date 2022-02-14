
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; unsigned long pc; struct pt_regs* uregs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int sr; void** regs; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * VAR_3 ;
 void* FUNC_2 (unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,struct pt_regs*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

int FUNC_6(unsigned long VAR_5, unsigned long VAR_6,
  unsigned long VAR_7,
  struct task_struct *VAR_8, struct pt_regs *VAR_9)
{
 struct pt_regs *VAR_10;
 VAR_10 = (struct pt_regs *)(VAR_1 + FUNC_4(VAR_8)) - 1;

 *VAR_10 = *VAR_9;







 if (FUNC_5(VAR_9)) {
  VAR_10->regs[15] = FUNC_2(VAR_6);
  VAR_8->thread.uregs = VAR_10;
 } else {
  VAR_10->regs[15] =
   FUNC_2((unsigned long)FUNC_4(VAR_8) +
      VAR_1);
 }

 VAR_10->regs[9] = 0;
 VAR_10->sr |= VAR_0;

 VAR_8->thread.sp = (unsigned long) VAR_10;
 VAR_8->thread.pc = (unsigned long) VAR_4;

 return 0;
}
