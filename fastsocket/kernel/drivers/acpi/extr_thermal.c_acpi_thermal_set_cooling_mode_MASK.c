
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_thermal {TYPE_2__* device; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
typedef int acpi_status ;
typedef int * acpi_handle ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,struct acpi_object_list*,int *) ;
 int FUNC_3 (int ,char*,int **) ;

__attribute__((used)) static int FUNC_4(struct acpi_thermal *VAR_5, int VAR_6)
{
 acpi_status VAR_7 = VAR_2;
 union acpi_object VAR_8 = { VAR_1 };
 struct acpi_object_list VAR_9 = { 1, &VAR_8 };
 acpi_handle VAR_10 = ((void*)0);


 if (!VAR_5)
  return -VAR_3;

 VAR_7 = FUNC_3(VAR_5->device->handle, "_SCP", &VAR_10);
 if (FUNC_1(VAR_7)) {
  FUNC_0((VAR_0, "_SCP not present\n"));
  return -VAR_4;
 }

 VAR_8 = VAR_6;

 VAR_7 = FUNC_2(VAR_10, ((void*)0), &VAR_9, ((void*)0));
 if (FUNC_1(VAR_7))
  return -VAR_4;

 return 0;
}
