
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int handle; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ platform_data; } ;
struct acpi_device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct acpi_device**) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct acpi_device *VAR_4;

 struct dock_station *VAR_5 = *((struct dock_station **)
  VAR_1->platform_data);

 if (FUNC_0(FUNC_1(VAR_5->handle, &VAR_4)))
  return FUNC_2(VAR_3, VAR_0, "1\n");
 return FUNC_2(VAR_3, VAR_0, "0\n");
}
