
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_container {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 struct acpi_container* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_container*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1, int VAR_2)
{
 acpi_status VAR_3 = VAR_0;
 struct acpi_container *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(VAR_1);
 FUNC_1(VAR_4);
 return VAR_3;
}
