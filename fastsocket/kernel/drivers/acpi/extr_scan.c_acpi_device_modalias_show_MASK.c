
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct acpi_device*,char*,int) ;
 struct acpi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2) {
 struct acpi_device *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_2, 1024);
 if (VAR_4 <= 0)
  return 0;
 VAR_2[VAR_4++] = '\n';
 return VAR_4;
}
