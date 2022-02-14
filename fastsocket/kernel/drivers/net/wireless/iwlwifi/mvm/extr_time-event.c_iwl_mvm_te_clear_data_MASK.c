
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_time_event_data {scalar_t__ id; int running; int * vif; scalar_t__ uid; int list; } ;
struct iwl_mvm {int time_event_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iwl_mvm *VAR_1,
      struct iwl_mvm_time_event_data *VAR_2)
{
 FUNC_1(&VAR_1->time_event_lock);

 if (VAR_2->id == VAR_0)
  return;

 FUNC_0(&VAR_2->list);
 VAR_2->running = 0;
 VAR_2->uid = 0;
 VAR_2->id = VAR_0;
 VAR_2->vif = ((void*)0);
}
