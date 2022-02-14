
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*,int *,unsigned long long*) ;
 int FUNC_1 (char*,char*,unsigned long long) ;
 struct acpi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2) {
 struct acpi_device *VAR_3 = FUNC_2(VAR_0);
 unsigned long long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->handle, "_SUN", ((void*)0), &VAR_4);
 if (VAR_5)
  goto end;

 VAR_5 = FUNC_1(VAR_2, "%llu\n", VAR_4);
end:
 return VAR_5;
}
