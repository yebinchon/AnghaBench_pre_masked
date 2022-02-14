
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ee_header; int ee_rfkill_pol; int ee_rfkill_pin; } ;
struct TYPE_5__ {TYPE_1__ cap_eeprom; } ;
struct TYPE_6__ {int toggleq; int polarity; int gpio; } ;
struct ath5k_hw {TYPE_2__ ah_capabilities; TYPE_3__ rf_kill; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath5k_hw*) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,unsigned long) ;

void
FUNC_4(struct ath5k_hw *VAR_1)
{

 VAR_1->rf_kill.gpio = VAR_1->ah_capabilities.cap_eeprom.ee_rfkill_pin;
 VAR_1->rf_kill.polarity = VAR_1->ah_capabilities.cap_eeprom.ee_rfkill_pol;

 FUNC_3(&VAR_1->rf_kill.toggleq, VAR_0,
  (unsigned long)VAR_1);

 FUNC_1(VAR_1);


 if (FUNC_0(VAR_1->ah_capabilities.cap_eeprom.ee_header))
  FUNC_2(VAR_1, 1);
}
