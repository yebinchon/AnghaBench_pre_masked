
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct acpi_video_device {int output_dev; TYPE_4__* cooling_dev; TYPE_6__* dev; TYPE_5__* backlight; struct acpi_video_bus* video; } ;
struct acpi_video_bus {int dummy; } ;
typedef int acpi_status ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_12__ {TYPE_2__ dev; int handle; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_11__ {TYPE_1__ dev; } ;
struct TYPE_9__ {int kobj; } ;
struct TYPE_10__ {TYPE_3__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct acpi_video_device *VAR_3)
{
 acpi_status VAR_4;
 struct acpi_video_bus *VAR_5;


 if (!VAR_3 || !VAR_3->video)
  return -VAR_1;

 VAR_5 = VAR_3->video;

 FUNC_1(VAR_3->dev);

 VAR_4 = FUNC_0(VAR_3->dev->handle,
         VAR_0,
         VAR_2);
 if (VAR_3->backlight) {
  FUNC_3(&VAR_3->backlight->dev.kobj, "device");
  FUNC_2(VAR_3->backlight);
  VAR_3->backlight = ((void*)0);
 }
 if (VAR_3->cooling_dev) {
  FUNC_3(&VAR_3->dev->dev.kobj,
      "thermal_cooling");
  FUNC_3(&VAR_3->cooling_dev->device.kobj,
      "device");
  FUNC_4(VAR_3->cooling_dev);
  VAR_3->cooling_dev = ((void*)0);
 }
 FUNC_5(VAR_3->output_dev);

 return 0;
}
