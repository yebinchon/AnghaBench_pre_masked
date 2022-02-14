
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct thermal_cooling_device {TYPE_1__ device; } ;
struct TYPE_4__ {int kobj; } ;
struct acpi_device {TYPE_2__ dev; struct thermal_cooling_device* driver_data; int handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct thermal_cooling_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct thermal_cooling_device*) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct thermal_cooling_device* FUNC_6 (char*,struct acpi_device*,int *) ;
 int FUNC_7 (struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_8(struct acpi_device *VAR_6)
{
 int VAR_7 = -VAR_2;
 acpi_status VAR_8 = VAR_0;
 acpi_handle VAR_9;
 struct thermal_cooling_device *VAR_10;

 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_6->handle, VAR_3, &VAR_9);
 if (FUNC_0(VAR_8))
  goto end;

 VAR_8 = FUNC_3(VAR_6->handle, VAR_4, &VAR_9);
 if (FUNC_0(VAR_8))
  goto end;

 VAR_10 = FUNC_6("Memory controller", VAR_6,
            &VAR_5);
 if (FUNC_1(VAR_10)) {
  VAR_7 = FUNC_2(VAR_10);
  goto end;
 }

 VAR_6->driver_data = VAR_10;
 VAR_7 = FUNC_4(&VAR_6->dev.kobj,
    &VAR_10->device.kobj, "thermal_cooling");
 if (VAR_7)
  goto unregister;

 VAR_7 = FUNC_4(&VAR_10->device.kobj,
    &VAR_6->dev.kobj, "device");
 if (VAR_7) {
  FUNC_5(&VAR_6->dev.kobj, "thermal_cooling");
  goto unregister;
 }

 end:
 return VAR_7;

 unregister:
 FUNC_7(VAR_10);
 return VAR_7;

}
