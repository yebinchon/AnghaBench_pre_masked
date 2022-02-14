
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int count; union acpi_object* elements; } ;
struct TYPE_4__ {int pointer; } ;
union acpi_object {TYPE_3__ integer; TYPE_2__ package; int type; TYPE_1__ string; } ;
typedef int u32 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {void* member_0; int * pointer; void* length; int * member_1; } ;
typedef int ssize_t ;
typedef int acpi_status ;
typedef int acpi_handle ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char**) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,char*,struct acpi_object_list*,struct acpi_buffer*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (union acpi_object*,int ) ;
 int VAR_13 ;
 int FUNC_6 (char*,int ,char*,int,int,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int ,int) ;
 int VAR_14 ;

__attribute__((used)) static ssize_t FUNC_9(char *VAR_15, u32 VAR_16, u32 VAR_17)
{
 char *VAR_18 = VAR_15;
 char VAR_19[VAR_10];
 acpi_handle VAR_20;
 acpi_status VAR_21;
 struct acpi_object_list VAR_22;
 struct acpi_buffer VAR_23 = { VAR_0, ((void*)0) };
 union acpi_object VAR_24[4];
 union acpi_object VAR_25;
 int VAR_26;
 u32 VAR_27;
 char *VAR_28[] = {
  "Not implemented",
  "BIOS only",
  "Blocked for OS by BIOS",
  "User required",
  "User not required",
 };
 VAR_22.count = 4;
 FUNC_5(VAR_24, VAR_12);
 VAR_22.pointer = VAR_24;
 VAR_21 = FUNC_3(VAR_2, VAR_1,
         VAR_5, VAR_13,
         VAR_14, &VAR_20);
 if (FUNC_0(VAR_21))
  return -VAR_7;

 VAR_21 = FUNC_2(VAR_20, "_DSM", &VAR_22, &VAR_23,
      VAR_4);
 if (FUNC_0(VAR_21))
  return -VAR_6;

 FUNC_8(VAR_19,
  ((union acpi_object *)VAR_23.pointer)->string.pointer,
  VAR_10);
 FUNC_4(VAR_23.pointer);
 VAR_23.length = VAR_0;
 VAR_23.pointer = ((void*)0);
 if (FUNC_7(VAR_19, "1.2") == -1)
  return -VAR_8;

 VAR_24[2].integer.value = VAR_11;
 VAR_24[3].package.count = 1;
 VAR_25.type = VAR_3;
 VAR_24[3].package.elements = &VAR_25;
 for (VAR_26 = VAR_16; VAR_26 <= VAR_17; VAR_26++) {
  VAR_25.integer.value = VAR_26;
  VAR_21 = FUNC_2(VAR_20, "_DSM",
    &VAR_22, &VAR_23, VAR_3);
  if (FUNC_0(VAR_21))
   return -VAR_6;

  VAR_27 = ((union acpi_object *)VAR_23.pointer)->integer.value;
  if (VAR_27 > 0 && VAR_27 < FUNC_1(VAR_28))
   VAR_18 += FUNC_6(VAR_18, VAR_9, "%d %d: %s\n",
      VAR_26, VAR_27, VAR_28[VAR_27]);
  FUNC_4(VAR_23.pointer);
  VAR_23.length = VAR_0;
  VAR_23.pointer = ((void*)0);
 }
 return VAR_18 - VAR_15;
}
