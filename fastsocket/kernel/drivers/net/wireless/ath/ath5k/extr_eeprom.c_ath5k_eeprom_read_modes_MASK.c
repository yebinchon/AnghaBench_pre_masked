
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct ath5k_eeprom_info {int** ee_ob; int** ee_db; int* ee_tx_end2xlna_enable; int* ee_thr_62; int* ee_tx_end2xpa_disable; int* ee_tx_frm2xpa_enable; int* ee_pga_desired_size; int* ee_noise_floor_thr; int* ee_xlna_gain; int* ee_x_gain; int* ee_xpd; int* ee_fixed_bias; int* ee_false_detect; int* ee_xr_power; int* ee_i_gain; int ee_cck_ofdm_power_delta; int ee_scaled_cck_delta; int* ee_i_cal; int* ee_q_cal; int* ee_margin_tx_rx; int* ee_turbo_max_power; int ee_cck_ofdm_gain_delta; scalar_t__ ee_version; int* ee_switch_settling_turbo; int* ee_atn_tx_rx_turbo; int* ee_margin_tx_rx_turbo; int* ee_adc_desired_size_turbo; int* ee_pga_desired_size_turbo; int ee_pd_gain_overlap; int ee_misc0; scalar_t__* ee_n_piers; TYPE_3__* ee_pwr_cal_g; TYPE_2__* ee_pwr_cal_b; scalar_t__* ee_adc_desired_size; } ;
struct TYPE_4__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_ee_version; TYPE_1__ ah_capabilities; } ;
typedef scalar_t__ s8 ;
struct TYPE_6__ {void* freq; } ;
struct TYPE_5__ {void* freq; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;



 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_2 (struct ath5k_eeprom_info*,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ath5k_hw *VAR_11, u32 *VAR_12,
  unsigned int VAR_13)
{
 struct ath5k_eeprom_info *VAR_14 = &VAR_11->ah_capabilities.cap_eeprom;
 u32 VAR_15 = *VAR_12;
 u16 VAR_16;

 VAR_14->ee_n_piers[VAR_13] = 0;
 FUNC_1(VAR_15++, VAR_16);
 VAR_14->ee_adc_desired_size[VAR_13] = (s8)((VAR_16 >> 8) & 0xff);
 switch (VAR_13) {
 case 130:
  VAR_14->ee_ob[VAR_13][3] = (VAR_16 >> 5) & 0x7;
  VAR_14->ee_db[VAR_13][3] = (VAR_16 >> 2) & 0x7;
  VAR_14->ee_ob[VAR_13][2] = (VAR_16 << 1) & 0x7;

  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_ob[VAR_13][2] |= (VAR_16 >> 15) & 0x1;
  VAR_14->ee_db[VAR_13][2] = (VAR_16 >> 12) & 0x7;
  VAR_14->ee_ob[VAR_13][1] = (VAR_16 >> 9) & 0x7;
  VAR_14->ee_db[VAR_13][1] = (VAR_16 >> 6) & 0x7;
  VAR_14->ee_ob[VAR_13][0] = (VAR_16 >> 3) & 0x7;
  VAR_14->ee_db[VAR_13][0] = VAR_16 & 0x7;
  break;
 case 128:
 case 129:
  VAR_14->ee_ob[VAR_13][1] = (VAR_16 >> 4) & 0x7;
  VAR_14->ee_db[VAR_13][1] = VAR_16 & 0x7;
  break;
 }

 FUNC_1(VAR_15++, VAR_16);
 VAR_14->ee_tx_end2xlna_enable[VAR_13] = (VAR_16 >> 8) & 0xff;
 VAR_14->ee_thr_62[VAR_13] = VAR_16 & 0xff;

 if (VAR_11->ah_ee_version <= VAR_3)
  VAR_14->ee_thr_62[VAR_13] = VAR_13 == 130 ? 15 : 28;

 FUNC_1(VAR_15++, VAR_16);
 VAR_14->ee_tx_end2xpa_disable[VAR_13] = (VAR_16 >> 8) & 0xff;
 VAR_14->ee_tx_frm2xpa_enable[VAR_13] = VAR_16 & 0xff;

 FUNC_1(VAR_15++, VAR_16);
 VAR_14->ee_pga_desired_size[VAR_13] = (VAR_16 >> 8) & 0xff;

 if ((VAR_16 & 0xff) & 0x80)
  VAR_14->ee_noise_floor_thr[VAR_13] = -((((VAR_16 & 0xff) ^ 0xff)) + 1);
 else
  VAR_14->ee_noise_floor_thr[VAR_13] = VAR_16 & 0xff;

 if (VAR_11->ah_ee_version <= VAR_3)
  VAR_14->ee_noise_floor_thr[VAR_13] =
      VAR_13 == 130 ? -54 : -1;

 FUNC_1(VAR_15++, VAR_16);
 VAR_14->ee_xlna_gain[VAR_13] = (VAR_16 >> 5) & 0xff;
 VAR_14->ee_x_gain[VAR_13] = (VAR_16 >> 1) & 0xf;
 VAR_14->ee_xpd[VAR_13] = VAR_16 & 0x1;

 if (VAR_11->ah_ee_version >= VAR_6 &&
     VAR_13 != 129)
  VAR_14->ee_fixed_bias[VAR_13] = (VAR_16 >> 13) & 0x1;

 if (VAR_11->ah_ee_version >= VAR_4) {
  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_false_detect[VAR_13] = (VAR_16 >> 6) & 0x7f;

  if (VAR_13 == 130)
   VAR_14->ee_xr_power[VAR_13] = VAR_16 & 0x3f;
  else {

   VAR_14->ee_ob[VAR_13][0] = VAR_16 & 0x7;
   VAR_14->ee_db[VAR_13][0] = (VAR_16 >> 3) & 0x7;
  }
 }

 if (VAR_11->ah_ee_version < VAR_5) {
  VAR_14->ee_i_gain[VAR_13] = VAR_2;
  VAR_14->ee_cck_ofdm_power_delta = VAR_0;
 } else {
  VAR_14->ee_i_gain[VAR_13] = (VAR_16 >> 13) & 0x7;

  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_i_gain[VAR_13] |= (VAR_16 << 3) & 0x38;

  if (VAR_13 == 128) {
   VAR_14->ee_cck_ofdm_power_delta = (VAR_16 >> 3) & 0xff;
   if (VAR_11->ah_ee_version >= VAR_9)
    VAR_14->ee_scaled_cck_delta = (VAR_16 >> 11) & 0x1f;
  }
 }

 if (VAR_11->ah_ee_version >= VAR_6 &&
   VAR_13 == 130) {
  VAR_14->ee_i_cal[VAR_13] = (VAR_16 >> 8) & 0x3f;
  VAR_14->ee_q_cal[VAR_13] = (VAR_16 >> 3) & 0x1f;
 }

 if (VAR_11->ah_ee_version < VAR_6)
  goto done;




 switch (VAR_13) {
 case 130:
  if (VAR_11->ah_ee_version < VAR_7)
   break;

  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_margin_tx_rx[VAR_13] = VAR_16 & 0x3f;
  break;
 case 129:
  FUNC_1(VAR_15++, VAR_16);

  VAR_14->ee_pwr_cal_b[0].freq =
   FUNC_2(VAR_14, VAR_16 & 0xff, VAR_13);
  if (VAR_14->ee_pwr_cal_b[0].freq != VAR_1)
   VAR_14->ee_n_piers[VAR_13]++;

  VAR_14->ee_pwr_cal_b[1].freq =
   FUNC_2(VAR_14, (VAR_16 >> 8) & 0xff, VAR_13);
  if (VAR_14->ee_pwr_cal_b[1].freq != VAR_1)
   VAR_14->ee_n_piers[VAR_13]++;

  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_pwr_cal_b[2].freq =
   FUNC_2(VAR_14, VAR_16 & 0xff, VAR_13);
  if (VAR_14->ee_pwr_cal_b[2].freq != VAR_1)
   VAR_14->ee_n_piers[VAR_13]++;

  if (VAR_11->ah_ee_version >= VAR_7)
   VAR_14->ee_margin_tx_rx[VAR_13] = (VAR_16 >> 8) & 0x3f;
  break;
 case 128:
  FUNC_1(VAR_15++, VAR_16);

  VAR_14->ee_pwr_cal_g[0].freq =
   FUNC_2(VAR_14, VAR_16 & 0xff, VAR_13);
  if (VAR_14->ee_pwr_cal_g[0].freq != VAR_1)
   VAR_14->ee_n_piers[VAR_13]++;

  VAR_14->ee_pwr_cal_g[1].freq =
   FUNC_2(VAR_14, (VAR_16 >> 8) & 0xff, VAR_13);
  if (VAR_14->ee_pwr_cal_g[1].freq != VAR_1)
   VAR_14->ee_n_piers[VAR_13]++;

  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_turbo_max_power[VAR_13] = VAR_16 & 0x7f;
  VAR_14->ee_xr_power[VAR_13] = (VAR_16 >> 7) & 0x3f;

  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_pwr_cal_g[2].freq =
   FUNC_2(VAR_14, VAR_16 & 0xff, VAR_13);
  if (VAR_14->ee_pwr_cal_g[2].freq != VAR_1)
   VAR_14->ee_n_piers[VAR_13]++;

  if (VAR_11->ah_ee_version >= VAR_7)
   VAR_14->ee_margin_tx_rx[VAR_13] = (VAR_16 >> 8) & 0x3f;

  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_i_cal[VAR_13] = (VAR_16 >> 5) & 0x3f;
  VAR_14->ee_q_cal[VAR_13] = VAR_16 & 0x1f;

  if (VAR_11->ah_ee_version >= VAR_8) {
   FUNC_1(VAR_15++, VAR_16);
   VAR_14->ee_cck_ofdm_gain_delta = VAR_16 & 0xff;
  }
  break;
 }




 if (VAR_14->ee_version < VAR_10)
  goto done;

 switch (VAR_13) {
 case 130:
  VAR_14->ee_switch_settling_turbo[VAR_13] = (VAR_16 >> 6) & 0x7f;

  VAR_14->ee_atn_tx_rx_turbo[VAR_13] = (VAR_16 >> 13) & 0x7;
  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_atn_tx_rx_turbo[VAR_13] |= (VAR_16 & 0x7) << 3;
  VAR_14->ee_margin_tx_rx_turbo[VAR_13] = (VAR_16 >> 3) & 0x3f;

  VAR_14->ee_adc_desired_size_turbo[VAR_13] = (VAR_16 >> 9) & 0x7f;
  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_adc_desired_size_turbo[VAR_13] |= (VAR_16 & 0x1) << 7;
  VAR_14->ee_pga_desired_size_turbo[VAR_13] = (VAR_16 >> 1) & 0xff;

  if (FUNC_0(VAR_14->ee_misc0) >= 2)
   VAR_14->ee_pd_gain_overlap = (VAR_16 >> 9) & 0xf;
  break;
 case 128:
  VAR_14->ee_switch_settling_turbo[VAR_13] = (VAR_16 >> 8) & 0x7f;

  VAR_14->ee_atn_tx_rx_turbo[VAR_13] = (VAR_16 >> 15) & 0x7;
  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_atn_tx_rx_turbo[VAR_13] |= (VAR_16 & 0x1f) << 1;
  VAR_14->ee_margin_tx_rx_turbo[VAR_13] = (VAR_16 >> 5) & 0x3f;

  VAR_14->ee_adc_desired_size_turbo[VAR_13] = (VAR_16 >> 11) & 0x7f;
  FUNC_1(VAR_15++, VAR_16);
  VAR_14->ee_adc_desired_size_turbo[VAR_13] |= (VAR_16 & 0x7) << 5;
  VAR_14->ee_pga_desired_size_turbo[VAR_13] = (VAR_16 >> 3) & 0xff;
  break;
 }

done:

 *VAR_12 = VAR_15;

 return 0;
}
