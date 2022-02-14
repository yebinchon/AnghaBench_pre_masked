
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct cal_tgt_pow_ht {int * tPow2x; } ;
struct ar9300_eeprom {int * calTarget_freqbin_5GHT20; struct cal_tgt_pow_ht* calTargetPower5GHT20; int * calTarget_freqbin_2GHT20; struct cal_tgt_pow_ht* calTargetPower2GHT20; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef int s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,size_t) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static u8 FUNC_2(struct ath_hw *VAR_2,
         u16 VAR_3,
         u16 VAR_4, bool VAR_5)
{
 u16 VAR_6, VAR_7;
 s32 VAR_8[VAR_1];
 s32 VAR_9[VAR_1];
 struct ar9300_eeprom *VAR_10 = &VAR_2->eeprom.ar9300_eep;
 struct cal_tgt_pow_ht *VAR_11;
 u8 *VAR_12;

 if (VAR_5) {
  VAR_6 = VAR_0;
  VAR_11 = VAR_10->calTargetPower2GHT20;
  VAR_12 = VAR_10->calTarget_freqbin_2GHT20;
 } else {
  VAR_6 = VAR_1;
  VAR_11 = VAR_10->calTargetPower5GHT20;
  VAR_12 = VAR_10->calTarget_freqbin_5GHT20;
 }





 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_9[VAR_7] = FUNC_1(VAR_12[VAR_7], VAR_5);
  VAR_8[VAR_7] = VAR_11[VAR_7].tPow2x[VAR_3];
 }


 return (u8) FUNC_0((s32) VAR_4,
       VAR_9,
       VAR_8, VAR_6);
}
