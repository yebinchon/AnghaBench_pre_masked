
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long reg29; scalar_t__ reg31; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {unsigned long* regs; scalar_t__ cp0_epc; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct task_struct*,struct pt_regs*) ;

void FUNC_2(struct task_struct *VAR_1, unsigned long *VAR_2)
{
 struct pt_regs VAR_3;
 if (VAR_2) {
  VAR_3.regs[29] = (unsigned long)VAR_2;
  VAR_3.regs[31] = 0;
  VAR_3.cp0_epc = 0;
 } else {
  if (VAR_1 && VAR_1 != VAR_0) {
   VAR_3.regs[29] = VAR_1->thread.reg29;
   VAR_3.regs[31] = 0;
   VAR_3.cp0_epc = VAR_1->thread.reg31;
  } else {
   FUNC_0(&VAR_3);
  }
 }
 FUNC_1(VAR_1, &VAR_3);
}
