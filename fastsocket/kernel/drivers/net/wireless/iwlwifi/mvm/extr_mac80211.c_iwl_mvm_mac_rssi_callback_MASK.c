
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_rssi_event { ____Placeholder_ieee80211_rssi_event } ieee80211_rssi_event ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
          struct ieee80211_vif *VAR_1,
          enum ieee80211_rssi_event VAR_2)
{
 struct iwl_mvm *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_1, VAR_2);
}
