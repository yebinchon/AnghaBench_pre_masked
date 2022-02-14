
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_t ;
struct uthread {int uu_siglist; int uu_sigmask; } ;
typedef int sigset_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_sigignore; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(proc_t VAR_0, thread_t VAR_1, sigset_t VAR_2)
{
 struct uthread * VAR_3;
 sigset_t VAR_4=0;

 FUNC_1(VAR_0);
 VAR_3 = (struct uthread *)FUNC_0(VAR_1);
 if (VAR_3) {
  VAR_4 = (((VAR_3->uu_siglist & ~VAR_3->uu_sigmask) & ~VAR_0->p_sigignore) & VAR_2);
 }
 FUNC_2(VAR_0);
 return(VAR_4);
}
