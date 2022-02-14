
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stats_rx_phy {int plcp_err; int false_alarm_cnt; } ;
struct stats_rx_non_phy {scalar_t__ interference_data_flag; int beacon_energy_c; int beacon_energy_b; int beacon_energy_a; int beacon_silence_rssi_c; int beacon_silence_rssi_b; int beacon_silence_rssi_a; int channel_load; } ;
struct stats_general_data {void* beacon_energy_c; void* beacon_energy_b; void* beacon_energy_a; void* beacon_silence_rssi_c; void* beacon_silence_rssi_b; void* beacon_silence_rssi_a; } ;
struct il_sensitivity_data {scalar_t__ last_bad_plcp_cnt_cck; scalar_t__ last_bad_plcp_cnt_ofdm; scalar_t__ last_fa_cnt_ofdm; scalar_t__ last_fa_cnt_cck; } ;
struct il_priv {int lock; struct il_sensitivity_data sensitivity_data; scalar_t__ disable_sens_cal; } ;
struct TYPE_2__ {struct stats_rx_phy cck; struct stats_rx_phy ofdm; struct stats_rx_non_phy general; } ;
struct il_notif_stats {TYPE_1__ rx; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct il_priv*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct il_priv*,scalar_t__,scalar_t__,struct stats_general_data*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void
FUNC_8(struct il_priv *VAR_1, void *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 struct il_sensitivity_data *VAR_10 = ((void*)0);
 struct stats_rx_non_phy *VAR_11;
 struct stats_rx_phy *VAR_12, *VAR_13;
 unsigned long VAR_14;
 struct stats_general_data VAR_15;

 if (VAR_1->disable_sens_cal)
  return;

 VAR_10 = &(VAR_1->sensitivity_data);

 if (!FUNC_4(VAR_1)) {
  FUNC_0("<< - not associated\n");
  return;
 }

 FUNC_6(&VAR_1->lock, VAR_14);

 VAR_11 = &(((struct il_notif_stats *)VAR_2)->rx.general);
 VAR_12 = &(((struct il_notif_stats *)VAR_2)->rx.ofdm);
 VAR_13 = &(((struct il_notif_stats *)VAR_2)->rx.cck);

 if (VAR_11->interference_data_flag != VAR_0) {
  FUNC_0("<< invalid data.\n");
  FUNC_7(&VAR_1->lock, VAR_14);
  return;
 }


 VAR_3 = FUNC_5(VAR_11->channel_load);
 VAR_4 = FUNC_5(VAR_13->false_alarm_cnt);
 VAR_5 = FUNC_5(VAR_12->false_alarm_cnt);
 VAR_6 = FUNC_5(VAR_13->plcp_err);
 VAR_7 = FUNC_5(VAR_12->plcp_err);

 VAR_15.beacon_silence_rssi_a =
     FUNC_5(VAR_11->beacon_silence_rssi_a);
 VAR_15.beacon_silence_rssi_b =
     FUNC_5(VAR_11->beacon_silence_rssi_b);
 VAR_15.beacon_silence_rssi_c =
     FUNC_5(VAR_11->beacon_silence_rssi_c);
 VAR_15.beacon_energy_a = FUNC_5(VAR_11->beacon_energy_a);
 VAR_15.beacon_energy_b = FUNC_5(VAR_11->beacon_energy_b);
 VAR_15.beacon_energy_c = FUNC_5(VAR_11->beacon_energy_c);

 FUNC_7(&VAR_1->lock, VAR_14);

 FUNC_0("rx_enable_time = %u usecs\n", VAR_3);

 if (!VAR_3) {
  FUNC_0("<< RX Enable Time == 0!\n");
  return;
 }




 if (VAR_10->last_bad_plcp_cnt_cck > VAR_6)
  VAR_10->last_bad_plcp_cnt_cck = VAR_6;
 else {
  VAR_6 -= VAR_10->last_bad_plcp_cnt_cck;
  VAR_10->last_bad_plcp_cnt_cck += VAR_6;
 }

 if (VAR_10->last_bad_plcp_cnt_ofdm > VAR_7)
  VAR_10->last_bad_plcp_cnt_ofdm = VAR_7;
 else {
  VAR_7 -= VAR_10->last_bad_plcp_cnt_ofdm;
  VAR_10->last_bad_plcp_cnt_ofdm += VAR_7;
 }

 if (VAR_10->last_fa_cnt_ofdm > VAR_5)
  VAR_10->last_fa_cnt_ofdm = VAR_5;
 else {
  VAR_5 -= VAR_10->last_fa_cnt_ofdm;
  VAR_10->last_fa_cnt_ofdm += VAR_5;
 }

 if (VAR_10->last_fa_cnt_cck > VAR_4)
  VAR_10->last_fa_cnt_cck = VAR_4;
 else {
  VAR_4 -= VAR_10->last_fa_cnt_cck;
  VAR_10->last_fa_cnt_cck += VAR_4;
 }


 VAR_8 = VAR_5 + VAR_7;
 VAR_9 = VAR_4 + VAR_6;

 FUNC_0("cck: fa %u badp %u  ofdm: fa %u badp %u\n", VAR_4,
  VAR_6, VAR_5, VAR_7);

 FUNC_1(VAR_1, VAR_8, VAR_3);
 FUNC_2(VAR_1, VAR_9, VAR_3, &VAR_15);

 FUNC_3(VAR_1);
}
