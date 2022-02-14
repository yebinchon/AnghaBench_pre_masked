
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_29__ {int life_time; } ;
struct TYPE_23__ {void* len; int rate_n_flags; int tx_flags; TYPE_6__ stop_time; int sta_id; } ;
struct iwl_scan_cmd {int flags; int filter_flags; int channel_count; void* len; TYPE_16__ tx_cmd; int * data; void* rx_chain; void* good_CRC_th; TYPE_4__* direct_scan; void* quiet_time; scalar_t__ quiet_plcp_th; void* max_out_time; void* suspend_time; } ;
struct iwl_scan_channel {int dsp_atten; int tx_gain; void* passive_dwell; void* active_dwell; void* channel; int type; } ;
struct TYPE_30__ {int flags; } ;
struct iwl_rxon_context {TYPE_7__ active; int bcast_sta_id; } ;
struct TYPE_17__ {int active_chains; } ;
struct iwl_priv {int scan_type; int scan_band; int status; TYPE_15__* hw_roc_channel; int hw_roc_duration; TYPE_14__* scan_request; TYPE_13__* nvm_data; scalar_t__ bt_full_concurrent; TYPE_12__* cfg; TYPE_10__ chain_noise_data; TYPE_9__* hw; int * scan_tx_ant; scalar_t__ new_scan_threshold_behaviour; struct iwl_rxon_context* contexts; struct iwl_scan_cmd* scan_cmd; int mutex; TYPE_2__* fw; } ;
struct iwl_host_cmd {int* len; int * dataflags; struct iwl_scan_cmd** data; int flags; int id; } ;
struct TYPE_26__ {int beacon_int; } ;
struct ieee80211_vif {int addr; TYPE_3__ bss_conf; } ;
struct ieee80211_mgmt {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_31__ {int flags; } ;
struct TYPE_32__ {TYPE_8__ conf; } ;
struct TYPE_28__ {int ssid_len; int* ssid; } ;
struct TYPE_27__ {int len; int ssid; int id; } ;
struct TYPE_24__ {int max_probe_length; } ;
struct TYPE_25__ {TYPE_1__ ucode_capa; } ;
struct TYPE_22__ {int hw_value; int const band; } ;
struct TYPE_21__ {int n_channels; int ie_len; int * ie; int no_cck; TYPE_5__* ssids; int n_ssids; } ;
struct TYPE_20__ {int valid_rx_ant; int valid_tx_ant; } ;
struct TYPE_19__ {TYPE_11__* bt_params; } ;
struct TYPE_18__ {scalar_t__ advanced_bt_coexist; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 int FUNC_3 (struct iwl_priv*,char*,...) ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;



 int FUNC_4 (struct iwl_priv*,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_36 ;
 int FUNC_6 (int ,int *) ;
 void* FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int VAR_37 ;
 int FUNC_11 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_12 (struct ieee80211_mgmt*,int ,int *,int ,int const*,int,int) ;
 int FUNC_13 (struct iwl_priv*,struct ieee80211_vif*,int,void*) ;
 int FUNC_14 (struct iwl_priv*,struct ieee80211_vif*,int,int,int,void*) ;
 int FUNC_15 (int,int) ;
 scalar_t__ FUNC_16 (struct iwl_priv*) ;
 int FUNC_17 (struct iwl_priv*,int ) ;
 struct iwl_rxon_context* FUNC_18 (struct ieee80211_vif*) ;
 int FUNC_19 (struct iwl_priv*,int ,int) ;
 int FUNC_20 (struct iwl_priv*) ;
 struct iwl_scan_cmd* FUNC_21 (int,int ) ;
 scalar_t__ FUNC_22 (void*) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int*,int) ;
 int FUNC_26 (struct iwl_scan_cmd*,int ,int) ;
 int FUNC_27 (int ,int *) ;
 scalar_t__ FUNC_28 (int ,int *) ;

__attribute__((used)) static int FUNC_29(struct iwl_priv *VAR_38, struct ieee80211_vif *VAR_39)
{
 struct iwl_host_cmd VAR_40 = {
  .id = VAR_19,
  .len = sizeof(struct iwl_scan_cmd), 
  .flags = VAR_1,
 };
 struct iwl_scan_cmd *VAR_41;
 struct iwl_rxon_context *VAR_42 = &VAR_38->contexts[VAR_16];
 u32 VAR_43 = 0;
 u16 VAR_44 = 0;
 u16 VAR_45 = 0;
 enum ieee80211_band VAR_46;
 u8 VAR_47 = 0;
 u8 VAR_48 = VAR_38->nvm_data->valid_rx_ant;
 u8 VAR_49;
 bool VAR_50 = 0;
 int VAR_51;
 u8 VAR_52;
 u8 VAR_53 = VAR_38->nvm_data->valid_tx_ant;
 int VAR_54;
 int VAR_55 = sizeof(struct iwl_scan_cmd) +
       VAR_17 * sizeof(struct iwl_scan_channel) +
       VAR_38->fw->ucode_capa.max_probe_length;
 const u8 *VAR_56 = ((void*)0);
 u8 VAR_57 = 0;

 if (FUNC_5(VAR_38->scan_type == 130 &&
      (!VAR_38->scan_request ||
       VAR_38->scan_request->n_channels > VAR_17)))
  return -VAR_2;

 FUNC_24(&VAR_38->mutex);

 if (VAR_39)
  VAR_42 = FUNC_18(VAR_39);

 if (!VAR_38->scan_cmd) {
  VAR_38->scan_cmd = FUNC_21(VAR_55, VAR_5);
  if (!VAR_38->scan_cmd) {
   FUNC_3(VAR_38,
           "fail to allocate memory for scan\n");
   return -VAR_4;
  }
 }
 VAR_41 = VAR_38->scan_cmd;
 FUNC_26(VAR_41, 0, VAR_55);

 VAR_41->quiet_plcp_th = VAR_12;
 VAR_41->quiet_time = VAR_7;

 if (VAR_38->scan_type != 128 &&
     FUNC_16(VAR_38)) {
  u16 VAR_58 = 0;
  u32 VAR_59;
  u32 VAR_60 = 100;
  u32 VAR_61 = 100;

  FUNC_2(VAR_38, "Scanning while associated...\n");
  switch (VAR_38->scan_type) {
  case 128:
   FUNC_5(1);
   break;
  case 129:
   VAR_58 = 0;
   break;
  case 130:
   VAR_58 = VAR_39->bss_conf.beacon_int;
   break;
  }

  VAR_41->suspend_time = 0;
  VAR_41->max_out_time = FUNC_8(200 * 1024);
  if (!VAR_58)
   VAR_58 = VAR_60;

  VAR_59 = (VAR_60 / VAR_58) << 22;
  VAR_61 = (VAR_59 |
      ((VAR_60 % VAR_58) * 1024));
  VAR_41->suspend_time = FUNC_8(VAR_61);
  FUNC_3(VAR_38, "suspend_time 0x%X beacon interval %d\n",
          VAR_61, VAR_58);
 } else if (VAR_38->scan_type == 128) {
  VAR_41->suspend_time = 0;
  VAR_41->max_out_time = 0;
  VAR_41->quiet_time = 0;
  VAR_41->quiet_plcp_th = 0;
 }

 switch (VAR_38->scan_type) {
 case 129:
  FUNC_3(VAR_38, "Start internal passive scan.\n");





  VAR_41->quiet_time = FUNC_7(VAR_13);
  break;
 case 130:
  if (VAR_38->scan_request->n_ssids) {
   int VAR_62, VAR_63 = 0;
   FUNC_3(VAR_38, "Kicking off active scan\n");




   VAR_57 = VAR_38->scan_request->ssids[0].ssid_len;
   VAR_56 = VAR_38->scan_request->ssids[0].ssid;





   for (VAR_62 = VAR_38->scan_request->n_ssids - 1; VAR_62 >= 1; VAR_62--) {
    VAR_41->direct_scan[VAR_63].id = VAR_36;
    VAR_41->direct_scan[VAR_63].len =
     VAR_38->scan_request->ssids[VAR_62].ssid_len;
    FUNC_25(VAR_41->direct_scan[VAR_63].ssid,
           VAR_38->scan_request->ssids[VAR_62].ssid,
           VAR_38->scan_request->ssids[VAR_62].ssid_len);
    VAR_47++;
    VAR_63++;
   }
   VAR_50 = 1;
  } else
   FUNC_3(VAR_38, "Start passive scan.\n");
  break;
 case 128:
  FUNC_3(VAR_38, "Start ROC scan.\n");
  break;
 }

 VAR_41->tx_cmd.tx_flags = VAR_34;
 VAR_41->tx_cmd.sta_id = VAR_42->bcast_sta_id;
 VAR_41->tx_cmd.stop_time.life_time = VAR_35;

 switch (VAR_38->scan_band) {
 case 132:
  VAR_41->flags = VAR_23 | VAR_22;
  VAR_51 = FUNC_23(
   VAR_38->contexts[VAR_16].active.flags &
      VAR_24)
           >> VAR_25;
  if ((VAR_38->scan_request && VAR_38->scan_request->no_cck) ||
      VAR_51 == VAR_0) {
   VAR_49 = VAR_15;
  } else {
   VAR_49 = VAR_14;
   VAR_43 = VAR_18;
  }




  if (VAR_38->cfg->bt_params &&
      VAR_38->cfg->bt_params->advanced_bt_coexist)
   VAR_41->tx_cmd.tx_flags |= VAR_33;
  break;
 case 131:
  VAR_49 = VAR_15;
  break;
 default:
  FUNC_4(VAR_38, "Invalid scan band\n");
  return -VAR_3;
 }
 if (VAR_38->new_scan_threshold_behaviour)
  VAR_41->good_CRC_th = VAR_50 ? VAR_8 :
      VAR_9;
 else
  VAR_41->good_CRC_th = VAR_50 ? VAR_8 :
      VAR_10;

 VAR_46 = VAR_38->scan_band;

 if (VAR_46 == 132 &&
     VAR_38->cfg->bt_params &&
     VAR_38->cfg->bt_params->advanced_bt_coexist) {

  VAR_53 = FUNC_9(VAR_53);
 }

 VAR_38->scan_tx_ant[VAR_46] = FUNC_19(VAR_38,
          VAR_38->scan_tx_ant[VAR_46],
          VAR_53);
 VAR_43 |= FUNC_10(VAR_38->scan_tx_ant[VAR_46]);
 VAR_41->tx_cmd.rate_n_flags = FUNC_15(VAR_49, VAR_43);





 if (FUNC_28(VAR_31, &VAR_38->status) &&
     !(VAR_38->hw->conf.flags & VAR_6)) {

  VAR_52 = VAR_48 &
    ((u8)(VAR_38->chain_noise_data.active_chains));
  if (!VAR_52)
   VAR_52 = VAR_48;

  FUNC_3(VAR_38, "chain_noise_data.active_chains: %u\n",
    VAR_38->chain_noise_data.active_chains);

  VAR_48 = FUNC_9(VAR_52);
 }
 if (VAR_38->cfg->bt_params &&
     VAR_38->cfg->bt_params->advanced_bt_coexist &&
     VAR_38->bt_full_concurrent) {

  VAR_48 = FUNC_9(VAR_48);
 }


 VAR_45 |=
  VAR_38->nvm_data->valid_rx_ant << VAR_29;
 VAR_45 |= VAR_48 << VAR_27;
 VAR_45 |= VAR_48 << VAR_28;
 VAR_45 |= 0x1 << VAR_26;
 VAR_41->rx_chain = FUNC_7(VAR_45);
 switch (VAR_38->scan_type) {
 case 130:
  VAR_44 = FUNC_12(
     (struct ieee80211_mgmt *)VAR_41->data,
     VAR_39->addr,
     VAR_38->scan_request->ie,
     VAR_38->scan_request->ie_len,
     VAR_56, VAR_57,
     VAR_55 - sizeof(*VAR_41));
  break;
 case 129:
 case 128:

  VAR_44 = FUNC_12(
     (struct ieee80211_mgmt *)VAR_41->data,
     VAR_37, ((void*)0), 0,
     ((void*)0), 0,
     VAR_55 - sizeof(*VAR_41));
  break;
 default:
  FUNC_0();
 }
 VAR_41->tx_cmd.len = FUNC_7(VAR_44);

 VAR_41->filter_flags |= (VAR_20 |
          VAR_21);

 switch (VAR_38->scan_type) {
 case 129:
  VAR_41->channel_count =
   FUNC_13(VAR_38, VAR_39, VAR_46,
    (void *)&VAR_41->data[VAR_44]);
  break;
 case 130:
  VAR_41->channel_count =
   FUNC_14(VAR_38, VAR_39, VAR_46,
    VAR_50, VAR_47,
    (void *)&VAR_41->data[VAR_44]);
  break;
 case 128: {
  struct iwl_scan_channel *VAR_64;
  int VAR_65, VAR_66;
  u16 VAR_67;

  VAR_67 = FUNC_17(VAR_38, VAR_38->hw_roc_duration);
  VAR_65 = FUNC_1(VAR_38->hw_roc_duration, VAR_67);

  VAR_41->channel_count = VAR_65;

  VAR_64 = (void *)&VAR_41->data[VAR_44];

  for (VAR_66 = 0; VAR_66 < VAR_65; VAR_66++) {
   VAR_64->type = VAR_30;
   VAR_64->channel =
    FUNC_7(VAR_38->hw_roc_channel->hw_value);

   if (VAR_66 == VAR_65 - 1)
    VAR_67 = VAR_38->hw_roc_duration - VAR_66 * VAR_67;

   VAR_64->active_dwell =
   VAR_64->passive_dwell = FUNC_7(VAR_67);


   VAR_64->dsp_atten = 110;





   if (VAR_38->hw_roc_channel->band == 131)
    VAR_64->tx_gain = ((1 << 5) | (3 << 3)) | 3;
   else
    VAR_64->tx_gain = ((1 << 5) | (5 << 3));

   VAR_64++;
  }
  }

  break;
 }

 if (VAR_41->channel_count == 0) {
  FUNC_3(VAR_38, "channel count %d\n", VAR_41->channel_count);
  return -VAR_3;
 }

 VAR_40.len[0] += FUNC_22(VAR_41->tx_cmd.len) +
     VAR_41->channel_count * sizeof(struct iwl_scan_channel);
 VAR_40.data[0] = VAR_41;
 VAR_40.dataflags[0] = VAR_11;
 VAR_41->len = FUNC_7(VAR_40.len[0]);


 FUNC_27(VAR_32, &VAR_38->status);

 VAR_54 = FUNC_20(VAR_38);
 if (VAR_54) {
  FUNC_6(VAR_32, &VAR_38->status);
  return VAR_54;
 }

 VAR_54 = FUNC_11(VAR_38, &VAR_40);
 if (VAR_54) {
  FUNC_6(VAR_32, &VAR_38->status);
  FUNC_20(VAR_38);
 }

 return VAR_54;
}
