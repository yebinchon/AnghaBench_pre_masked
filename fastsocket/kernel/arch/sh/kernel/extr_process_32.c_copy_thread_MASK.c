
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int addr_limit; } ;
struct TYPE_2__ {unsigned long sp; unsigned long pc; scalar_t__ ubc_pc; int dsp_status; int fpu; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {unsigned long* regs; unsigned long gbr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_3 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_4 ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;
 struct thread_info* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,struct pt_regs*) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

int FUNC_6(unsigned long VAR_5, unsigned long VAR_6,
  unsigned long VAR_7,
  struct task_struct *VAR_8, struct pt_regs *VAR_9)
{
 struct thread_info *VAR_10 = FUNC_3(VAR_8);
 struct pt_regs *VAR_11;
 VAR_11 = FUNC_2(VAR_8);
 *VAR_11 = *VAR_9;

 if (FUNC_5(VAR_9)) {
  VAR_11->regs[15] = VAR_6;
  VAR_10->addr_limit = VAR_2;
 } else {
  VAR_11->regs[15] = (unsigned long)VAR_11;
  VAR_10->addr_limit = VAR_1;
 }

 if (VAR_5 & VAR_0)
  VAR_11->gbr = VAR_11->regs[0];

 VAR_11->regs[0] = 0;

 VAR_8->thread.sp = (unsigned long) VAR_11;
 VAR_8->thread.pc = (unsigned long) VAR_4;

 VAR_8->thread.ubc_pc = 0;

 return 0;
}
