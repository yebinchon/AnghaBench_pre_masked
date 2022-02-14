
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int stack_size; int is_preemptible; int isr_level; int real_prio; scalar_t__ res_cnt; scalar_t__ suspendcnt; int cpu_time_budget; int cur_state; int budget_algo; int wait; int context; int join_list; int stack_allocated; void* stack; } ;
typedef TYPE_1__ lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char*,TYPE_1__*,void*,int,int,int) ;
 int FUNC_6 (int *,int ,int) ;

u32 FUNC_7(lwp_cntrl *VAR_10,void *VAR_11,u32 VAR_12,u32 VAR_13,u32 VAR_14,bool VAR_15)
{
 u32 VAR_16 = 0;





 if(!VAR_11) {
  if(!FUNC_2(VAR_12))
   VAR_16 = VAR_0;
  else
   VAR_16 = VAR_12;

  VAR_16 = FUNC_1(VAR_10,VAR_16);
  if(!VAR_16) return 0;

  VAR_10->stack_allocated = VAR_7;
 } else {
  VAR_10->stack = VAR_11;
  VAR_16 = VAR_12;
  VAR_10->stack_allocated = VAR_1;
 }
 VAR_10->stack_size = VAR_16;

 FUNC_4(&VAR_10->join_list,VAR_6,VAR_5,0);

 FUNC_6(&VAR_10->context,0,sizeof(VAR_10->context));
 FUNC_6(&VAR_10->wait,0,sizeof(VAR_10->wait));

 VAR_10->budget_algo = (VAR_13<128 ? VAR_2 : VAR_3);
 VAR_10->is_preemptible = VAR_15;
 VAR_10->isr_level = VAR_14;
 VAR_10->real_prio = VAR_13;
 VAR_10->cur_state = VAR_4;
 VAR_10->cpu_time_budget = VAR_8;
 VAR_10->suspendcnt = 0;
 VAR_10->res_cnt = 0;
 FUNC_3(VAR_10,VAR_13);

 FUNC_0(VAR_9,VAR_10);

 return 1;
}
