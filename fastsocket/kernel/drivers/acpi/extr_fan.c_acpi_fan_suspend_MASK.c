
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct acpi_device *VAR_3, pm_message_t VAR_4)
{
 if (!VAR_3)
  return -VAR_2;

 FUNC_0(VAR_3->handle, VAR_0);

 return VAR_1;
}
