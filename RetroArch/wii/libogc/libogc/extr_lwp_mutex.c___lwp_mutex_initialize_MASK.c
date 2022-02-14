
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int lwp_mutex_attr ;
struct TYPE_4__ {int nest_cnt; int wait_queue; TYPE_2__* holder; scalar_t__ blocked_cnt; scalar_t__ lock; int atrrs; } ;
typedef TYPE_1__ lwp_mutex ;
struct TYPE_5__ {int res_cnt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 TYPE_2__* VAR_5 ;

void FUNC_4(lwp_mutex *VAR_6,lwp_mutex_attr *VAR_7,u32 VAR_8)
{
 VAR_6->atrrs = *VAR_7;
 VAR_6->lock = VAR_8;
 VAR_6->blocked_cnt = 0;

 if(VAR_8==VAR_0) {
  VAR_6->nest_cnt = 1;
  VAR_6->holder = VAR_5;
  if(FUNC_1(VAR_7) || FUNC_2(VAR_7))
   VAR_5->res_cnt++;
 } else {
  VAR_6->nest_cnt = 0;
  VAR_6->holder = ((void*)0);
 }

 FUNC_3(&VAR_6->wait_queue,FUNC_0(VAR_7)?VAR_3:VAR_4,VAR_2,VAR_1);
}
