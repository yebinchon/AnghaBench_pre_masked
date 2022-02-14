
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {scalar_t__ p_signalholder; int p_lflag; int p_sigwaitcnt; int p_mlock; int p_sigmask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int *,int ,char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(proc_t VAR_1, int VAR_2)
{
 if (!VAR_2)
  FUNC_3(VAR_1);

 if(VAR_1->p_signalholder == FUNC_0())
  FUNC_2("proc_signalstart: thread attempting to signal a process for which it holds the signal lock");

 VAR_1->p_sigwaitcnt++;
 while ((VAR_1->p_lflag & VAR_0) == VAR_0)
  FUNC_1(&VAR_1->p_sigmask, &VAR_1->p_mlock, 0, "proc_signstart", ((void*)0));
 VAR_1->p_sigwaitcnt--;

 VAR_1->p_lflag |= VAR_0;
 VAR_1->p_signalholder = FUNC_0();
 if (!VAR_2)
  FUNC_4(VAR_1);
}
