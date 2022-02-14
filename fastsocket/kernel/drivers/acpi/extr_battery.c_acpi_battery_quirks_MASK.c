
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battery {int quirks; scalar_t__ power_unit; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct acpi_battery *VAR_1)
{
 VAR_1->quirks = 0;
 if (FUNC_0("Acer") && VAR_1->power_unit) {
  VAR_1->quirks |= VAR_0;
 }
}
