
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s64 ;
struct TYPE_3__ {int budget_algo; int cpu_time_budget; int cur_state; int is_preemptible; } ;
typedef TYPE_1__ lwp_cntrl ;




 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int) ;

void FUNC_6(void *VAR_3)
{
 s64 VAR_4;
 lwp_cntrl *VAR_5;

 VAR_5 = VAR_2;
 VAR_4 = FUNC_5(1);

 FUNC_1();

 if(!VAR_5->is_preemptible) {
  FUNC_4(&VAR_1,VAR_4);
  FUNC_2();
  return;
 }
 if(!FUNC_0(VAR_5->cur_state)) {
  FUNC_4(&VAR_1,VAR_4);
  FUNC_2();
  return;
 }

 switch(VAR_5->budget_algo) {
  case 129:
   break;
  case 128:
   if((--VAR_5->cpu_time_budget)==0) {
    FUNC_3();
    VAR_5->cpu_time_budget = VAR_0;
   }
   break;
 }

 FUNC_4(&VAR_1,VAR_4);
 FUNC_2();
}
