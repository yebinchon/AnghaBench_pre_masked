
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int member_0; } ;
struct power_supply {int num_supplicants; scalar_t__ (* get_property ) (struct power_supply*,int ,union power_supply_propval*) ;int name; int * supplied_to; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct power_supply* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct power_supply*,int ,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 union power_supply_propval VAR_3 = {0,};
 struct power_supply *VAR_4 = (struct power_supply *)VAR_2;
 struct power_supply *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_supplicants; VAR_6++) {
  if (!FUNC_1(VAR_5->supplied_to[VAR_6], VAR_4->name)) {
   if (VAR_5->get_property(VAR_5,
      VAR_0, &VAR_3))
    continue;
   if (VAR_3.intval)
    return VAR_3.intval;
  }
 }
 return 0;
}
