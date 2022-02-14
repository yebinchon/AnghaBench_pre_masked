
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct acpi_video_device {TYPE_2__* brightness; } ;
struct TYPE_4__ {int * levels; } ;


 int FUNC_0 (struct acpi_video_device*,int ) ;
 scalar_t__ FUNC_1 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0)
{
 int VAR_1 = VAR_0->props.brightness + 2;
 struct acpi_video_device *VAR_2 =
  (struct acpi_video_device *)FUNC_1(VAR_0);

 return FUNC_0(VAR_2,
    VAR_2->brightness->levels[VAR_1]);
}
