
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* add ) (struct acpi_device*) ;} ;
struct acpi_driver {TYPE_1__ ops; } ;
struct acpi_device {struct acpi_driver* driver; int * driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static int
FUNC_2(struct acpi_device *VAR_3, struct acpi_driver *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3 || !VAR_4)
  return -VAR_1;

 if (!VAR_4->ops.add)
  return -VAR_2;

 VAR_5 = VAR_4->ops.add(VAR_3);
 if (VAR_5) {
  VAR_3->driver = ((void*)0);
  VAR_3->driver_data = ((void*)0);
  return VAR_5;
 }

 VAR_3->driver = VAR_4;






 FUNC_0((VAR_0,
     "Driver successfully bound to device\n"));
 return 0;
}
