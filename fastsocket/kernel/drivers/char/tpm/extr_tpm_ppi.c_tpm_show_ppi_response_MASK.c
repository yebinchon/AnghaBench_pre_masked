
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int ssize_t ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (union acpi_object*,int ) ;
 int VAR_12 ;
 int FUNC_5 (char*,int ,char*,int,...) ;
 int VAR_13 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_14,
         struct device_attribute *VAR_15,
         char *VAR_16)
{
 acpi_handle VAR_17;
 acpi_status VAR_18;
 struct acpi_object_list VAR_19;
 struct acpi_buffer VAR_20 = { VAR_0, ((void*)0) };
 union acpi_object VAR_21[4];
 union acpi_object *VAR_22;
 u64 VAR_23;

 VAR_19.count = 4;
 FUNC_4(VAR_21, VAR_11);
 VAR_19.pointer = VAR_21;
 VAR_18 = FUNC_2(VAR_2, VAR_1,
         VAR_5, VAR_12,
         VAR_13, &VAR_17);
 if (FUNC_0(VAR_18))
  return -VAR_9;

 VAR_18 = FUNC_1(VAR_17, "_DSM", &VAR_19, &VAR_20,
         VAR_4);
 if (FUNC_0(VAR_18))
  return -VAR_8;







 VAR_22 = ((union acpi_object *)VAR_20.pointer)->package.elements;
 if (VAR_22->type != VAR_3) {
  VAR_18 = -VAR_7;
  goto cleanup;
 }
 if (VAR_22->integer.value) {
  VAR_18 = -VAR_6;
  goto cleanup;
 }
 VAR_22++;
 if (VAR_22->type != VAR_3) {
  VAR_18 = -VAR_7;
  goto cleanup;
 }
 if (VAR_22->integer.value) {
  VAR_23 = VAR_22->integer.value;
  VAR_22++;
  if (VAR_22->type != VAR_3) {
   VAR_18 = -VAR_7;
   goto cleanup;
  }
  if (VAR_22->integer.value == 0)
   VAR_18 = FUNC_5(VAR_16, VAR_10, "%llu %s\n", VAR_23,
        "0: Success");
  else if (VAR_22->integer.value == 0xFFFFFFF0)
   VAR_18 = FUNC_5(VAR_16, VAR_10, "%llu %s\n", VAR_23,
        "0xFFFFFFF0: User Abort");
  else if (VAR_22->integer.value == 0xFFFFFFF1)
   VAR_18 = FUNC_5(VAR_16, VAR_10, "%llu %s\n", VAR_23,
        "0xFFFFFFF1: BIOS Failure");
  else if (VAR_22->integer.value >= 1 &&
    VAR_22->integer.value <= 0x00000FFF)
   VAR_18 = FUNC_5(VAR_16, VAR_10, "%llu %llu: %s\n",
        VAR_23, VAR_22->integer.value,
        "Corresponding TPM error");
  else
   VAR_18 = FUNC_5(VAR_16, VAR_10, "%llu %llu: %s\n",
        VAR_23, VAR_22->integer.value,
        "Error");
 } else {
  VAR_18 = FUNC_5(VAR_16, VAR_10, "%llu: %s\n",
       VAR_22->integer.value, "No Recent Request");
 }
cleanup:
 FUNC_3(VAR_20.pointer);
 return VAR_18;
}
