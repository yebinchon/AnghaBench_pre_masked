
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct thermal_cooling_device {TYPE_2__ device; } ;
struct TYPE_3__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct thermal_cooling_device* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1, int VAR_2)
{
 struct thermal_cooling_device *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_1 || !VAR_3)
  return -VAR_0;

 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->dev.kobj, "thermal_cooling");
 FUNC_2(&VAR_3->device.kobj, "device");
 FUNC_3(VAR_3);

 return 0;
}
