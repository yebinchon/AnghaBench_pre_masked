
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int device_class; } ;
struct acpi_device {int dev; TYPE_1__ pnp; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct acpi_battery {TYPE_3__ bat; } ;
struct TYPE_5__ {int kobj; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_battery*) ;
 int FUNC_1 (struct acpi_battery*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (struct acpi_device*,scalar_t__,int ) ;
 struct acpi_battery* FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct acpi_device *VAR_2, u32 VAR_3)
{
 struct acpi_battery *VAR_4 = FUNC_4(VAR_2);

 if (!VAR_4)
  return;
 FUNC_1(VAR_4, ((VAR_3 == VAR_0) ? 1
          : 0));
 FUNC_3(VAR_2, VAR_3,
         FUNC_0(VAR_4));
 FUNC_2(VAR_2->pnp.device_class,
     FUNC_5(&VAR_2->dev), VAR_3,
     FUNC_0(VAR_4));





}
