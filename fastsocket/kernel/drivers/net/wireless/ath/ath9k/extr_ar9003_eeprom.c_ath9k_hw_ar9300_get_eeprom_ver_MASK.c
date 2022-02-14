
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eepromVersion; } ;
struct TYPE_4__ {TYPE_1__ ar9300_eep; } ;
struct ath_hw {TYPE_2__ eeprom; } ;



__attribute__((used)) static int FUNC_0(struct ath_hw *VAR_0)
{
 return VAR_0->eeprom.ar9300_eep.eepromVersion;
}
