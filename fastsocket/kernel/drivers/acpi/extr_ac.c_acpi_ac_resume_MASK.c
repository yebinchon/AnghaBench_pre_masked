
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct acpi_ac {unsigned int state; TYPE_2__ charger; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct acpi_ac*) ;
 struct acpi_ac* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_2)
{
 struct acpi_ac *VAR_3;
 unsigned VAR_4;
 if (!VAR_2 || !FUNC_1(VAR_2))
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = VAR_3->state;
 if (FUNC_0(VAR_3))
  return 0;




 return 0;
}
