
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_power_meter_resource {unsigned long* trip; int lock; } ;
struct acpi_device {struct acpi_power_meter_resource* driver_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct acpi_power_meter_resource*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 struct acpi_device* FUNC_4 (struct device*) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_2);
 struct acpi_device *VAR_6 = FUNC_4(VAR_1);
 struct acpi_power_meter_resource *VAR_7 = VAR_6->driver_data;
 int VAR_8;
 unsigned long VAR_9;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_9 /= 1000;
 if (VAR_9 < 0)
  return -VAR_0;

 FUNC_0(&VAR_7->lock);
 VAR_7->trip[VAR_5->index - 7] = VAR_9;
 VAR_8 = FUNC_2(VAR_7);
 FUNC_1(&VAR_7->lock);

 if (VAR_8)
  return VAR_8;

 return VAR_4;
}
