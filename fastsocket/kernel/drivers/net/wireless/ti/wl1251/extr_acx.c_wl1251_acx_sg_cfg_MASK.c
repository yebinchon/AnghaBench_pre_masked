
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_bt_wlan_coex_param {int bt_hp_respected_num; int pta_auto_mode_enable; int pa_sd_enable; int ack_mode_dual_ant; int bt_anti_starvation_cycles; int wlan_elp_hp; int missed_rx_avalanche; int bt_packets_num; int wlan_packets_num; int max_cts; int quiet_cycle_num; int afh_leverage_on; int signal_type; int antenna_type; int next_wlan_packet; int hp_dm_max_guard_time; int wake_up_beacon; int next_bt_lp_packet; int bt_anti_starvation_period; int wlan_cycle_fast; int tx_time_bt_hp_fast; int rx_time_bt_hp_fast; int tx_time_bt_hp; int rx_time_bt_hp; int sense_disable_timer; int wlan_hp_max_time; int bt_hp_max_time; int min_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct acx_bt_wlan_coex_param*) ;
 struct acx_bt_wlan_coex_param* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_bt_wlan_coex_param*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_32)
{
 struct acx_bt_wlan_coex_param *VAR_33;
 int VAR_34;

 FUNC_3(VAR_1, "acx sg cfg");

 VAR_33 = FUNC_1(sizeof(*VAR_33), VAR_3);
 if (!VAR_33) {
  VAR_34 = -VAR_2;
  goto out;
 }


 VAR_33->min_rate = VAR_31;
 VAR_33->bt_hp_max_time = VAR_11;
 VAR_33->wlan_hp_max_time = VAR_30;
 VAR_33->sense_disable_timer = VAR_25;
 VAR_33->rx_time_bt_hp = VAR_20;
 VAR_33->tx_time_bt_hp = VAR_22;
 VAR_33->rx_time_bt_hp_fast = VAR_21;
 VAR_33->tx_time_bt_hp_fast = VAR_23;
 VAR_33->wlan_cycle_fast = VAR_13;
 VAR_33->bt_anti_starvation_period = VAR_9;
 VAR_33->next_bt_lp_packet = VAR_27;
 VAR_33->wake_up_beacon = VAR_28;
 VAR_33->hp_dm_max_guard_time = VAR_15;
 VAR_33->next_wlan_packet = VAR_29;
 VAR_33->antenna_type = VAR_7;
 VAR_33->signal_type = VAR_26;
 VAR_33->afh_leverage_on = VAR_5;
 VAR_33->quiet_cycle_num = VAR_19;
 VAR_33->max_cts = VAR_16;
 VAR_33->wlan_packets_num = VAR_18;
 VAR_33->bt_packets_num = VAR_17;
 VAR_33->missed_rx_avalanche = VAR_24;
 VAR_33->wlan_elp_hp = VAR_14;
 VAR_33->bt_anti_starvation_cycles = VAR_8;
 VAR_33->ack_mode_dual_ant = VAR_4;
 VAR_33->pa_sd_enable = VAR_6;
 VAR_33->pta_auto_mode_enable = VAR_10;
 VAR_33->bt_hp_respected_num = VAR_12;

 VAR_34 = FUNC_2(VAR_32, VAR_0, VAR_33, sizeof(*VAR_33));
 if (VAR_34 < 0) {
  FUNC_4("failed to set sg config: %d", VAR_34);
  goto out;
 }

out:
 FUNC_0(VAR_33);
 return VAR_34;
}
