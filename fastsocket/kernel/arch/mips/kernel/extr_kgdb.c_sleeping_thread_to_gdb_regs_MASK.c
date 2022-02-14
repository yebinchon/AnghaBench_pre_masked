
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {scalar_t__ cp0_epc; scalar_t__ cp0_cause; scalar_t__ cp0_badvaddr; scalar_t__ hi; scalar_t__ lo; scalar_t__ cp0_status; scalar_t__* regs; } ;


 unsigned long VAR_0 ;
 struct thread_info* FUNC_0 (struct task_struct*) ;

void FUNC_1(unsigned long *VAR_1, struct task_struct *VAR_2)
{
 int VAR_3;
 struct thread_info *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5 = (unsigned long)VAR_4 + VAR_0 - 32;
 struct pt_regs *VAR_6 = (struct pt_regs *)VAR_5 - 1;



 u64 *VAR_7 = (u64 *)VAR_1;


 for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
  *(VAR_7++) = VAR_6->regs[VAR_3];


 for (VAR_3 = 16; VAR_3 < 24; VAR_3++)
  *(VAR_7++) = VAR_6->regs[VAR_3];

 for (VAR_3 = 24; VAR_3 < 28; VAR_3++)
  *(VAR_7++) = 0;


 for (VAR_3 = 28; VAR_3 < 32; VAR_3++)
  *(VAR_7++) = VAR_6->regs[VAR_3];

 *(VAR_7++) = VAR_6->cp0_status;
 *(VAR_7++) = VAR_6->lo;
 *(VAR_7++) = VAR_6->hi;
 *(VAR_7++) = VAR_6->cp0_badvaddr;
 *(VAR_7++) = VAR_6->cp0_cause;
 *(VAR_7++) = VAR_6->cp0_epc;
}
