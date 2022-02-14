
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_19__ {int life_time; } ;
struct TYPE_20__ {void* len; void* rate_n_flags; TYPE_8__ stop_time; int sta_id; int tx_flags; } ;
struct il_scan_cmd {int flags; int filter_flags; int channel_count; void* len; TYPE_9__ tx_cmd; int * data; void* rx_chain; int good_CRC_th; TYPE_4__* direct_scan; void* suspend_time; void* max_out_time; int quiet_time; int quiet_plcp_th; } ;
struct il_scan_channel {int dummy; } ;
struct TYPE_18__ {int valid_rx_ant; int valid_tx_ant; int bcast_id; } ;
struct TYPE_13__ {int active_chains; } ;
struct TYPE_11__ {int flags; } ;
struct il_priv {int scan_band; int status; TYPE_6__* scan_request; TYPE_7__ hw_params; TYPE_2__ chain_noise_data; int * scan_tx_ant; TYPE_1__* cfg; TYPE_10__ active; struct il_scan_cmd* scan_cmd; int mutex; } ;
struct il_host_cmd {int len; struct il_scan_cmd* data; int flags; int id; } ;
struct TYPE_14__ {int beacon_int; } ;
struct ieee80211_vif {int addr; TYPE_3__ bss_conf; } ;
struct ieee80211_mgmt {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_17__ {int n_ssids; int ie_len; int ie; TYPE_5__* ssids; } ;
struct TYPE_16__ {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_15__ {int ssid; scalar_t__ len; int id; } ;
struct TYPE_12__ {int* scan_rx_antennas; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
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
 int FUNC_4 (int ,int *) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct il_priv*,struct ieee80211_vif*,int,int,int,void*) ;
 int FUNC_9 (struct il_priv*,int *,int) ;
 int FUNC_10 (struct il_priv*,struct ieee80211_mgmt*,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (struct il_priv*) ;
 int FUNC_12 (struct il_priv*,struct il_host_cmd*) ;
 struct il_scan_cmd* FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (void*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ,scalar_t__) ;
 int FUNC_18 (struct il_scan_cmd*,int ,scalar_t__) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,int *) ;

int
FUNC_21(struct il_priv *VAR_30, struct ieee80211_vif *VAR_31)
{
 struct il_host_cmd VAR_32 = {
  .id = VAR_2,
  .len = sizeof(struct il_scan_cmd),
  .flags = VAR_1,
 };
 struct il_scan_cmd *VAR_33;
 u32 VAR_34 = 0;
 u16 VAR_35;
 u16 VAR_36 = 0;
 enum ieee80211_band VAR_37;
 u8 VAR_38 = 0;
 u8 VAR_39 = VAR_30->hw_params.valid_rx_ant;
 u8 VAR_40;
 bool VAR_41 = 0;
 int VAR_42;
 u8 VAR_43;
 u8 VAR_44 = VAR_30->hw_params.valid_tx_ant;
 int VAR_45;

 FUNC_16(&VAR_30->mutex);

 if (!VAR_30->scan_cmd) {
  VAR_30->scan_cmd =
      FUNC_13(sizeof(struct il_scan_cmd) + VAR_9,
       VAR_5);
  if (!VAR_30->scan_cmd) {
   FUNC_2("fail to allocate memory for scan\n");
   return -VAR_4;
  }
 }
 VAR_33 = VAR_30->scan_cmd;
 FUNC_18(VAR_33, 0, sizeof(struct il_scan_cmd) + VAR_9);

 VAR_33->quiet_plcp_th = VAR_10;
 VAR_33->quiet_time = VAR_6;

 if (FUNC_11(VAR_30)) {
  u16 VAR_46;
  u32 VAR_47;
  u32 VAR_48 = 100;
  u32 VAR_49 = 100;

  FUNC_1("Scanning while associated...\n");
  VAR_46 = VAR_31->bss_conf.beacon_int;

  VAR_33->suspend_time = 0;
  VAR_33->max_out_time = FUNC_6(200 * 1024);
  if (!VAR_46)
   VAR_46 = VAR_48;

  VAR_47 = (VAR_48 / VAR_46) << 22;
  VAR_49 =
      (VAR_47 | ((VAR_48 % VAR_46) * 1024));
  VAR_33->suspend_time = FUNC_6(VAR_49);
  FUNC_2("suspend_time 0x%X beacon interval %d\n",
         VAR_49, VAR_46);
 }

 if (VAR_30->scan_request->n_ssids) {
  int VAR_50, VAR_51 = 0;
  FUNC_2("Kicking off active scan\n");
  for (VAR_50 = 0; VAR_50 < VAR_30->scan_request->n_ssids; VAR_50++) {

   if (!VAR_30->scan_request->ssids[VAR_50].ssid_len)
    continue;
   VAR_33->direct_scan[VAR_51].id = VAR_29;
   VAR_33->direct_scan[VAR_51].len =
       VAR_30->scan_request->ssids[VAR_50].ssid_len;
   FUNC_17(VAR_33->direct_scan[VAR_51].ssid,
          VAR_30->scan_request->ssids[VAR_50].ssid,
          VAR_30->scan_request->ssids[VAR_50].ssid_len);
   VAR_38++;
   VAR_51++;
  }
  VAR_41 = 1;
 } else
  FUNC_2("Start passive scan.\n");

 VAR_33->tx_cmd.tx_flags = VAR_27;
 VAR_33->tx_cmd.sta_id = VAR_30->hw_params.bcast_id;
 VAR_33->tx_cmd.stop_time.life_time = VAR_28;

 switch (VAR_30->scan_band) {
 case 129:
  VAR_33->flags = VAR_18 | VAR_17;
  VAR_42 =
      FUNC_15(VAR_30->active.flags & VAR_19) >>
      VAR_20;
  if (VAR_42 == VAR_0) {
   VAR_40 = VAR_12;
  } else {
   VAR_40 = VAR_11;
   VAR_34 = VAR_14;
  }
  break;
 case 128:
  VAR_40 = VAR_12;
  break;
 default:
  FUNC_3("Invalid scan band\n");
  return -VAR_3;
 }
 VAR_33->good_CRC_th =
     VAR_41 ? VAR_7 : VAR_8;

 VAR_37 = VAR_30->scan_band;

 if (VAR_30->cfg->scan_rx_antennas[VAR_37])
  VAR_39 = VAR_30->cfg->scan_rx_antennas[VAR_37];

 FUNC_9(VAR_30, &VAR_30->scan_tx_ant[VAR_37], VAR_44);
 VAR_34 |= FUNC_0(VAR_30->scan_tx_ant[VAR_37]) << VAR_13;
 VAR_33->tx_cmd.rate_n_flags = FUNC_6(VAR_40 | VAR_34);


 if (FUNC_20(VAR_25, &VAR_30->status)) {

  VAR_43 =
      VAR_39 & ((u8) (VAR_30->chain_noise_data.active_chains));
  if (!VAR_43)
   VAR_43 = VAR_39;

  FUNC_2("chain_noise_data.active_chains: %u\n",
         VAR_30->chain_noise_data.active_chains);

  VAR_39 = FUNC_7(VAR_43);
 }


 VAR_36 |= VAR_30->hw_params.valid_rx_ant << VAR_24;
 VAR_36 |= VAR_39 << VAR_22;
 VAR_36 |= VAR_39 << VAR_23;
 VAR_36 |= 0x1 << VAR_21;
 VAR_33->rx_chain = FUNC_5(VAR_36);

 VAR_35 =
     FUNC_10(VAR_30, (struct ieee80211_mgmt *)VAR_33->data,
         VAR_31->addr, VAR_30->scan_request->ie,
         VAR_30->scan_request->ie_len,
         VAR_9 - sizeof(*VAR_33));
 VAR_33->tx_cmd.len = FUNC_5(VAR_35);

 VAR_33->filter_flags |=
     (VAR_15 | VAR_16);

 VAR_33->channel_count =
     FUNC_8(VAR_30, VAR_31, VAR_37, VAR_41, VAR_38,
      (void *)&VAR_33->data[VAR_35]);
 if (VAR_33->channel_count == 0) {
  FUNC_2("channel count %d\n", VAR_33->channel_count);
  return -VAR_3;
 }

 VAR_32.len +=
     FUNC_14(VAR_33->tx_cmd.len) +
     VAR_33->channel_count * sizeof(struct il_scan_channel);
 VAR_32.data = VAR_33;
 VAR_33->len = FUNC_5(VAR_32.len);

 FUNC_19(VAR_26, &VAR_30->status);

 VAR_45 = FUNC_12(VAR_30, &VAR_32);
 if (VAR_45)
  FUNC_4(VAR_26, &VAR_30->status);

 return VAR_45;
}
