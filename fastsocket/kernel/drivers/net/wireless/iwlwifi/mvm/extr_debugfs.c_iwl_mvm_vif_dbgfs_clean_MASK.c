
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int * dbgfs_dir; int * dbgfs_slink; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

void FUNC_3(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct iwl_mvm_vif *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->dbgfs_slink);
 VAR_2->dbgfs_slink = ((void*)0);

 FUNC_1(VAR_2->dbgfs_dir);
 VAR_2->dbgfs_dir = ((void*)0);
}
