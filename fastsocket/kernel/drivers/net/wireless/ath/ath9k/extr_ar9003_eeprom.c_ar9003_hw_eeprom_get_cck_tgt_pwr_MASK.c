
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct cal_tgt_pow_legacy {int * tPow2x; } ;
struct ar9300_eeprom {int * calTarget_freqbin_Cck; struct cal_tgt_pow_legacy* calTargetPowerCck; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,size_t) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static u8 FUNC_2(struct ath_hw *VAR_1,
        u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4 = VAR_0, VAR_5;
 s32 VAR_6[VAR_0];
 s32 VAR_7[VAR_0];
 struct ar9300_eeprom *VAR_8 = &VAR_1->eeprom.ar9300_eep;
 struct cal_tgt_pow_legacy *VAR_9 = VAR_8->calTargetPowerCck;
 u8 *VAR_10 = VAR_8->calTarget_freqbin_Cck;





 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_7[VAR_5] = FUNC_1(VAR_10[VAR_5], 1);
  VAR_6[VAR_5] = VAR_9[VAR_5].tPow2x[VAR_2];
 }


 return (u8) FUNC_0((s32) VAR_3,
       VAR_7,
       VAR_6, VAR_4);
}
