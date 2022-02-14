
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_12__ {scalar_t__ prioceil; } ;
struct TYPE_10__ {TYPE_7__ atrrs; int wait_queue; int blocked_cnt; TYPE_3__* holder; } ;
typedef TYPE_2__ lwp_mutex ;
struct TYPE_9__ {scalar_t__ ret_code; } ;
struct TYPE_11__ {scalar_t__ cur_prio; TYPE_1__ wait; } ;
typedef TYPE_3__ lwp_cntrl ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 TYPE_3__* VAR_2 ;

void FUNC_5(lwp_mutex *VAR_3,u64 VAR_4)
{
 lwp_cntrl *VAR_5;

 VAR_5 = VAR_2;
 if(FUNC_0(&VAR_3->atrrs)){
  if(VAR_3->holder->cur_prio>VAR_5->cur_prio)
   FUNC_2(VAR_3->holder,VAR_5->cur_prio,VAR_0);
 }

 VAR_3->blocked_cnt++;
 FUNC_4(&VAR_3->wait_queue,VAR_4);

 if(VAR_2->wait.ret_code==VAR_1) {
  if(FUNC_1(&VAR_3->atrrs)) {
   if(VAR_3->atrrs.prioceil<VAR_5->cur_prio)
    FUNC_2(VAR_5,VAR_3->atrrs.prioceil,VAR_0);
  }
 }
 FUNC_3();
}
