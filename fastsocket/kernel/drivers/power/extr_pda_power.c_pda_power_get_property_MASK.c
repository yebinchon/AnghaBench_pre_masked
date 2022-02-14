
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int type; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int (* is_usb_online ) () ;int (* is_ac_online ) () ;} ;


 int VAR_0 ;

 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_3,
      enum power_supply_property VAR_4,
      union power_supply_propval *VAR_5)
{
 switch (VAR_4) {
 case 128:
  if (VAR_3->type == VAR_1)
   VAR_5->intval = VAR_2->is_ac_online ?
          VAR_2->is_ac_online() : 0;
  else
   VAR_5->intval = VAR_2->is_usb_online ?
          VAR_2->is_usb_online() : 0;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
