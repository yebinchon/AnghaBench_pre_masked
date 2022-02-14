
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_vif {int ap_sta_id; int id; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_bt_iterator_data {int reduced_tx_power; TYPE_3__* notif; int num_bss_ifaces; struct iwl_mvm* mvm; } ;
struct ieee80211_vif {scalar_t__ type; int chanctx_conf; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_6__ {scalar_t__ bt_traffic_load; scalar_t__ bt_status; } ;
struct TYPE_4__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct iwl_mvm*,char*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ieee80211_vif*) ;
 int FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (struct ieee80211_vif*,int,int) ;
 int FUNC_6 (struct ieee80211_vif*,int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (struct iwl_mvm*,int ,int) ;
 struct iwl_mvm_vif* FUNC_9 (struct ieee80211_vif*) ;
 struct ieee80211_chanctx_conf* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(void *VAR_9, u8 *VAR_10,
          struct ieee80211_vif *VAR_11)
{
 struct iwl_mvm_vif *VAR_12 = FUNC_9(VAR_11);
 struct iwl_bt_iterator_data *VAR_13 = VAR_9;
 struct iwl_mvm *VAR_14 = VAR_13->mvm;
 struct ieee80211_chanctx_conf *VAR_15;
 enum ieee80211_smps_mode VAR_16;
 enum ieee80211_band VAR_17;
 int VAR_18;

 if (VAR_11->type != VAR_7)
  return;

 FUNC_11();
 VAR_15 = FUNC_10(VAR_11->chanctx_conf);
 if (VAR_15 && VAR_15->def.chan)
  VAR_17 = VAR_15->def.chan->band;
 else
  VAR_17 = -1;
 FUNC_12();

 VAR_16 = VAR_3;

 if (VAR_17 != VAR_2) {
  FUNC_6(VAR_11, VAR_16);
  return;
 }

 if (VAR_13->notif->bt_status)
  VAR_16 = VAR_4;

 if (VAR_13->notif->bt_traffic_load >= VAR_6)
  VAR_16 = VAR_5;

 FUNC_1(VAR_13->mvm,
         "mac %d: bt_status %d traffic_load %d smps_req %d\n",
         VAR_12->id, VAR_13->notif->bt_status,
         VAR_13->notif->bt_traffic_load, VAR_16);

 FUNC_6(VAR_11, VAR_16);


 if (FUNC_7())
  return;

 VAR_13->num_bss_ifaces++;


 if (!FUNC_0(VAR_13->notif, 3, VAR_8)) {

  if (FUNC_8(VAR_14, VAR_12->ap_sta_id, 0))
   FUNC_2(VAR_14, "Couldn't send BT_CONFIG cmd\n");
  VAR_13->reduced_tx_power = 0;


  FUNC_4(VAR_11);
  return;
 }

 VAR_18 = FUNC_3(VAR_11);


 if (!VAR_18)
  VAR_18 = -100;
 if (VAR_18 > VAR_1) {
  if (FUNC_8(VAR_14, VAR_12->ap_sta_id, 1))
   FUNC_2(VAR_14, "Couldn't send BT_CONFIG cmd\n");
 } else if (VAR_18 < VAR_0) {
  if (FUNC_8(VAR_14, VAR_12->ap_sta_id, 0))
   FUNC_2(VAR_14, "Couldn't send BT_CONFIG cmd\n");





  VAR_13->reduced_tx_power = 0;
 }


 FUNC_5(VAR_11, VAR_0,
          VAR_1);
}
