
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int nest_behavior; scalar_t__ onlyownerrelease; } ;
struct TYPE_9__ {int nest_cnt; int lock; TYPE_7__ atrrs; TYPE_2__* holder; int wait_queue; } ;
typedef TYPE_1__ lwp_mutex ;
struct TYPE_10__ {scalar_t__ res_cnt; scalar_t__ real_prio; scalar_t__ cur_prio; } ;
typedef TYPE_2__ lwp_cntrl ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *) ;

u32 FUNC_5(lwp_mutex *VAR_5)
{
 lwp_cntrl *VAR_6;
 lwp_cntrl *VAR_7;

 VAR_7 = VAR_5->holder;

 if(VAR_5->atrrs.onlyownerrelease) {
  if(!FUNC_3(VAR_7))
   return VAR_1;
 }

 if(!VAR_5->nest_cnt)
  return VAR_2;

 VAR_5->nest_cnt--;
 if(VAR_5->nest_cnt!=0) {
  switch(VAR_5->atrrs.nest_behavior) {
   case 130:
    return VAR_2;
   case 128:
    return VAR_0;
   case 129:
    break;
  }
 }

 if(FUNC_0(&VAR_5->atrrs) || FUNC_1(&VAR_5->atrrs))
  VAR_7->res_cnt--;

 VAR_5->holder = ((void*)0);
 if(FUNC_0(&VAR_5->atrrs) || FUNC_1(&VAR_5->atrrs)) {
  if(VAR_7->res_cnt==0 && VAR_7->real_prio!=VAR_7->cur_prio)
   FUNC_2(VAR_7,VAR_7->real_prio,VAR_4);
 }

 if((VAR_6=FUNC_4(&VAR_5->wait_queue))) {
  VAR_5->nest_cnt = 1;
  VAR_5->holder = VAR_6;
  if(FUNC_0(&VAR_5->atrrs) || FUNC_1(&VAR_5->atrrs))
   VAR_6->res_cnt++;
 } else
  VAR_5->lock = VAR_3;

 return VAR_2;
}
