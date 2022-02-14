
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int phy_ctxt; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int ,int) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

int FUNC_3(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_0(!VAR_3->phy_ctxt))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2, VAR_3->phy_ctxt, 0);
}
