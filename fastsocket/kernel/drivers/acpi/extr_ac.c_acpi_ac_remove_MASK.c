
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ dev; } ;
struct acpi_ac {TYPE_1__ charger; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*) ;
 struct acpi_ac* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_ac*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1, int VAR_2)
{
 struct acpi_ac *VAR_3 = ((void*)0);


 if (!VAR_1 || !FUNC_1(VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1);
 FUNC_2(VAR_3);

 return 0;
}
