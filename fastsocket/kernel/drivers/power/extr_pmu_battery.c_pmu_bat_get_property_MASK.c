
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct pmu_battery_info {int flags; int charge; int max_charge; int amperage; int voltage; int time_remaining; } ;
struct pmu_battery_dev {struct pmu_battery_info* pbi; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pmu_battery_info*) ;
 struct pmu_battery_dev* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_5,
    enum power_supply_property VAR_6,
    union power_supply_propval *VAR_7)
{
 struct pmu_battery_dev *VAR_8 = FUNC_1(VAR_5);
 struct pmu_battery_info *VAR_9 = VAR_8->pbi;

 switch (VAR_6) {
 case 130:
  if (VAR_9->flags & VAR_1)
   VAR_7->intval = VAR_3;
  else
   VAR_7->intval = VAR_4;
  break;
 case 131:
  VAR_7->intval = !!(VAR_9->flags & VAR_2);
  break;
 case 132:
  VAR_7->strval = FUNC_0(VAR_9);
  break;
 case 134:
  VAR_7->intval = VAR_9->charge * 1000;
  break;
 case 133:
  VAR_7->intval = VAR_9->max_charge * 1000;
  break;
 case 135:
  VAR_7->intval = VAR_9->amperage * 1000;
  break;
 case 128:
  VAR_7->intval = VAR_9->voltage * 1000;
  break;
 case 129:
  VAR_7->intval = VAR_9->time_remaining;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
