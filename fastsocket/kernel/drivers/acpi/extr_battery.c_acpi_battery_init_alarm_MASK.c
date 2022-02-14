
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_battery {int alarm_present; scalar_t__ design_capacity_warning; scalar_t__ alarm; TYPE_1__* device; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (int ,char*,int **) ;

__attribute__((used)) static int FUNC_3(struct acpi_battery *VAR_1)
{
 acpi_status VAR_2 = VAR_0;
 acpi_handle VAR_3 = ((void*)0);


 VAR_2 = FUNC_2(VAR_1->device->handle, "_BTP", &VAR_3);
 if (FUNC_0(VAR_2)) {
  VAR_1->alarm_present = 0;
  return 0;
 }
 VAR_1->alarm_present = 1;
 if (!VAR_1->alarm)
  VAR_1->alarm = VAR_1->design_capacity_warning;
 return FUNC_1(VAR_1);
}
