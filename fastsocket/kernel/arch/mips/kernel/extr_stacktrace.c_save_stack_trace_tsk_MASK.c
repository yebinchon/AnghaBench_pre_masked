
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg31; scalar_t__ reg29; } ;
struct task_struct {TYPE_1__ thread; } ;
struct stack_trace {int max_entries; scalar_t__ nr_entries; } ;
struct pt_regs {int cp0_epc; scalar_t__* regs; } ;


 int FUNC_0 (int) ;
 struct task_struct* VAR_0 ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct stack_trace*,struct task_struct*,struct pt_regs*) ;

void FUNC_3(struct task_struct *VAR_1, struct stack_trace *VAR_2)
{
 struct pt_regs VAR_3;
 struct pt_regs *VAR_4 = &VAR_3;

 FUNC_0(VAR_2->nr_entries || !VAR_2->max_entries);

 if (VAR_1 != VAR_0) {
  VAR_4->regs[29] = VAR_1->thread.reg29;
  VAR_4->regs[31] = 0;
  VAR_4->cp0_epc = VAR_1->thread.reg31;
 } else
  FUNC_1(VAR_4);
 FUNC_2(VAR_2, VAR_1, VAR_4);
}
