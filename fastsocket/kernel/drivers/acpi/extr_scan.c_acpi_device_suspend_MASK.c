
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int (* suspend ) (struct acpi_device*,int ) ;} ;
struct acpi_driver {TYPE_1__ ops; } ;
struct acpi_device {struct acpi_driver* driver; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct acpi_device*,int ) ;
 struct acpi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, pm_message_t VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_1(VAR_0);
 struct acpi_driver *VAR_3 = VAR_2->driver;

 if (VAR_3 && VAR_3->ops.suspend)
  return VAR_3->ops.suspend(VAR_2, VAR_1);
 return 0;
}
