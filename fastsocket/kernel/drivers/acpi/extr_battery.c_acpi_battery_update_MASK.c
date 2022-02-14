
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct acpi_battery {int power_unit; TYPE_1__ bat; scalar_t__ update_time; } ;


 int FUNC_0 (struct acpi_battery*) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (struct acpi_battery*) ;
 int FUNC_3 (struct acpi_battery*) ;
 int FUNC_4 (struct acpi_battery*) ;
 int FUNC_5 (struct acpi_battery*) ;
 int FUNC_6 (struct acpi_battery*) ;
 int FUNC_7 (struct acpi_battery*) ;

__attribute__((used)) static int FUNC_8(struct acpi_battery *VAR_0, bool VAR_1)
{
 int VAR_2, VAR_3 = FUNC_4(VAR_0);



 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;







 if (!VAR_0->update_time ||
     VAR_3 != FUNC_4(VAR_0)) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2)
   return VAR_2;
  FUNC_5(VAR_0);
  FUNC_3(VAR_0);
 }




 if (VAR_1) {
  FUNC_0(VAR_0);







 }
 return FUNC_1(VAR_0);
}
