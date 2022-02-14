
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int featureEnable; } ;
struct ar9300_eeprom {TYPE_2__ baseEepHeader; } ;
struct TYPE_4__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct TYPE_6__ {int xlna_bias_strength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;
 TYPE_3__* FUNC_2 (struct ath_hw*,int) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_4, bool VAR_5)
{
 struct ar9300_eeprom *VAR_6 = &VAR_4->eeprom.ar9300_eep;
 u8 VAR_7;

 if (!(VAR_6->baseEepHeader.featureEnable & 0x40))
  return;

 if (!FUNC_0(VAR_4))
  return;

 VAR_7 = FUNC_2(VAR_4, VAR_5)->xlna_bias_strength;
 FUNC_1(VAR_4, VAR_0, VAR_3,
        VAR_7 & 0x3);
 VAR_7 >>= 2;
 FUNC_1(VAR_4, VAR_1, VAR_3,
        VAR_7 & 0x3);
 VAR_7 >>= 2;
 FUNC_1(VAR_4, VAR_2, VAR_3,
        VAR_7 & 0x3);
}
