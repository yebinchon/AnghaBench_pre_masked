
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ath5k_rate_pcal_info {scalar_t__ freq; int target_power_6to24; int target_power_36; int target_power_48; int target_power_54; } ;
struct ath5k_eeprom_info {int* ee_rate_target_pwr_num; scalar_t__ ee_version; struct ath5k_rate_pcal_info* ee_rate_tpwr_g; struct ath5k_rate_pcal_info* ee_rate_tpwr_b; struct ath5k_rate_pcal_info* ee_rate_tpwr_a; int ee_misc1; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_5 (struct ath5k_eeprom_info*,int,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct ath5k_hw *VAR_5, unsigned int VAR_6)
{
 struct ath5k_eeprom_info *VAR_7 = &VAR_5->ah_capabilities.cap_eeprom;
 struct ath5k_rate_pcal_info *VAR_8;
 u8 *VAR_9;
 u32 VAR_10;
 u16 VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_7->ee_misc1);
 VAR_9 = &VAR_7->ee_rate_target_pwr_num[VAR_6];
 switch (VAR_6) {
 case 130:
  VAR_10 += FUNC_2(VAR_7->ee_version);
  VAR_8 = VAR_7->ee_rate_tpwr_a;
  VAR_7->ee_rate_target_pwr_num[VAR_6] = VAR_2;
  break;
 case 129:
  VAR_10 += FUNC_3(VAR_7->ee_version);
  VAR_8 = VAR_7->ee_rate_tpwr_b;
  VAR_7->ee_rate_target_pwr_num[VAR_6] = 2;
  break;
 case 128:
  VAR_10 += FUNC_4(VAR_7->ee_version);
  VAR_8 = VAR_7->ee_rate_tpwr_g;
  VAR_7->ee_rate_target_pwr_num[VAR_6] = VAR_1;
  break;
 default:
  return -VAR_4;
 }


 if (VAR_7->ee_version <= VAR_3) {
  for (VAR_12 = 0; VAR_12 < (*VAR_9); VAR_12++) {
   FUNC_0(VAR_10++, VAR_11);
   VAR_8[VAR_12].freq =
       FUNC_5(VAR_7, (VAR_11 >> 9) & 0x7f, VAR_6);

   VAR_8[VAR_12].target_power_6to24 = ((VAR_11 >> 3) & 0x3f);
   VAR_8[VAR_12].target_power_36 = (VAR_11 << 3) & 0x3f;

   FUNC_0(VAR_10++, VAR_11);

   if (VAR_8[VAR_12].freq == VAR_0 ||
       VAR_11 == 0) {
    (*VAR_9) = VAR_12;
    break;
   }

   VAR_8[VAR_12].target_power_36 |= ((VAR_11 >> 13) & 0x7);
   VAR_8[VAR_12].target_power_48 = ((VAR_11 >> 7) & 0x3f);
   VAR_8[VAR_12].target_power_54 = ((VAR_11 >> 1) & 0x3f);
  }
 } else {
  for (VAR_12 = 0; VAR_12 < (*VAR_9); VAR_12++) {
   FUNC_0(VAR_10++, VAR_11);
   VAR_8[VAR_12].freq =
       FUNC_5(VAR_7, (VAR_11 >> 8) & 0xff, VAR_6);

   VAR_8[VAR_12].target_power_6to24 = ((VAR_11 >> 2) & 0x3f);
   VAR_8[VAR_12].target_power_36 = (VAR_11 << 4) & 0x3f;

   FUNC_0(VAR_10++, VAR_11);

   if (VAR_8[VAR_12].freq == VAR_0 ||
       VAR_11 == 0) {
    (*VAR_9) = VAR_12;
    break;
   }

   VAR_8[VAR_12].target_power_36 |= (VAR_11 >> 12) & 0xf;
   VAR_8[VAR_12].target_power_48 = ((VAR_11 >> 6) & 0x3f);
   VAR_8[VAR_12].target_power_54 = (VAR_11 & 0x3f);
  }
 }

 return 0;
}
