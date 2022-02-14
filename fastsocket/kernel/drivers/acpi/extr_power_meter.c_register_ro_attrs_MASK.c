
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * name; int mode; } ;
struct TYPE_6__ {TYPE_2__ attr; int show; } ;
struct sensor_device_attribute {TYPE_3__ dev_attr; int index; } ;
struct ro_sensor_template {int index; int show; int * label; } ;
struct device {int dummy; } ;
struct acpi_power_meter_resource {size_t num_sensors; struct sensor_device_attribute* sensors; TYPE_1__* acpi_dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct acpi_power_meter_resource *VAR_1,
        struct ro_sensor_template *VAR_2)
{
 struct device *VAR_3 = &VAR_1->acpi_dev->dev;
 struct sensor_device_attribute *VAR_4 =
  &VAR_1->sensors[VAR_1->num_sensors];
 int VAR_5 = 0;

 while (VAR_2->label) {
  VAR_4->dev_attr.attr.name = VAR_2->label;
  VAR_4->dev_attr.attr.mode = VAR_0;
  VAR_4->dev_attr.show = VAR_2->show;
  VAR_4->index = VAR_2->index;

  VAR_5 = FUNC_0(VAR_3, &VAR_4->dev_attr);
  if (VAR_5) {
   VAR_4->dev_attr.attr.name = ((void*)0);
   goto error;
  }
  VAR_4++;
  VAR_1->num_sensors++;
  VAR_2++;
 }

error:
 return VAR_5;
}
