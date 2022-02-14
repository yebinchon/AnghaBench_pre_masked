
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_7__ {int count; union acpi_object* elements; } ;
struct TYPE_6__ {int length; char* pointer; } ;
struct TYPE_5__ {int pointer; } ;
union acpi_object {TYPE_4__ integer; TYPE_3__ package; int type; TYPE_2__ buffer; TYPE_1__ string; } ;
typedef int u64 ;
typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int * pointer; int length; int * member_1; int member_0; } ;
typedef int ssize_t ;
typedef int req ;
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (union acpi_object*,int ) ;
 int VAR_15 ;
 int FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_17,
         struct device_attribute *VAR_18,
         const char *VAR_19, size_t VAR_20)
{
 char VAR_21[VAR_11 + 1];
 acpi_handle VAR_22;
 acpi_status VAR_23;
 struct acpi_object_list VAR_24;
 struct acpi_buffer VAR_25 = { &VAR_0, ((void*)0) };
 union acpi_object VAR_26[4];
 union acpi_object VAR_27;
 u32 VAR_28;
 u64 VAR_29;

 VAR_24.count = 4;
 FUNC_4(VAR_26, VAR_14);
 VAR_24.pointer = VAR_26;
 VAR_23 = FUNC_2(VAR_3, VAR_1,
         VAR_6, VAR_15,
         VAR_16, &VAR_22);
 if (FUNC_0(VAR_23))
  return -VAR_9;

 VAR_23 = FUNC_1(VAR_22, "_DSM", &VAR_24, &VAR_25,
         VAR_5);
 if (FUNC_0(VAR_23))
  return -VAR_8;
 FUNC_7(VAR_21,
  ((union acpi_object *)VAR_25.pointer)->string.pointer,
  VAR_11);
 FUNC_3(VAR_25.pointer);
 VAR_25.length = VAR_0;
 VAR_25.pointer = ((void*)0);





 if (FUNC_6(VAR_21, "1.1") == -1)
  VAR_26[2].integer.value = VAR_12;
 else
  VAR_26[2].integer.value = VAR_13;






 if (FUNC_6(VAR_21, "1.2") == -1) {
  VAR_26[3].type = VAR_2;
  VAR_26[3].buffer.length = sizeof(VAR_28);
  FUNC_5(VAR_19, "%d", &VAR_28);
  VAR_26[3].buffer.pointer = (char *)&VAR_28;
 } else {
  VAR_26[3].package.count = 1;
  VAR_27.type = VAR_4;
  FUNC_5(VAR_19, "%llu", &VAR_27.integer.value);
  VAR_26[3].package.elements = &VAR_27;
 }

 VAR_23 = FUNC_1(VAR_22, "_DSM", &VAR_24, &VAR_25,
         VAR_4);
 if (FUNC_0(VAR_23))
  return -VAR_8;
 VAR_29 = ((union acpi_object *)VAR_25.pointer)->integer.value;
 if (VAR_29 == 0)
  VAR_23 = (acpi_status)VAR_20;
 else if (VAR_29 == 1)
  VAR_23 = -VAR_10;
 else
  VAR_23 = -VAR_7;
 FUNC_3(VAR_25.pointer);
 return VAR_23;
}
