
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {struct fixed_voltage_data* name; } ;
struct fixed_voltage_data {TYPE_1__ desc; int gpio; int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct fixed_voltage_data*) ;
 struct fixed_voltage_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct fixed_voltage_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1->dev);
 if (FUNC_1(VAR_1->gpio))
  FUNC_0(VAR_1->gpio);
 FUNC_2(VAR_1->desc.name);
 FUNC_2(VAR_1);

 return 0;
}
