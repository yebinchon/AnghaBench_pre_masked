
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tqueue; } ;
typedef TYPE_1__ tqueue_st ;
typedef scalar_t__ lwpq_t ;
typedef int lwp_cntrl ;


 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;

void FUNC_4(lwpq_t VAR_0)
{
 lwp_cntrl *VAR_1;
 tqueue_st *VAR_2 = (tqueue_st*)VAR_0;

 VAR_2 = FUNC_3(VAR_0);
 if(!VAR_2) return;

 do {
  VAR_1 = FUNC_1(&VAR_2->tqueue);
 } while(VAR_1);
 FUNC_0();

 FUNC_2(VAR_2);
 return;
}
