
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct bq27x00_device_info {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;





 int FUNC_0 (struct bq27x00_device_info*) ;
 int FUNC_1 (struct bq27x00_device_info*) ;
 int FUNC_2 (struct bq27x00_device_info*) ;
 int FUNC_3 (struct bq27x00_device_info*) ;
 struct bq27x00_device_info* FUNC_4 (struct power_supply*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_1,
     enum power_supply_property VAR_2,
     union power_supply_propval *VAR_3)
{
 struct bq27x00_device_info *VAR_4 = FUNC_4(VAR_1);

 switch (VAR_2) {
 case 128:
 case 130:
  VAR_3->intval = FUNC_3(VAR_4);
  if (VAR_2 == 130)
   VAR_3->intval = VAR_3->intval <= 0 ? 0 : 1;
  break;
 case 131:
  VAR_3->intval = FUNC_0(VAR_4);
  break;
 case 132:
  VAR_3->intval = FUNC_1(VAR_4);
  break;
 case 129:
  VAR_3->intval = FUNC_2(VAR_4);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
