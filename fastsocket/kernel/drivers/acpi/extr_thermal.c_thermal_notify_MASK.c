
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct acpi_thermal {TYPE_2__* device; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_3__ {int device_class; } ;
struct TYPE_4__ {int dev; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_5, int VAR_6,
      enum thermal_trip_type VAR_7)
{
 u8 VAR_8 = 0;
 struct acpi_thermal *VAR_9 = VAR_5->devdata;

 if (VAR_7 == VAR_2)
  VAR_8 = VAR_0;
 else if (VAR_7 == VAR_3)
  VAR_8 = VAR_1;
 else
  return 0;

 FUNC_1(VAR_9->device, VAR_8, 1);
 FUNC_0(VAR_9->device->pnp.device_class,
     FUNC_2(&VAR_9->device->dev), VAR_8, 1);

 if (VAR_7 == VAR_2 && VAR_4)
  return 1;

 return 0;
}
