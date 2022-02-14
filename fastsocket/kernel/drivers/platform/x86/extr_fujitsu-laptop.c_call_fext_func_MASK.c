
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_buffer {int length; union acpi_object* pointer; } ;
typedef int out_obj ;
typedef int acpi_status ;
typedef int * acpi_handle ;
struct TYPE_4__ {int acpi_handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int ,char*,int **) ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 acpi_status VAR_11 = VAR_1;
 union acpi_object VAR_12[4] = {
 { .type = VAR_0 },
 { .type = VAR_0 },
 { .type = VAR_0 },
 { .type = VAR_0 }
 };
 struct acpi_object_list VAR_13 = { 4, &VAR_12[0] };
 struct acpi_buffer VAR_14;
 union acpi_object VAR_15;
 acpi_handle VAR_16 = ((void*)0);

 VAR_11 = FUNC_2(VAR_6->acpi_handle, "FUNC", &VAR_16);
 if (FUNC_0(VAR_11)) {
  FUNC_3(VAR_3,
    "FUNC interface is not present\n");
  return -VAR_2;
 }

 VAR_12[0].integer.value = VAR_7;
 VAR_12[1].integer.value = VAR_8;
 VAR_12[2].integer.value = VAR_9;
 VAR_12[3].integer.value = VAR_10;

 VAR_14.length = sizeof(VAR_15);
 VAR_14.pointer = &VAR_15;

 VAR_11 = FUNC_1(VAR_16, ((void*)0), &VAR_13, &VAR_14);
 if (FUNC_0(VAR_11)) {
  FUNC_3(VAR_5,
   "FUNC 0x%x (args 0x%x, 0x%x, 0x%x) call failed\n",
    VAR_7, VAR_8, VAR_9, VAR_10);
  return -VAR_2;
 }

 if (VAR_15.type != VAR_0) {
  FUNC_3(VAR_5,
   "FUNC 0x%x (args 0x%x, 0x%x, 0x%x) did not "
   "return an integer\n",
   VAR_7, VAR_8, VAR_9, VAR_10);
  return -VAR_2;
 }

 FUNC_3(VAR_4,
  "FUNC 0x%x (args 0x%x, 0x%x, 0x%x) returned 0x%x\n",
   VAR_7, VAR_8, VAR_9, VAR_10, (int)VAR_15.integer.value);
 return VAR_15.integer.value;
}
