
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct atk_data {int hwmon_dev; TYPE_1__* acpi_dev; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct atk_data*) ;
 int FUNC_3 (struct atk_data*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct atk_data *VAR_0)
{
 struct device *VAR_1 = &VAR_0->acpi_dev->dev;
 int VAR_2;

 FUNC_4(VAR_1, "registering hwmon device\n");
 VAR_0->hwmon_dev = FUNC_5(VAR_1);
 if (FUNC_0(VAR_0->hwmon_dev))
  return FUNC_1(VAR_0->hwmon_dev);

 FUNC_4(VAR_1, "populating sysfs directory\n");
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto remove;

 return 0;
remove:

 FUNC_3(VAR_0);
 FUNC_6(VAR_0->hwmon_dev);
 return VAR_2;
}
