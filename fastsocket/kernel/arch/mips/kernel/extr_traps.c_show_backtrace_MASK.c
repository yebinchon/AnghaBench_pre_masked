
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long* regs; unsigned long cp0_epc; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (struct task_struct*,unsigned long*,unsigned long,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_1, const struct pt_regs *VAR_2)
{
 unsigned long VAR_3 = VAR_2->regs[29];
 unsigned long VAR_4 = VAR_2->regs[31];
 unsigned long VAR_5 = VAR_2->cp0_epc;

 if (VAR_0 || !FUNC_0(VAR_5)) {
  FUNC_3(VAR_3);
  return;
 }
 FUNC_2("Call Trace:\n");
 do {
  FUNC_1(VAR_5);
  VAR_5 = FUNC_4(VAR_1, &VAR_3, VAR_5, &VAR_4);
 } while (VAR_5);
 FUNC_2("\n");
}
