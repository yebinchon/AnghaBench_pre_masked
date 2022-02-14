
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_info {int use_for_apm; int name; } ;
struct power_supply {int num_properties; int properties; int get_property; int type; int use_for_apm; int name; } ;
struct da9030_charger {struct power_supply_info* battery_info; struct power_supply psy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct da9030_charger *VAR_3)
{
 struct power_supply *VAR_4 = &VAR_3->psy;
 struct power_supply_info *VAR_5 = VAR_3->battery_info;

 VAR_4->name = VAR_5->name;
 VAR_4->use_for_apm = VAR_5->use_for_apm;
 VAR_4->type = VAR_0;
 VAR_4->get_property = VAR_1;

 VAR_4->properties = VAR_2;
 VAR_4->num_properties = FUNC_0(VAR_2);
}
