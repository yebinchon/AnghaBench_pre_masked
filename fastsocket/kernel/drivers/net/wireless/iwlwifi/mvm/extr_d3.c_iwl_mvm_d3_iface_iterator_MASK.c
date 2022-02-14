
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; } ;
struct iwl_d3_iter_data {int error; struct ieee80211_vif* vif; int mvm; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iwl_mvm_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, u8 *VAR_3,
          struct ieee80211_vif *VAR_4)
{
 struct iwl_d3_iter_data *VAR_5 = VAR_2;
 struct iwl_mvm_vif *VAR_6 = FUNC_1(VAR_4);

 if (VAR_4->type != VAR_1 || VAR_4->p2p)
  return;

 if (VAR_6->ap_sta_id == VAR_0)
  return;

 if (VAR_5->vif) {
  FUNC_0(VAR_5->mvm, "More than one managed interface active!\n");
  VAR_5->error = 1;
  return;
 }

 VAR_5->vif = VAR_4;
}
