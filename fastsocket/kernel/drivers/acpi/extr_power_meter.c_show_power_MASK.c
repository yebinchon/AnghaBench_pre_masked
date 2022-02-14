
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_power_meter_resource {int power; int lock; } ;
struct acpi_device {struct acpi_power_meter_resource* driver_data; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 struct acpi_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct acpi_power_meter_resource*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_3(VAR_0);
 struct acpi_power_meter_resource *VAR_4 = VAR_3->driver_data;

 FUNC_0(&VAR_4->lock);
 FUNC_4(VAR_4);
 FUNC_1(&VAR_4->lock);

 return FUNC_2(VAR_2, "%llu\n", VAR_4->power * 1000);
}
