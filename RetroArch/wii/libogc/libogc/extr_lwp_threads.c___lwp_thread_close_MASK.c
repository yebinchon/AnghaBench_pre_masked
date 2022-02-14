
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int information; } ;
struct TYPE_12__ {scalar_t__ ret_arg; } ;
struct TYPE_13__ {TYPE_9__ object; int budget_algo; scalar_t__ cpu_time_budget; TYPE_1__ wait; int join_list; int timer; } ;
typedef TYPE_2__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_9__*) ;
 int FUNC_4 (int ,TYPE_9__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_2 ;

void FUNC_13(lwp_cntrl *VAR_3)
{
 u32 VAR_4;
 void **VAR_5;
 lwp_cntrl *VAR_6;

 FUNC_8(VAR_3,VAR_1);

 if(!FUNC_10(VAR_3)) {
  if(FUNC_11(&VAR_3->timer))
   FUNC_12(&VAR_3->timer);
 }

 FUNC_0(VAR_4);
 VAR_5 = (void**)VAR_3->wait.ret_arg;
 while((VAR_6=FUNC_9(&VAR_3->join_list))!=((void*)0)) {
  *(void**)VAR_6->wait.ret_arg = VAR_5;
 }
 VAR_3->cpu_time_budget = 0;
 VAR_3->budget_algo = VAR_0;
 FUNC_1(VAR_4);

 FUNC_2(VAR_2,VAR_3);

 if(FUNC_7(VAR_3))
  FUNC_6();

 FUNC_5(VAR_3);

 FUNC_3(VAR_3->object.information,&VAR_3->object);
 FUNC_4(VAR_3->object.information,&VAR_3->object);
}
