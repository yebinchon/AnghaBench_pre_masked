
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_channel {int band; int center_freq; } ;
struct ar9170_calibration_data_per_freq {int ** pwr_pdg; int ** vpd_pdg; } ;
struct TYPE_2__ {int* cal_freq_pier_2G; int* cal_freq_pier_5G; struct ar9170_calibration_data_per_freq** cal_pier_data_5G; struct ar9170_calibration_data_per_freq** cal_pier_data_2G; } ;
struct ar9170 {TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,int,int ,int,int ) ;
 int FUNC_2 (int,int*,int*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct ar9170 *VAR_5,
 struct ieee80211_channel *VAR_6)
{
 u8 *VAR_7;
 u8 VAR_8[2][VAR_3];
 u8 VAR_9[2][VAR_3];
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = 0;
 u8 VAR_14, VAR_15;

 switch (VAR_6->band) {
 case 129:
  VAR_14 = VAR_6->center_freq - 2300;
  VAR_7 = VAR_5->eeprom.cal_freq_pier_2G;
  VAR_12 = VAR_1 - 1;
  break;

 case 128:
  VAR_14 = (VAR_6->center_freq - 4800) / 5;
  VAR_7 = VAR_5->eeprom.cal_freq_pier_5G;
  VAR_12 = VAR_2 - 1;
  break;

 default:
  return -VAR_4;
  break;
 }

 for (; VAR_12 >= 0; VAR_12--) {
  if (VAR_7[VAR_12] != 0xff)
   break;
 }
 if (VAR_12 < 0)
  return -VAR_4;

 VAR_11 = FUNC_0(VAR_12, VAR_7, VAR_14);

 FUNC_4(VAR_5);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   struct ar9170_calibration_data_per_freq *VAR_16;
   int VAR_17;

   switch (VAR_6->band) {
   case 129:
    VAR_16 = &VAR_5->eeprom.
     cal_pier_data_2G[VAR_10][VAR_11];
    break;

   case 128:
    VAR_16 = &VAR_5->eeprom.
     cal_pier_data_5G[VAR_10][VAR_11];
    break;

   default:
    return -VAR_4;
   }

   for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
    VAR_8[VAR_17][VAR_12] = FUNC_1(VAR_14,
     VAR_7[VAR_11],
     VAR_16->vpd_pdg[VAR_17][VAR_12],
     VAR_7[VAR_11 + 1],
     VAR_16[1].vpd_pdg[VAR_17][VAR_12]);

    VAR_9[VAR_17][VAR_12] = FUNC_1(VAR_14,
     VAR_7[VAR_11],
     VAR_16->pwr_pdg[VAR_17][VAR_12],
     VAR_7[VAR_11 + 1],
     VAR_16[1].pwr_pdg[VAR_17][VAR_12]) / 2;
   }
  }

  for (VAR_12 = 0; VAR_12 < 76; VAR_12++) {
   if (VAR_12 < 25) {
    VAR_15 = FUNC_2(VAR_12, &VAR_9[0][0],
              &VAR_8[0][0]);
   } else {
    VAR_15 = FUNC_2(VAR_12 - 12,
              &VAR_9[1][0],
              &VAR_8[1][0]);
   }

   VAR_13 |= VAR_15 << ((VAR_12 & 3) << 3);
   if ((VAR_12 & 3) == 3) {
    FUNC_3(0x1c6280 + VAR_10 * 0x1000 +
        (VAR_12 & ~3), VAR_13);
    VAR_13 = 0;
   }
  }

  for (VAR_12 = 19; VAR_12 < 32; VAR_12++)
   FUNC_3(0x1c6280 + VAR_10 * 0x1000 + (VAR_12 << 2),
       0x0);
 }

 FUNC_5();
 return FUNC_6();
}
