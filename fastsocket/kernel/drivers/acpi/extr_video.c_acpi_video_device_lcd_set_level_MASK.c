
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_video_device {TYPE_5__* backlight; TYPE_3__* brightness; TYPE_2__* dev; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct TYPE_9__ {int brightness; } ;
struct TYPE_10__ {TYPE_4__ props; } ;
struct TYPE_8__ {int curr; int count; int* levels; } ;
struct TYPE_7__ {int handle; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static int
FUNC_3(struct acpi_video_device *VAR_4, int VAR_5)
{
 int VAR_6;
 union acpi_object VAR_7 = { VAR_0 };
 struct acpi_object_list VAR_8 = { 1, &VAR_7 };
 int VAR_9;

 VAR_7 = VAR_5;

 VAR_6 = FUNC_2(VAR_4->dev->handle, "_BCM",
          &VAR_8, ((void*)0));
 if (FUNC_1(VAR_6)) {
  FUNC_0((VAR_1, "Evaluating _BCM failed"));
  return -VAR_3;
 }

 VAR_4->brightness->curr = VAR_5;
 for (VAR_9 = 2; VAR_9 < VAR_4->brightness->count; VAR_9++)
  if (VAR_5 == VAR_4->brightness->levels[VAR_9]) {
   if (VAR_4->backlight)
    VAR_4->backlight->props.brightness = VAR_9 - 2;
   return 0;
  }

 FUNC_0((VAR_1, "Current brightness invalid"));
 return -VAR_2;
}
