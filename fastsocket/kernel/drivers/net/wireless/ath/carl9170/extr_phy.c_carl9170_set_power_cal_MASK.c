
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ar9170_calibration_target_power_legacy {int freq; int * power; } ;
struct ar9170_calibration_target_power_ht {int freq; int * power; } ;
struct TYPE_2__ {struct ar9170_calibration_target_power_ht* cal_tgt_pwr_2G_ht40; struct ar9170_calibration_target_power_ht* cal_tgt_pwr_2G_ht20; struct ar9170_calibration_target_power_ht* cal_tgt_pwr_5G_ht40; struct ar9170_calibration_target_power_ht* cal_tgt_pwr_5G_ht20; struct ar9170_calibration_target_power_legacy* cal_tgt_pwr_2G_ofdm; struct ar9170_calibration_target_power_legacy* cal_tgt_pwr_2G_cck; struct ar9170_calibration_target_power_legacy* cal_tgt_pwr_5G; } ;
struct ar9170 {int* power_5G_leg; int* power_2G_cck; int* power_2G_ofdm; int* power_5G_ht20; int* power_5G_ht40; int* power_2G_ht20; int* power_2G_ht40; TYPE_1__ eeprom; } ;
typedef enum carl9170_bw { ____Placeholder_carl9170_bw } carl9170_bw ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ar9170*,int,int) ;
 int FUNC_2 (int,int*,int) ;
 int FUNC_3 (int,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct ar9170 *VAR_4, u32 VAR_5,
       enum carl9170_bw VAR_6)
{
 struct ar9170_calibration_target_power_legacy *VAR_7;
 struct ar9170_calibration_target_power_ht *VAR_8;
 u8 *VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u8 VAR_14;
 u8 VAR_15[VAR_0];

 if (VAR_5 < 3000)
  VAR_14 = VAR_5 - 2300;
 else
  VAR_14 = (VAR_5 - 4800) / 5;






 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  switch (VAR_12) {
  case 0:
   VAR_7 = &VAR_4->eeprom.cal_tgt_pwr_5G[0];
   VAR_10 = VAR_3;
   VAR_9 = VAR_4->power_5G_leg;
   break;
  case 1:
   VAR_7 = &VAR_4->eeprom.cal_tgt_pwr_2G_cck[0];
   VAR_10 = VAR_1;
   VAR_9 = VAR_4->power_2G_cck;
   break;
  case 2:
   VAR_7 = &VAR_4->eeprom.cal_tgt_pwr_2G_ofdm[0];
   VAR_10 = VAR_2;
   VAR_9 = VAR_4->power_2G_ofdm;
   break;
  default:
   FUNC_0();
  }

  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   if (VAR_7[VAR_13].freq == 0xff)
    break;
   VAR_15[VAR_13] = VAR_7[VAR_13].freq;
  }
  VAR_10 = VAR_13;
  VAR_11 = FUNC_2(VAR_10, VAR_15, VAR_14);
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
   VAR_9[VAR_13] = FUNC_3(VAR_14,
    VAR_7[VAR_11 + 0].freq, VAR_7[VAR_11 + 0].power[VAR_13],
    VAR_7[VAR_11 + 1].freq, VAR_7[VAR_11 + 1].power[VAR_13]);
 }


 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  switch (VAR_12) {
  case 0:
   VAR_8 = &VAR_4->eeprom.cal_tgt_pwr_5G_ht20[0];
   VAR_10 = VAR_3;
   VAR_9 = VAR_4->power_5G_ht20;
   break;
  case 1:
   VAR_8 = &VAR_4->eeprom.cal_tgt_pwr_5G_ht40[0];
   VAR_10 = VAR_3;
   VAR_9 = VAR_4->power_5G_ht40;
   break;
  case 2:
   VAR_8 = &VAR_4->eeprom.cal_tgt_pwr_2G_ht20[0];
   VAR_10 = VAR_2;
   VAR_9 = VAR_4->power_2G_ht20;
   break;
  case 3:
   VAR_8 = &VAR_4->eeprom.cal_tgt_pwr_2G_ht40[0];
   VAR_10 = VAR_2;
   VAR_9 = VAR_4->power_2G_ht40;
   break;
  default:
   FUNC_0();
  }

  for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
   if (VAR_8[VAR_13].freq == 0xff)
    break;
   VAR_15[VAR_13] = VAR_8[VAR_13].freq;
  }
  VAR_10 = VAR_13;
  VAR_11 = FUNC_2(VAR_10, VAR_15, VAR_14);
  for (VAR_13 = 0; VAR_13 < 8; VAR_13++)
   VAR_9[VAR_13] = FUNC_3(VAR_14,
    VAR_8[VAR_11 + 0].freq, VAR_8[VAR_11 + 0].power[VAR_13],
    VAR_8[VAR_11 + 1].freq, VAR_8[VAR_11 + 1].power[VAR_13]);
 }


 FUNC_1(VAR_4, VAR_5, VAR_6);
}
