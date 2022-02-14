
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int * pointer; scalar_t__ length; } ;
struct TYPE_4__ {int pointer; } ;
union acpi_object {TYPE_3__ integer; TYPE_2__ buffer; int type; TYPE_1__ string; } ;
typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int * pointer; int length; int * member_1; int member_0; } ;
typedef int ssize_t ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char**) ;
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
 int FUNC_6 (char*,int ,char*,int,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int ,int ) ;
 int VAR_14 ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_15,
           struct device_attribute *VAR_16,
           char *VAR_17)
{
 char VAR_18[VAR_10 + 1];
 acpi_handle VAR_19;
 acpi_status VAR_20;
 struct acpi_object_list VAR_21;
 struct acpi_buffer VAR_22 = { &VAR_0, ((void*)0) };
 union acpi_object VAR_23[4];
 u32 VAR_24;
 char *VAR_25[] = {
  "None",
  "Shutdown",
  "Reboot",
  "OS Vendor-specific",
  "Error",
 };
 VAR_21.count = 4;
 FUNC_5(VAR_23, VAR_12);
 VAR_21.pointer = VAR_23;
 VAR_20 = FUNC_3(VAR_3, VAR_1,
         VAR_6, VAR_13,
         VAR_14, &VAR_19);
 if (FUNC_0(VAR_20))
  return -VAR_8;

 VAR_20 = FUNC_2(VAR_19, "_DSM", &VAR_21, &VAR_22,
         VAR_5);
 if (FUNC_0(VAR_20))
  return -VAR_7;
 FUNC_8(VAR_18,
  ((union acpi_object *)VAR_22.pointer)->string.pointer,
  VAR_10);





 if (FUNC_7(VAR_18, "1.2") == -1) {
  VAR_23[3].type = VAR_2;
  VAR_23[3].buffer.length = 0;
  VAR_23[3].buffer.pointer = ((void*)0);
 }
 VAR_23[2].integer.value = VAR_11;
 FUNC_4(VAR_22.pointer);
 VAR_22.length = VAR_0;
 VAR_22.pointer = ((void*)0);
 VAR_20 = FUNC_2(VAR_19, "_DSM", &VAR_21, &VAR_22,
         VAR_4);
 if (FUNC_0(VAR_20))
  return -VAR_7;
 VAR_24 = ((union acpi_object *)VAR_22.pointer)->integer.value;
 if (VAR_24 < FUNC_1(VAR_25) - 1)
  VAR_20 = FUNC_6(VAR_17, VAR_9, "%d: %s\n", VAR_24, VAR_25[VAR_24]);
 else
  VAR_20 = FUNC_6(VAR_17, VAR_9, "%d: %s\n", VAR_24,
       VAR_25[FUNC_1(VAR_25)-1]);
 FUNC_4(VAR_22.pointer);
 return VAR_20;
}
