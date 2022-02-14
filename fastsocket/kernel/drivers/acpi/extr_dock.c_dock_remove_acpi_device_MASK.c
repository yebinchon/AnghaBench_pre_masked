
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(acpi_handle VAR_0)
{
 struct acpi_device *VAR_1;
 int VAR_2;

 if (!FUNC_0(VAR_0, &VAR_1)) {
  VAR_2 = FUNC_1(VAR_1, 1);
  if (VAR_2)
   FUNC_2("error removing bus, %x\n", -VAR_2);
 }
}
