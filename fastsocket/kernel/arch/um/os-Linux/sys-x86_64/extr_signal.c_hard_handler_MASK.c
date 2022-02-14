
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucontext {int uc_mcontext; } ;
struct sigcontext {int dummy; } ;


 int FUNC_0 (int,struct sigcontext*) ;

void FUNC_1(int VAR_0)
{
 struct ucontext *VAR_1;
 asm("movq %%rdx, %0" : "=r" (VAR_1));

 FUNC_0(VAR_0, (struct sigcontext *) &VAR_1->uc_mcontext);
}
