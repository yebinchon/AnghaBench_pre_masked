
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpiphp_func {int handle; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device**,struct acpi_device*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct acpi_device**) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct acpiphp_func *VAR_1)
{
 acpi_handle VAR_2;
 struct acpi_device *VAR_3, *VAR_4;
 int VAR_5;

 FUNC_4(VAR_1->handle, &VAR_2);
 if (FUNC_1(VAR_2, &VAR_4)) {
  FUNC_5("no parent device, assuming NULL\n");
  VAR_4 = ((void*)0);
 }
 if (!FUNC_1(VAR_1->handle, &VAR_3)) {
  FUNC_5("bus exists... trim\n");



  VAR_5 = FUNC_3(VAR_3, 1);
  FUNC_5("acpi_bus_trim return %x\n", VAR_5);
 }

 VAR_5 = FUNC_0(&VAR_3, VAR_4, VAR_1->handle,
  VAR_0);
 if (VAR_5) {
  FUNC_5("error adding bus, %x\n",
   -VAR_5);
  goto acpiphp_bus_add_out;
 }
 VAR_5 = FUNC_2(VAR_3);

acpiphp_bus_add_out:
 return VAR_5;
}
