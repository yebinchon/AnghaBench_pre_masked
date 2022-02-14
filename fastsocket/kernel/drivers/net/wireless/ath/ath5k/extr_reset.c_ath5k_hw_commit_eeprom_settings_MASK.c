
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ieee80211_channel {int center_freq; scalar_t__ hw_value; } ;
struct TYPE_4__ {int txp_cck_ofdm_pwr_delta; int txp_cck_ofdm_gainf_delta; } ;
struct ath5k_eeprom_info {int ee_cck_ofdm_power_delta; int ee_scaled_cck_delta; int ee_cck_ofdm_gain_delta; int* ee_tx_end2xpa_disable; int* ee_tx_frm2xpa_enable; scalar_t__* ee_q_cal; scalar_t__* ee_i_cal; scalar_t__* ee_false_detect; scalar_t__* ee_thr_62; scalar_t__* ee_tx_end2xlna_enable; scalar_t__* ee_margin_tx_rx; scalar_t__* ee_pga_desired_size; scalar_t__* ee_adc_desired_size; scalar_t__* ee_atn_tx_rx; scalar_t__* ee_switch_settling; scalar_t__* ee_margin_tx_rx_turbo; scalar_t__* ee_pga_desired_size_turbo; scalar_t__* ee_adc_desired_size_turbo; scalar_t__* ee_atn_tx_rx_turbo; scalar_t__* ee_switch_settling_turbo; int * ee_noise_floor_thr; } ;
struct TYPE_3__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_phy_revision; scalar_t__ ah_bwmode; scalar_t__ ah_ee_version; TYPE_2__ ah_txpower; TYPE_1__ ah_capabilities; } ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ath5k_hw*,int ,int ,scalar_t__) ;
 scalar_t__ VAR_33 ;
 size_t FUNC_4 (struct ath5k_hw*,struct ieee80211_channel*) ;
 scalar_t__ FUNC_5 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_6 (struct ath5k_hw*,int,int ) ;
 int FUNC_7 (struct ath5k_hw*,size_t) ;

__attribute__((used)) static void
FUNC_8(struct ath5k_hw *VAR_34,
  struct ieee80211_channel *VAR_35)
{
 struct ath5k_eeprom_info *VAR_36 = &VAR_34->ah_capabilities.cap_eeprom;
 s16 VAR_37;
 u8 VAR_38;


 if (VAR_34->ah_version == VAR_0)
  return;

 VAR_38 = FUNC_4(VAR_34, VAR_35);


 if (VAR_35->center_freq == 2484)
  VAR_37 =
   ((VAR_36->ee_cck_ofdm_power_delta -
   VAR_36->ee_scaled_cck_delta) * 2) / 10;
 else
  VAR_37 =
   (VAR_36->ee_cck_ofdm_power_delta * 2) / 10;



 if (VAR_34->ah_phy_revision >= VAR_33) {
  if (VAR_35->hw_value == VAR_7)
   FUNC_6(VAR_34,
   FUNC_2((VAR_36->ee_cck_ofdm_gain_delta * -1),
    VAR_31) |
   FUNC_2((VAR_37 * -1),
    VAR_32),
    VAR_30);
  else
   FUNC_6(VAR_34, 0, VAR_30);
 } else {


  VAR_34->ah_txpower.txp_cck_ofdm_pwr_delta = VAR_37;
  VAR_34->ah_txpower.txp_cck_ofdm_gainf_delta =
      VAR_36->ee_cck_ofdm_gain_delta;
 }



 FUNC_7(VAR_34, VAR_38);


 FUNC_6(VAR_34,
  FUNC_0(VAR_36->ee_noise_floor_thr[VAR_38]),
  VAR_21);

 if ((VAR_34->ah_bwmode == VAR_1) &&
 (VAR_34->ah_ee_version >= VAR_4)) {

  FUNC_3(VAR_34, VAR_28,
    VAR_29,
    VAR_36->ee_switch_settling_turbo[VAR_38]);


  FUNC_3(VAR_34, VAR_11,
    VAR_14,
    VAR_36->ee_atn_tx_rx_turbo[VAR_38]);


  FUNC_3(VAR_34, VAR_8,
    VAR_9,
    VAR_36->ee_adc_desired_size_turbo[VAR_38]);

  FUNC_3(VAR_34, VAR_8,
    VAR_10,
    VAR_36->ee_pga_desired_size_turbo[VAR_38]);


  FUNC_3(VAR_34, VAR_12,
    VAR_13,
    VAR_36->ee_margin_tx_rx_turbo[VAR_38]);

 } else {

  FUNC_3(VAR_34, VAR_28,
    VAR_29,
    VAR_36->ee_switch_settling[VAR_38]);


  FUNC_3(VAR_34, VAR_11,
    VAR_14,
    VAR_36->ee_atn_tx_rx[VAR_38]);


  FUNC_3(VAR_34, VAR_8,
    VAR_9,
    VAR_36->ee_adc_desired_size[VAR_38]);

  FUNC_3(VAR_34, VAR_8,
    VAR_10,
    VAR_36->ee_pga_desired_size[VAR_38]);


  if (VAR_34->ah_ee_version >= VAR_3)
   FUNC_3(VAR_34, VAR_12,
    VAR_13,
    VAR_36->ee_margin_tx_rx[VAR_38]);
 }


 FUNC_6(VAR_34,
  (VAR_36->ee_tx_end2xpa_disable[VAR_38] << 24) |
  (VAR_36->ee_tx_end2xpa_disable[VAR_38] << 16) |
  (VAR_36->ee_tx_frm2xpa_enable[VAR_38] << 8) |
  (VAR_36->ee_tx_frm2xpa_enable[VAR_38]), VAR_27);


 FUNC_3(VAR_34, VAR_25,
   VAR_26,
   VAR_36->ee_tx_end2xlna_enable[VAR_38]);


 FUNC_3(VAR_34, VAR_20,
   VAR_22,
   VAR_36->ee_thr_62[VAR_38]);




 if (FUNC_5(VAR_34, VAR_35))
  FUNC_3(VAR_34, VAR_23,
    VAR_24,
    VAR_6 +
    VAR_36->ee_false_detect[VAR_38]);
 else
  FUNC_3(VAR_34, VAR_23,
    VAR_24,
    VAR_6);



 if (VAR_34->ah_ee_version >= VAR_2) {
  FUNC_3(VAR_34, VAR_16, VAR_18,
       VAR_36->ee_i_cal[VAR_38]);
  FUNC_3(VAR_34, VAR_16, VAR_19,
       VAR_36->ee_q_cal[VAR_38]);
  FUNC_1(VAR_34, VAR_16, VAR_17);
 }


 if (VAR_34->ah_ee_version >= VAR_5)
  FUNC_6(VAR_34, 0, VAR_15);
}
