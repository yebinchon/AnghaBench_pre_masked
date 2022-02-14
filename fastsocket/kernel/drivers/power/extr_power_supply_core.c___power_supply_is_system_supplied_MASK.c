
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int member_0; } ;
struct power_supply {scalar_t__ type; scalar_t__ (* get_property ) (struct power_supply*,int ,union power_supply_propval*) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct power_supply* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct power_supply*,int ,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, void *VAR_3)
{
 union power_supply_propval VAR_4 = {0,};
 struct power_supply *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->type != VAR_1) {
  if (VAR_5->get_property(VAR_5, VAR_0, &VAR_4))
   return 0;
  if (VAR_4.intval)
   return VAR_4.intval;
 }
 return 0;
}
