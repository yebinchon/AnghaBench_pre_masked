
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
struct TYPE_6__ {int txFrameToXpaOn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ,int ,int ) ;
 TYPE_3__* FUNC_4 (struct ath_hw*,int) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_3, bool VAR_4)
{
 struct ar9300_eeprom *VAR_5 = &VAR_3->eeprom.ar9300_eep;
 u8 VAR_6;

 if (!(VAR_5->baseEepHeader.featureEnable & 0x80))
  return;

 if (!FUNC_0(VAR_3) && !FUNC_1(VAR_3) && !FUNC_2(VAR_3))
  return;

 VAR_6 = FUNC_4(VAR_3, VAR_4)->txFrameToXpaOn;
 if (VAR_4)
  FUNC_3(VAR_3, VAR_0,
         VAR_2, VAR_6);
 else
  FUNC_3(VAR_3, VAR_0,
         VAR_1, VAR_6);
}
