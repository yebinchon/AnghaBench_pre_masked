
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct acpi_driver {int ids; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (struct acpi_device*,int ) ;
 struct acpi_device* FUNC_1 (struct device*) ;
 struct acpi_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_1(VAR_0);
 struct acpi_driver *VAR_3 = FUNC_2(VAR_1);

 return !FUNC_0(VAR_2, VAR_3->ids);
}
