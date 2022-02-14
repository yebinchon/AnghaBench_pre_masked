
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct acpi_buffer*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,char*) ;
 struct acpi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4) {
 struct acpi_device *VAR_5 = FUNC_3(VAR_2);
 struct acpi_buffer VAR_6 = {VAR_0, ((void*)0)};
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->handle, VAR_1, &VAR_6);
 if (VAR_7)
  goto end;

 VAR_7 = FUNC_2(VAR_4, "%s\n", (char*)VAR_6.pointer);
 FUNC_1(VAR_6.pointer);
end:
 return VAR_7;
}
