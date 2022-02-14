
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_memory_device {int dummy; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_memory_device* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_memory_device*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1, int VAR_2)
{
 struct acpi_memory_device *VAR_3 = ((void*)0);


 if (!VAR_1 || !FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_1(VAR_3);

 return 0;
}
