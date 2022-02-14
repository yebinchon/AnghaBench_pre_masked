
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_vif {scalar_t__ ap_sta_id; } ;
struct iwl_mvm {int mutex; int hw; int last_bt_notif; } ;
struct iwl_bt_iterator_data {int reduced_tx_power; scalar_t__ num_bss_ifaces; struct iwl_mvm* mvm; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;
typedef enum ieee80211_rssi_event { ____Placeholder_ieee80211_rssi_event } ieee80211_rssi_event ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,char*) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,struct iwl_bt_iterator_data*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct iwl_mvm*,scalar_t__,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct iwl_mvm*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct iwl_mvm *VAR_6, struct ieee80211_vif *VAR_7,
      enum ieee80211_rssi_event VAR_8)
{
 struct iwl_mvm_vif *VAR_9 = (void *)VAR_7->drv_priv;
 struct iwl_bt_iterator_data VAR_10 = {
  .mvm = VAR_6,
  .reduced_tx_power = 1,
 };
 int VAR_11;

 FUNC_8(&VAR_6->mutex);


 if (FUNC_3(VAR_9->ap_sta_id == VAR_1))
  goto out_unlock;


 if (!FUNC_0(&VAR_6->last_bt_notif, 3, VAR_2))
  goto out_unlock;

 FUNC_1(VAR_6, "RSSI for %pM is now %s\n", VAR_7->bss_conf.bssid,
         VAR_8 == VAR_3 ? "HIGH" : "LOW");





 if (VAR_8 == VAR_4 || FUNC_5())
  VAR_11 = FUNC_6(VAR_6, VAR_9->ap_sta_id,
        0);
 else
  VAR_11 = FUNC_6(VAR_6, VAR_9->ap_sta_id, 1);

 if (VAR_11)
  FUNC_2(VAR_6, "couldn't send BT_CONFIG HCMD upon RSSI event\n");

 FUNC_4(
  VAR_6->hw, VAR_0,
  VAR_5, &VAR_10);






 VAR_10.reduced_tx_power = VAR_10.reduced_tx_power && VAR_10.num_bss_ifaces;

 if (FUNC_7(VAR_6, VAR_10.reduced_tx_power))
  FUNC_2(VAR_6, "Failed to update the ctrl_kill_msk\n");

 out_unlock:
 FUNC_9(&VAR_6->mutex);
}
