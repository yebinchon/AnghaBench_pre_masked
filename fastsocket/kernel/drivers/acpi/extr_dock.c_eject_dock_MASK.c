
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct dock_station {int handle; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,int *) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct dock_station *VAR_1)
{
 struct acpi_object_list VAR_2;
 union acpi_object VAR_3;
 acpi_status VAR_4;
 acpi_handle VAR_5;


 VAR_4 = FUNC_2(VAR_1->handle, "_EJ0", &VAR_5);
 if (FUNC_0(VAR_4)) {
  FUNC_3("No _EJ0 support for dock device\n");
  return;
 }

 VAR_2.count = 1;
 VAR_2.pointer = &VAR_3;
 VAR_3.type = VAR_0;
 VAR_3.integer.value = 1;

 if (FUNC_0(FUNC_1(VAR_1->handle, "_EJ0",
           &VAR_2, ((void*)0))))
  FUNC_3("Failed to evaluate _EJ0!\n");
}
