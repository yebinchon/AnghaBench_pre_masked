
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int accuracy; } ;
struct acpi_power_meter_resource {TYPE_1__ caps; } ;
struct acpi_device {struct acpi_power_meter_resource* driver_data; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned int,unsigned int) ;
 struct acpi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_1(VAR_0);
 struct acpi_power_meter_resource *VAR_4 = VAR_3->driver_data;
 unsigned int VAR_5 = VAR_4->caps.accuracy;

 return FUNC_0(VAR_2, "%u.%u%%\n", VAR_5 / 1000, VAR_5 % 1000);
}
