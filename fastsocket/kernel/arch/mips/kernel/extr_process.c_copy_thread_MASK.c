
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {unsigned long tp_value; int addr_limit; } ;
struct TYPE_2__ {unsigned long reg29; unsigned long reg31; int cp0_status; } ;
struct task_struct {unsigned long pid; TYPE_1__ thread; int * clear_child_tid; int set_child_tid; } ;
struct pt_regs {unsigned long* regs; int cp0_status; int cp0_tcstatus; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct task_struct*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (struct task_struct*) ;
 struct thread_info* FUNC_8 (struct task_struct*) ;

int FUNC_9(unsigned long VAR_11, unsigned long VAR_12,
 unsigned long VAR_13, struct task_struct *VAR_14, struct pt_regs *VAR_15)
{
 struct thread_info *VAR_16 = FUNC_8(VAR_14);
 struct pt_regs *VAR_17;
 unsigned long VAR_18;
 VAR_14->set_child_tid = *(VAR_14->clear_child_tid = ((void*)0));

 VAR_18 = (unsigned long)FUNC_7(VAR_14) + VAR_5 - 32;

 FUNC_2();

 if (FUNC_1())
  FUNC_6(VAR_14);

 if (VAR_9)
  FUNC_5(VAR_14);

 FUNC_3();


 VAR_17 = (struct pt_regs *) VAR_18 - 1;

 VAR_18 = (unsigned long) VAR_17;
 *VAR_17 = *VAR_15;
 VAR_17->regs[7] = 0;

 VAR_17->regs[2] = 0;
 VAR_15->regs[2] = VAR_14->pid;

 if (VAR_17->cp0_status & VAR_2) {
  VAR_17->regs[28] = (unsigned long) VAR_16;
  VAR_17->regs[29] = VAR_18;
  VAR_16->addr_limit = VAR_1;
 } else {
  VAR_17->regs[29] = VAR_12;
  VAR_16->addr_limit = VAR_8;
 }
 VAR_14->thread.reg29 = (unsigned long) VAR_17;
 VAR_14->thread.reg31 = (unsigned long) VAR_10;





 VAR_14->thread.cp0_status = FUNC_4() & ~(VAR_4|VAR_3);
 VAR_17->cp0_status &= ~(VAR_4|VAR_3);
 FUNC_0(VAR_14, VAR_7);





 if (VAR_11 & VAR_0)
  VAR_16->tp_value = VAR_15->regs[7];

 return 0;
}
