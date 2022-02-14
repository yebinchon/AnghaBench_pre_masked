
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int (* remove ) (struct acpi_device*,int ) ;scalar_t__ notify; } ;
struct acpi_driver {TYPE_1__ ops; } ;
struct acpi_device {int * driver_data; struct acpi_driver* driver; int removal_type; } ;


 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct acpi_device*,int ) ;
 struct acpi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device * VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_3(VAR_0);
 struct acpi_driver *VAR_2 = VAR_1->driver;

 if (VAR_2) {
  if (VAR_2->ops.notify)
   FUNC_0(VAR_1);
  if (VAR_2->ops.remove)
   VAR_2->ops.remove(VAR_1, VAR_1->removal_type);
 }
 VAR_1->driver = ((void*)0);
 VAR_1->driver_data = ((void*)0);

 FUNC_1(VAR_0);
 return 0;
}
