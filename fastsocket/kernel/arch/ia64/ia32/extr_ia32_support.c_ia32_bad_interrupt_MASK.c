
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {unsigned long si_errno; int si_code; scalar_t__ si_imm; int * si_addr; scalar_t__ si_isr; scalar_t__ si_flags; int si_signo; } ;
typedef TYPE_1__ siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,struct pt_regs*,unsigned long) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

void
FUNC_2 (unsigned long VAR_3, struct pt_regs *VAR_4)
{
 siginfo_t VAR_5;

 if (FUNC_0("Bad IA-32 interrupt", VAR_4, VAR_3))
  return;

 VAR_5.si_signo = VAR_0;
 VAR_5.si_errno = VAR_3;
 VAR_5.si_flags = 0;
 VAR_5.si_isr = 0;
 VAR_5.si_addr = ((void*)0);
 VAR_5.si_imm = 0;
 VAR_5.si_code = VAR_1;
 FUNC_1(VAR_0, &VAR_5, VAR_2);
}
