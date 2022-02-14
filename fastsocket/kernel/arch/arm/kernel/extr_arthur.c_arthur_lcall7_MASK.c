
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siginfo {int si_errno; int si_signo; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct siginfo*,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_2, struct pt_regs *VAR_3)
{
 struct siginfo VAR_4;
 VAR_4.si_signo = VAR_0;
 VAR_4.si_errno = VAR_2;

 FUNC_0(VAR_0, &VAR_4, VAR_1);
}
