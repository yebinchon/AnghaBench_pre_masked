
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int version; } ;
struct TYPE_5__ {TYPE_1__ baseEepHeader; } ;
struct TYPE_6__ {TYPE_2__ map9287; } ;
struct ath_hw {TYPE_3__ eeprom; } ;



__attribute__((used)) static int FUNC_0(struct ath_hw *VAR_0)
{
 return (VAR_0->eeprom.map9287.baseEepHeader.version) & 0xFFF;
}
