
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* proc_t ;
struct TYPE_6__ {int * p_olimit; TYPE_1__* p_limit; } ;
struct TYPE_5__ {int pl_refcnt; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(proc_t VAR_0, proc_t VAR_1)
{
 FUNC_0();
 VAR_1->p_limit = VAR_0->p_limit;
 VAR_1->p_limit->pl_refcnt++;
 VAR_1->p_olimit = ((void*)0);
 FUNC_1();
}
