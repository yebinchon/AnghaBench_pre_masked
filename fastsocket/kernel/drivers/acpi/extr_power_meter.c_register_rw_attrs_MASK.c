
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mode; int * name; } ;
struct TYPE_6__ {TYPE_2__ attr; int store; int show; } ;
struct sensor_device_attribute {TYPE_3__ dev_attr; int index; } ;
struct rw_sensor_template {int index; int set; int show; int * label; } ;
struct device {int dummy; } ;
struct acpi_power_meter_resource {size_t num_sensors; struct sensor_device_attribute* sensors; TYPE_1__* acpi_dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct acpi_power_meter_resource *VAR_2,
        struct rw_sensor_template *VAR_3)
{
 struct device *VAR_4 = &VAR_2->acpi_dev->dev;
 struct sensor_device_attribute *VAR_5 =
  &VAR_2->sensors[VAR_2->num_sensors];
 int VAR_6 = 0;

 while (VAR_3->label) {
  VAR_5->dev_attr.attr.name = VAR_3->label;
  VAR_5->dev_attr.attr.mode = VAR_0 | VAR_1;
  VAR_5->dev_attr.show = VAR_3->show;
  VAR_5->dev_attr.store = VAR_3->set;
  VAR_5->index = VAR_3->index;

  VAR_6 = FUNC_0(VAR_4, &VAR_5->dev_attr);
  if (VAR_6) {
   VAR_5->dev_attr.attr.name = ((void*)0);
   goto error;
  }
  VAR_5++;
  VAR_2->num_sensors++;
  VAR_3++;
 }

error:
 return VAR_6;
}
