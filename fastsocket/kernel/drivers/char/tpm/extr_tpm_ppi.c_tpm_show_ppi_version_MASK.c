
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pointer; } ;
union acpi_object {TYPE_1__ string; } ;
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (union acpi_object*,int ) ;
 int VAR_9 ;
 int FUNC_5 (char*,int ,char*,int ) ;
 int VAR_10 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_11,
        struct device_attribute *VAR_12, char *VAR_13)
{
 acpi_handle VAR_14;
 acpi_status VAR_15;
 struct acpi_object_list VAR_16;
 struct acpi_buffer VAR_17 = { VAR_0, ((void*)0) };
 union acpi_object VAR_18[4];
 union acpi_object *VAR_19;

 VAR_16.count = 4;
 FUNC_4(VAR_18, VAR_8);
 VAR_16.pointer = VAR_18;
 VAR_15 = FUNC_2(VAR_2, VAR_1,
         VAR_4, VAR_9,
         VAR_10, &VAR_14);
 if (FUNC_0(VAR_15))
  return -VAR_6;

 VAR_15 = FUNC_1(VAR_14, "_DSM", &VAR_16, &VAR_17,
      VAR_3);
 if (FUNC_0(VAR_15))
  return -VAR_5;
 VAR_19 = (union acpi_object *)VAR_17.pointer;
 VAR_15 = FUNC_5(VAR_13, VAR_7, "%s\n", VAR_19->string.pointer);
 FUNC_3(VAR_17.pointer);
 return VAR_15;
}
