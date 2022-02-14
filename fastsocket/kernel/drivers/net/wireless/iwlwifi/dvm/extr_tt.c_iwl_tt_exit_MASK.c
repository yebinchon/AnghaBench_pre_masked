
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tt_mgmt {int * transaction; int * restriction; scalar_t__ advanced_tt; int ct_kill_waiting_tm; int ct_kill_exit_tm; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; int ct_exit; int ct_enter; int tt_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_priv *VAR_0)
{
 struct iwl_tt_mgmt *VAR_1 = &VAR_0->thermal_throttle;


 FUNC_1(&VAR_0->thermal_throttle.ct_kill_exit_tm);

 FUNC_1(&VAR_0->thermal_throttle.ct_kill_waiting_tm);
 FUNC_0(&VAR_0->tt_work);
 FUNC_0(&VAR_0->ct_enter);
 FUNC_0(&VAR_0->ct_exit);

 if (VAR_0->thermal_throttle.advanced_tt) {

  FUNC_2(VAR_1->restriction);
  VAR_1->restriction = ((void*)0);
  FUNC_2(VAR_1->transaction);
  VAR_1->transaction = ((void*)0);
 }
}
