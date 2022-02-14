
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {int count; } ;


 struct acpi_video_device* FUNC_0 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_1(struct thermal_cooling_device *VAR_0, unsigned
          long *VAR_1)
{
 struct acpi_device *VAR_2 = VAR_0->devdata;
 struct acpi_video_device *VAR_3 = FUNC_0(VAR_2);

 *VAR_1 = VAR_3->brightness->count - 3;
 return 0;
}
