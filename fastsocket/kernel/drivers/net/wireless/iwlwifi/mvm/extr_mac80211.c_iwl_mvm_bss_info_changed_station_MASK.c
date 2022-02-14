
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_vif {scalar_t__ ap_sta_id; int time_event_data; } ;
struct iwl_mvm {int vif_count; } ;
struct ieee80211_vif {int addr; } ;
struct ieee80211_bss_conf {scalar_t__ assoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,struct iwl_mvm_vif*,int *) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*,scalar_t__) ;
 int FUNC_8 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_9 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_10(struct iwl_mvm *VAR_4,
          struct ieee80211_vif *VAR_5,
          struct ieee80211_bss_conf *VAR_6,
          u32 VAR_7)
{
 struct iwl_mvm_vif *VAR_8 = FUNC_9(VAR_5);
 int VAR_9;

 VAR_9 = FUNC_4(VAR_4, VAR_5);
 if (VAR_9)
  FUNC_1(VAR_4, "failed to update MAC %pM\n", VAR_5->addr);

 if (VAR_7 & VAR_0) {
  if (VAR_6->assoc) {

   VAR_9 = FUNC_8(VAR_4, VAR_5);
   if (VAR_9) {
    FUNC_1(VAR_4, "failed to update quotas\n");
    return;
   }
   FUNC_2(VAR_4, VAR_5);
   FUNC_3(VAR_4, VAR_5);
  } else if (VAR_8->ap_sta_id != VAR_3) {

   VAR_9 = FUNC_7(VAR_4, VAR_5, VAR_8->ap_sta_id);
   if (VAR_9)
    FUNC_1(VAR_4, "failed to remove AP station\n");
   VAR_8->ap_sta_id = VAR_3;

   VAR_9 = FUNC_8(VAR_4, ((void*)0));
   if (VAR_9)
    FUNC_1(VAR_4, "failed to update quotas\n");
  }
 } else if (VAR_7 & VAR_1) {




  FUNC_6(VAR_4, VAR_8,
       &VAR_8->time_event_data);
 } else if (VAR_7 & VAR_2) {






  FUNC_0(VAR_4, "Currently %d interfaces active\n",
       VAR_4->vif_count);
  if (VAR_4->vif_count == 1) {
   VAR_9 = FUNC_5(VAR_4, VAR_5);
   if (VAR_9)
    FUNC_1(VAR_4, "failed to update power mode\n");
  }
 }
}
