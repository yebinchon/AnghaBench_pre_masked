
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(acpi_handle VAR_0)
{
 struct acpi_device *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_2) {
  FUNC_2("acpi_device not found\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2)
  FUNC_3("cannot remove from acpi list\n");

 return VAR_2;
}
