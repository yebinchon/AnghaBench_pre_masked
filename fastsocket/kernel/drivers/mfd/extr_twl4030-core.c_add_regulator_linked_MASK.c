
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_init_data {unsigned int num_consumer_supplies; struct regulator_consumer_supply* consumer_supplies; } ;
struct regulator_consumer_supply {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int,char*,int,struct regulator_init_data*,int,int,int ,int ) ;

__attribute__((used)) static struct device *
FUNC_1(int VAR_0, struct regulator_init_data *VAR_1,
  struct regulator_consumer_supply *VAR_2,
  unsigned VAR_3)
{

 if (!VAR_1)
  return ((void*)0);

 if (VAR_2) {
  VAR_1->consumer_supplies = VAR_2;
  VAR_1->num_consumer_supplies = VAR_3;
 }


 return FUNC_0(3, "twl4030_reg", VAR_0,
  VAR_1, sizeof(*VAR_1), 0, 0, 0);
}
