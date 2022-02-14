
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {scalar_t__ p_sigwaitcnt; int * p_signalholder; int p_sigmask; int p_lflag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(proc_t VAR_1, int VAR_2)
{
 if (!VAR_2)
  FUNC_0(VAR_1);
 VAR_1->p_lflag &= ~VAR_0;

 if (VAR_1->p_sigwaitcnt > 0)
  FUNC_2(&VAR_1->p_sigmask);

 VAR_1->p_signalholder = ((void*)0);
 if (!VAR_2)
  FUNC_1(VAR_1);
}
