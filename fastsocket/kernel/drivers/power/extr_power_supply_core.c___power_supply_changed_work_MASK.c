
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int num_supplicants; int (* external_power_changed ) (struct power_supply*) ;int name; int * supplied_to; } ;
struct device {int dummy; } ;


 struct power_supply* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct power_supply *VAR_2 = (struct power_supply *)VAR_1;
 struct power_supply *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_supplicants; VAR_4++)
  if (!FUNC_1(VAR_2->supplied_to[VAR_4], VAR_3->name)) {
   if (VAR_3->external_power_changed)
    VAR_3->external_power_changed(VAR_3);
  }
 return 0;
}
