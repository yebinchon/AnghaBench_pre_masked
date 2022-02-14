
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; } ;
struct iwl_mvm_sta {scalar_t__ sta_id; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct ieee80211_vif *VAR_2,
     struct ieee80211_sta *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = (void *)VAR_2->drv_priv;

 if (VAR_3) {
  struct iwl_mvm_sta *VAR_5 = (void *)VAR_3->drv_priv;

  return VAR_5->sta_id;
 }






 if (VAR_2->type == VAR_1 &&
     VAR_4->ap_sta_id != VAR_0)
  return VAR_4->ap_sta_id;

 return VAR_0;
}
