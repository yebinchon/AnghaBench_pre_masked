
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_channel {scalar_t__ center_freq; int hw_value; int band; } ;
struct ath_regulatory {int dummy; } ;
struct TYPE_4__ {int txp_max_pwr; } ;
struct ath5k_eeprom_info {size_t* ee_ctl; size_t ee_ctls; struct ath5k_edge_power* ee_ctl_pwr; } ;
struct TYPE_3__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_2__ ah_txpower; int ah_bwmode; TYPE_1__ ah_capabilities; } ;
struct ath5k_edge_power {scalar_t__ freq; scalar_t__ edge; } ;
typedef int s16 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;



 struct ath_regulatory* FUNC_0 (struct ath5k_hw*) ;
 size_t FUNC_1 (struct ath_regulatory*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct ath5k_hw *VAR_7,
   struct ieee80211_channel *VAR_8)
{
 struct ath_regulatory *VAR_9 = FUNC_0(VAR_7);
 struct ath5k_eeprom_info *VAR_10 = &VAR_7->ah_capabilities.cap_eeprom;
 struct ath5k_edge_power *VAR_11 = VAR_10->ee_ctl_pwr;
 u8 *VAR_12 = VAR_10->ee_ctl;
 s16 VAR_13 = VAR_7->ah_txpower.txp_max_pwr / 4;
 s16 VAR_14 = 0;
 u8 VAR_15;
 u8 VAR_16, VAR_17;
 u8 VAR_18 = 0xFF;
 u32 VAR_19 = VAR_8->center_freq;

 VAR_17 = FUNC_1(VAR_9, VAR_8->band);

 switch (VAR_8->hw_value) {
 case 130:
  if (VAR_7->ah_bwmode == VAR_0)
   VAR_17 |= VAR_4;
  else
   VAR_17 |= VAR_1;
  break;
 case 128:
  if (VAR_7->ah_bwmode == VAR_0)
   VAR_17 |= VAR_5;
  else
   VAR_17 |= VAR_3;
  break;
 case 129:
  VAR_17 |= VAR_2;
  break;
 default:
  return;
 }

 for (VAR_16 = 0; VAR_16 < VAR_10->ee_ctls; VAR_16++) {
  if (VAR_12[VAR_16] == VAR_17) {
   VAR_18 = VAR_16;
   break;
  }
 }



 if (VAR_18 == 0xFF)
  return;




 VAR_15 = VAR_18 * VAR_6;







 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  VAR_15 += VAR_16;
  if (VAR_19 <= VAR_11[VAR_15].freq)
   VAR_14 = (s16) VAR_11[VAR_15].edge;
 }

 if (VAR_14)
  VAR_7->ah_txpower.txp_max_pwr = 4 * FUNC_2(VAR_14, VAR_13);
}
