
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_button {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct acpi_button* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1)
{
 struct acpi_button *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->type == VAR_0)
  return FUNC_1(VAR_1);
 return 0;
}
