
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucontext {int uc_mcontext; } ;
struct faultinfo {int dummy; } ;


 int FUNC_0 (struct faultinfo,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

void __attribute__ ((__section__ (".__syscall_stub")))
FUNC_2(int VAR_1)
{
 struct ucontext *VAR_2;

 __asm__ __volatile__("movq %%rdx, %0" : "=g" (VAR_2) :);
 FUNC_0(*((struct faultinfo *) VAR_0),
         &VAR_2->uc_mcontext);
 FUNC_1();
}
