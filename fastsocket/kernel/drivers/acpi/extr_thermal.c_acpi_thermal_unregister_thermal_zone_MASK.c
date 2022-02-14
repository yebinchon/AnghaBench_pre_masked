
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_thermal {TYPE_3__* device; TYPE_4__* thermal_zone; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_8__ {TYPE_2__ device; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_7__ {int handle; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(struct acpi_thermal *VAR_1)
{
 FUNC_1(&VAR_1->device->dev.kobj, "thermal_zone");
 FUNC_1(&VAR_1->thermal_zone->device.kobj, "device");
 FUNC_2(VAR_1->thermal_zone);
 VAR_1->thermal_zone = ((void*)0);
 FUNC_0(VAR_1->device->handle, VAR_0);
}
