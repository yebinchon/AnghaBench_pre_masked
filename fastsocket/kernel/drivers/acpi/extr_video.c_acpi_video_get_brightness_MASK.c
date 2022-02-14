
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct backlight_device {int dummy; } ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct TYPE_2__ {int count; unsigned long long* levels; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct acpi_video_device*,unsigned long long*) ;
 scalar_t__ FUNC_1 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 unsigned long long VAR_2;
 int VAR_3;
 struct acpi_video_device *VAR_4 =
  (struct acpi_video_device *)FUNC_1(VAR_1);

 if (FUNC_0(VAR_4, &VAR_2))
  return -VAR_0;
 for (VAR_3 = 2; VAR_3 < VAR_4->brightness->count; VAR_3++) {
  if (VAR_4->brightness->levels[VAR_3] == VAR_2)


   return VAR_3-2;
 }
 return 0;
}
