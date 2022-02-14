
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct TYPE_2__ {unsigned long reg0; unsigned long reg3; scalar_t__ cp0_psr; } ;
struct task_struct {unsigned long pid; TYPE_1__ thread; int * clear_child_tid; int * set_child_tid; } ;
struct pt_regs {unsigned long* regs; int cp0_psr; } ;


 scalar_t__ VAR_0 ;
 struct pt_regs* FUNC_0 (struct task_struct*) ;
 struct thread_info* FUNC_1 (struct task_struct*) ;

int FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
  unsigned long VAR_3,
  struct task_struct *VAR_4, struct pt_regs *VAR_5)
{
 struct thread_info *VAR_6 = FUNC_1(VAR_4);
 struct pt_regs *VAR_7 = FUNC_0(VAR_4);

 VAR_4->set_child_tid = ((void*)0);
 VAR_4->clear_child_tid = ((void*)0);

 *VAR_7 = *VAR_5;
 VAR_7->regs[7] = 0;
 VAR_7->regs[4] = 0;
 VAR_5->regs[4] = VAR_4->pid;

 if (VAR_7->cp0_psr & 0x8) {
  VAR_7->regs[0] = VAR_2;
 } else {
  VAR_7->regs[28] = (unsigned long) VAR_6;
  VAR_7->regs[0] = (unsigned long) VAR_7;
 }

 VAR_4->thread.reg0 = (unsigned long) VAR_7;
 VAR_4->thread.reg3 = (unsigned long) VAR_0;
 VAR_4->thread.cp0_psr = 0;

 return 0;
}
