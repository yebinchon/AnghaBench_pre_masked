
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_channel {scalar_t__ center_freq; int hw_value; } ;
struct ath5k_eeprom_info {size_t* ee_n_piers; struct ath5k_chan_pcal_info* ee_pwr_cal_g; struct ath5k_chan_pcal_info* ee_pwr_cal_b; struct ath5k_chan_pcal_info* ee_pwr_cal_a; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info {scalar_t__ freq; } ;






__attribute__((used)) static void
FUNC_0(struct ath5k_hw *VAR_0,
   struct ieee80211_channel *VAR_1,
   struct ath5k_chan_pcal_info **VAR_2,
   struct ath5k_chan_pcal_info **VAR_3)
{
 struct ath5k_eeprom_info *VAR_4 = &VAR_0->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info *VAR_5;
 u8 VAR_6, VAR_7;
 u8 VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = VAR_1->center_freq;

 VAR_6 = 0;
 VAR_7 = 0;

 switch (VAR_1->hw_value) {
 case 130:
  VAR_5 = VAR_4->ee_pwr_cal_a;
  VAR_8 = 130;
  break;
 case 129:
  VAR_5 = VAR_4->ee_pwr_cal_b;
  VAR_8 = 129;
  break;
 case 128:
 default:
  VAR_5 = VAR_4->ee_pwr_cal_g;
  VAR_8 = 128;
  break;
 }
 VAR_9 = VAR_4->ee_n_piers[VAR_8] - 1;




 if (VAR_11 < VAR_5[0].freq) {
  VAR_6 = VAR_7 = 0;
  goto done;
 }




 if (VAR_11 > VAR_5[VAR_9].freq) {
  VAR_6 = VAR_7 = VAR_9;
  goto done;
 }





 for (VAR_10 = 0; VAR_10 <= VAR_9; VAR_10++) {




  if (VAR_5[VAR_10].freq == VAR_11) {
   VAR_6 = VAR_7 = VAR_10;
   goto done;
  }




  if (VAR_11 < VAR_5[VAR_10].freq) {
   VAR_7 = VAR_10;
   VAR_6 = VAR_7 - 1;
   goto done;
  }
 }

done:
 *VAR_2 = &VAR_5[VAR_6];
 *VAR_3 = &VAR_5[VAR_7];
}
