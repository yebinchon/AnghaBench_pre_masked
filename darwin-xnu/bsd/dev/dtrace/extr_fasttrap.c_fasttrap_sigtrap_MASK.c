
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * uthread_t ;
typedef scalar_t__ user_addr_t ;
struct TYPE_8__ {scalar_t__ si_addr; int si_code; int si_signo; } ;
struct TYPE_9__ {TYPE_1__ sq_info; } ;
typedef TYPE_2__ sigqueue_t ;
struct TYPE_10__ {int p_lock; } ;
typedef TYPE_3__ proc_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_2__*) ;

void
FUNC_6(proc_t *VAR_3, uthread_t VAR_4, user_addr_t VAR_5)
{
#pragma unused(p, t, pc)


 sigqueue_t *VAR_6 = FUNC_1(sizeof (sigqueue_t), VAR_0);

 VAR_6->sq_info.si_signo = VAR_1;
 VAR_6->sq_info.si_code = VAR_2;
 VAR_6->sq_info.si_addr = (caddr_t)VAR_5;

 FUNC_2(&VAR_3->p_lock);
 FUNC_5(VAR_3, VAR_4, VAR_6);
 FUNC_3(&VAR_3->p_lock);

 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);


 FUNC_4("fasttrap_sigtrap called with no implementation.\n");
}
