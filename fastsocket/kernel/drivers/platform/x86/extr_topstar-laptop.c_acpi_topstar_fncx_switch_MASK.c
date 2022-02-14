
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_2, bool VAR_3)
{
 acpi_status VAR_4;
 union acpi_object VAR_5[1] = {
  { .type = VAR_0 }
 };
 struct acpi_object_list VAR_6 = { 1, &VAR_5[0] };

 VAR_5[0].integer.value = VAR_3 ? 0x86 : 0x87;
 VAR_4 = FUNC_1(VAR_2->handle, "FNCX", &VAR_6, ((void*)0));
 if (FUNC_0(VAR_4)) {
  FUNC_2("Unable to switch FNCX notifications\n");
  return -VAR_1;
 }

 return 0;
}
