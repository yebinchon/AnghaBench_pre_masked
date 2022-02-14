
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ath5k_eeprom_info {int** ee_pdc_to_idx; int* ee_x_gain; int* ee_pd_gains; int* ee_n_piers; struct ath5k_chan_pcal_info* ee_pwr_cal_g; int ee_header; struct ath5k_chan_pcal_info* ee_pwr_cal_b; struct ath5k_chan_pcal_info* ee_pwr_cal_a; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info_rf2413 {int* pwr_i; int* pddac_i; int** pwr; int** pddac; } ;
struct ath5k_chan_pcal_info {struct ath5k_chan_pcal_info_rf2413 rf2413_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct ath5k_eeprom_info*,int) ;
 int FUNC_5 (struct ath5k_hw*,int,struct ath5k_chan_pcal_info*) ;
 int FUNC_6 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_7 (struct ath5k_hw*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct ath5k_hw *VAR_4, int VAR_5)
{
 struct ath5k_eeprom_info *VAR_6 = &VAR_4->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info_rf2413 *VAR_7;
 struct ath5k_chan_pcal_info *VAR_8;
 u8 *VAR_9 = VAR_6->ee_pdc_to_idx[VAR_5];
 u32 VAR_10;
 int VAR_11, VAR_12;
 u16 VAR_13;
 u8 VAR_14 = 0;






 for (VAR_11 = VAR_2 - 1; VAR_11 >= 0; VAR_11--) {

  if ((VAR_6->ee_x_gain[VAR_5] >> VAR_11) & 0x1)
   VAR_9[VAR_14++] = VAR_11;

 }
 VAR_6->ee_pd_gains[VAR_5] = VAR_14;

 if (VAR_14 == 0)
  return -VAR_3;

 VAR_10 = FUNC_4(VAR_6, VAR_5);
 switch (VAR_5) {
 case 130:
  if (!FUNC_0(VAR_6->ee_header))
   return 0;

  FUNC_6(VAR_4, VAR_10);
  VAR_10 += VAR_1 / 2;
  VAR_8 = VAR_6->ee_pwr_cal_a;
  break;
 case 129:
  if (!FUNC_1(VAR_6->ee_header))
   return 0;

  FUNC_7(VAR_4, VAR_5, VAR_10);
  VAR_10 += VAR_0 / 2;
  VAR_8 = VAR_6->ee_pwr_cal_b;
  break;
 case 128:
  if (!FUNC_2(VAR_6->ee_header))
   return 0;

  FUNC_7(VAR_4, VAR_5, VAR_10);
  VAR_10 += VAR_0 / 2;
  VAR_8 = VAR_6->ee_pwr_cal_g;
  break;
 default:
  return -VAR_3;
 }

 for (VAR_12 = 0; VAR_12 < VAR_6->ee_n_piers[VAR_5]; VAR_12++) {
  VAR_7 = &VAR_8[VAR_12].rf2413_info;





  FUNC_3(VAR_10++, VAR_13);
  VAR_7->pwr_i[0] = VAR_13 & 0x1f;
  VAR_7->pddac_i[0] = (VAR_13 >> 5) & 0x7f;
  VAR_7->pwr[0][0] = (VAR_13 >> 12) & 0xf;

  FUNC_3(VAR_10++, VAR_13);
  VAR_7->pddac[0][0] = VAR_13 & 0x3f;
  VAR_7->pwr[0][1] = (VAR_13 >> 6) & 0xf;
  VAR_7->pddac[0][1] = (VAR_13 >> 10) & 0x3f;

  FUNC_3(VAR_10++, VAR_13);
  VAR_7->pwr[0][2] = VAR_13 & 0xf;
  VAR_7->pddac[0][2] = (VAR_13 >> 4) & 0x3f;

  VAR_7->pwr[0][3] = 0;
  VAR_7->pddac[0][3] = 0;

  if (VAR_14 > 1) {





   VAR_7->pwr_i[1] = (VAR_13 >> 10) & 0x1f;

   VAR_7->pddac_i[1] = (VAR_13 >> 15) & 0x1;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pddac_i[1] |= (VAR_13 & 0x3F) << 1;

   VAR_7->pwr[1][0] = (VAR_13 >> 6) & 0xf;
   VAR_7->pddac[1][0] = (VAR_13 >> 10) & 0x3f;

   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pwr[1][1] = VAR_13 & 0xf;
   VAR_7->pddac[1][1] = (VAR_13 >> 4) & 0x3f;
   VAR_7->pwr[1][2] = (VAR_13 >> 10) & 0xf;

   VAR_7->pddac[1][2] = (VAR_13 >> 14) & 0x3;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pddac[1][2] |= (VAR_13 & 0xF) << 2;

   VAR_7->pwr[1][3] = 0;
   VAR_7->pddac[1][3] = 0;
  } else if (VAR_14 == 1) {




   VAR_7->pwr[0][3] = (VAR_13 >> 10) & 0xf;

   VAR_7->pddac[0][3] = (VAR_13 >> 14) & 0x3;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pddac[0][3] |= (VAR_13 & 0xF) << 2;
  }





  if (VAR_14 > 2) {
   VAR_7->pwr_i[2] = (VAR_13 >> 4) & 0x1f;
   VAR_7->pddac_i[2] = (VAR_13 >> 9) & 0x7f;

   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pwr[2][0] = (VAR_13 >> 0) & 0xf;
   VAR_7->pddac[2][0] = (VAR_13 >> 4) & 0x3f;
   VAR_7->pwr[2][1] = (VAR_13 >> 10) & 0xf;

   VAR_7->pddac[2][1] = (VAR_13 >> 14) & 0x3;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pddac[2][1] |= (VAR_13 & 0xF) << 2;

   VAR_7->pwr[2][2] = (VAR_13 >> 4) & 0xf;
   VAR_7->pddac[2][2] = (VAR_13 >> 8) & 0x3f;

   VAR_7->pwr[2][3] = 0;
   VAR_7->pddac[2][3] = 0;
  } else if (VAR_14 == 2) {
   VAR_7->pwr[1][3] = (VAR_13 >> 4) & 0xf;
   VAR_7->pddac[1][3] = (VAR_13 >> 8) & 0x3f;
  }

  if (VAR_14 > 3) {
   VAR_7->pwr_i[3] = (VAR_13 >> 14) & 0x3;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pwr_i[3] |= ((VAR_13 >> 0) & 0x7) << 2;

   VAR_7->pddac_i[3] = (VAR_13 >> 3) & 0x7f;
   VAR_7->pwr[3][0] = (VAR_13 >> 10) & 0xf;
   VAR_7->pddac[3][0] = (VAR_13 >> 14) & 0x3;

   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pddac[3][0] |= (VAR_13 & 0xF) << 2;
   VAR_7->pwr[3][1] = (VAR_13 >> 4) & 0xf;
   VAR_7->pddac[3][1] = (VAR_13 >> 8) & 0x3f;

   VAR_7->pwr[3][2] = (VAR_13 >> 14) & 0x3;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pwr[3][2] |= ((VAR_13 >> 0) & 0x3) << 2;

   VAR_7->pddac[3][2] = (VAR_13 >> 2) & 0x3f;
   VAR_7->pwr[3][3] = (VAR_13 >> 8) & 0xf;

   VAR_7->pddac[3][3] = (VAR_13 >> 12) & 0xF;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pddac[3][3] |= ((VAR_13 >> 0) & 0x3) << 4;
  } else if (VAR_14 == 3) {
   VAR_7->pwr[2][3] = (VAR_13 >> 14) & 0x3;
   FUNC_3(VAR_10++, VAR_13);
   VAR_7->pwr[2][3] |= ((VAR_13 >> 0) & 0x3) << 2;

   VAR_7->pddac[2][3] = (VAR_13 >> 2) & 0x3f;
  }
 }

 return FUNC_5(VAR_4, VAR_5, VAR_8);
}
