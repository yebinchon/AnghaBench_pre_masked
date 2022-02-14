
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tqueue; } ;
typedef TYPE_1__ tqueue_st ;
typedef int lwpq_t ;
typedef int lwp_cntrl ;


 int FUNC_0 () ;
 int * FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ) ;

void FUNC_3(lwpq_t VAR_0)
{
 tqueue_st *VAR_1;
 lwp_cntrl *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if(!VAR_1) return;

 do {
  VAR_2 = FUNC_1(&VAR_1->tqueue);
 } while(VAR_2);
 FUNC_0();
}
