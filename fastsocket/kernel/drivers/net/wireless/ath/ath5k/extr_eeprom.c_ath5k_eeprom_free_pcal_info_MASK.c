
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ath5k_pdgain_info {struct ath5k_pdgain_info* pd_pwr; struct ath5k_pdgain_info* pd_step; } ;
struct ath5k_eeprom_info {size_t* ee_n_piers; struct ath5k_chan_pcal_info* ee_pwr_cal_g; int ee_header; struct ath5k_chan_pcal_info* ee_pwr_cal_b; struct ath5k_chan_pcal_info* ee_pwr_cal_a; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info {struct ath5k_pdgain_info* pd_curves; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;



 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ath5k_pdgain_info*) ;

__attribute__((used)) static int
FUNC_4(struct ath5k_hw *VAR_2, int VAR_3)
{
 struct ath5k_eeprom_info *VAR_4 = &VAR_2->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info *VAR_5;
 u8 VAR_6, VAR_7;

 switch (VAR_3) {
 case 130:
  if (!FUNC_0(VAR_4->ee_header))
   return 0;
  VAR_5 = VAR_4->ee_pwr_cal_a;
  break;
 case 129:
  if (!FUNC_1(VAR_4->ee_header))
   return 0;
  VAR_5 = VAR_4->ee_pwr_cal_b;
  break;
 case 128:
  if (!FUNC_2(VAR_4->ee_header))
   return 0;
  VAR_5 = VAR_4->ee_pwr_cal_g;
  break;
 default:
  return -VAR_1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->ee_n_piers[VAR_3]; VAR_6++) {
  if (!VAR_5[VAR_6].pd_curves)
   continue;

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   struct ath5k_pdgain_info *VAR_8 =
     &VAR_5[VAR_6].pd_curves[VAR_7];

   FUNC_3(VAR_8->pd_step);
   FUNC_3(VAR_8->pd_pwr);
  }

  FUNC_3(VAR_5[VAR_6].pd_curves);
 }

 return 0;
}
