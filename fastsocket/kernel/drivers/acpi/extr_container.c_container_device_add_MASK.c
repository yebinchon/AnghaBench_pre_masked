
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct acpi_device**,struct acpi_device*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct acpi_device**) ;
 int FUNC_2 (struct acpi_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct acpi_device **VAR_2, acpi_handle VAR_3)
{
 acpi_handle VAR_4;
 struct acpi_device *VAR_5;
 int VAR_6;


 if (FUNC_3(VAR_3, &VAR_4)) {
  return -VAR_1;
 }

 if (FUNC_1(VAR_4, &VAR_5)) {
  return -VAR_1;
 }

 if (FUNC_0(VAR_2, VAR_5, VAR_3, VAR_0)) {
  return -VAR_1;
 }

 VAR_6 = FUNC_2(*VAR_2);

 return VAR_6;
}
