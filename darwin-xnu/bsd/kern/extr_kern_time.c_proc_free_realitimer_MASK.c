
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * thread_call_t ;
typedef TYPE_2__* proc_t ;
struct TYPE_6__ {int it_interval; } ;
struct TYPE_7__ {scalar_t__ p_refcount; scalar_t__ p_ractive; int * p_rcall; TYPE_1__ p_realtimer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(proc_t VAR_0)
{
 FUNC_2(VAR_0);

 FUNC_0(VAR_0->p_rcall != ((void*)0));
 FUNC_0(VAR_0->p_refcount == 0);

 FUNC_6(&VAR_0->p_realtimer.it_interval);

 if (FUNC_4(VAR_0->p_rcall)) {
  FUNC_0(VAR_0->p_ractive > 0);
  VAR_0->p_ractive--;
 }

 while (VAR_0->p_ractive > 0) {
  FUNC_3(VAR_0);

  FUNC_1(1);

  FUNC_2(VAR_0);
 }

 thread_call_t VAR_1 = VAR_0->p_rcall;
 VAR_0->p_rcall = ((void*)0);

 FUNC_3(VAR_0);

 FUNC_5(VAR_1);
}
