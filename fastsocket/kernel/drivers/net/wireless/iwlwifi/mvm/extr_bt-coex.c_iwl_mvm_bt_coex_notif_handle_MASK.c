
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int hw; int last_bt_notif; } ;
struct iwl_bt_iterator_data {int reduced_tx_power; scalar_t__ num_bss_ifaces; int * notif; struct iwl_mvm* mvm; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (int ,int ,int ,struct iwl_bt_iterator_data*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct iwl_mvm*,int) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_2)
{
 struct iwl_bt_iterator_data VAR_3 = {
  .mvm = VAR_2,
  .notif = &VAR_2->last_bt_notif,
  .reduced_tx_power = 1,
 };

 FUNC_1(
     VAR_2->hw, VAR_0,
     VAR_1, &VAR_3);






 VAR_3.reduced_tx_power = VAR_3.reduced_tx_power && VAR_3.num_bss_ifaces;

 if (FUNC_2(VAR_2, VAR_3.reduced_tx_power))
  FUNC_0(VAR_2, "Failed to update the ctrl_kill_msk\n");
}
