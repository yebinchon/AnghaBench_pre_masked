
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct siginfo {int si_signo; } ;
struct pt_regs {int dummy; } ;
struct TYPE_4__ {unsigned long error_code; unsigned long trap_no; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char const*,struct pt_regs*,unsigned long) ;
 int FUNC_1 (int ,struct siginfo*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

void FUNC_3(const char *VAR_1, struct pt_regs *VAR_2,
  struct siginfo *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 if (FUNC_2(VAR_2)) {
  VAR_0->thread.error_code = VAR_4;
  VAR_0->thread.trap_no = VAR_5;

  FUNC_1(VAR_3->si_signo, VAR_3, VAR_0);
 } else {
  FUNC_0(VAR_1, VAR_2, VAR_4);
 }
}
