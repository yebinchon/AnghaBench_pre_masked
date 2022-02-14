
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct iwl_mvm*,int ) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_1,
      struct ieee80211_sta *VAR_2,
      bool VAR_3)
{
 struct iwl_mvm *VAR_4 = FUNC_1(VAR_1);
 struct iwl_mvm_sta *VAR_5 = (void *)VAR_2->drv_priv;

 if (!VAR_5 || !VAR_5->vif) {
  FUNC_0(VAR_4, "Station is not associated to a vif\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_4, VAR_5->vif);
}
