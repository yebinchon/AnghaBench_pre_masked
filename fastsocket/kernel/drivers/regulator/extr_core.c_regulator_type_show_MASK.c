
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int type; } ;




 struct regulator_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct regulator_dev *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_3->desc->type) {
 case 128:
  return FUNC_1(VAR_2, "voltage\n");
 case 129:
  return FUNC_1(VAR_2, "current\n");
 }
 return FUNC_1(VAR_2, "unknown\n");
}
