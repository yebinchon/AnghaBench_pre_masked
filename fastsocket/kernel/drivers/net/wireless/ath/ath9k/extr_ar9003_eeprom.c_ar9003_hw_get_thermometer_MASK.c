
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9300_base_eep_hdr {int miscConfiguration; } ;
struct ar9300_eeprom {struct ar9300_base_eep_hdr baseEepHeader; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;



__attribute__((used)) static int FUNC_0(struct ath_hw *VAR_0)
{
 struct ar9300_eeprom *VAR_1 = &VAR_0->eeprom.ar9300_eep;
 struct ar9300_base_eep_hdr *VAR_2 = &VAR_1->baseEepHeader;
 int VAR_3 = (VAR_2->miscConfiguration >> 1) & 0x3;

 return --VAR_3;
}
