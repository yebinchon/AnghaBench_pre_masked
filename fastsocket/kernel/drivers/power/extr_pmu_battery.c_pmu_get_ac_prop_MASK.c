
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct power_supply *VAR_4,
      enum power_supply_property VAR_5,
      union power_supply_propval *VAR_6)
{
 switch (VAR_5) {
 case 128:
  VAR_6->intval = (!!(VAR_3 & VAR_1)) ||
         (VAR_2 == 0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
