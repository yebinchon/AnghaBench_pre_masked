
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct acpi_device {int dummy; } ;
struct TYPE_2__ {int count; int* levels; } ;


 int VAR_0 ;
 struct acpi_video_device* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_video_device*,int) ;

__attribute__((used)) static int
FUNC_2(struct thermal_cooling_device *VAR_1, unsigned long VAR_2)
{
 struct acpi_device *VAR_3 = VAR_1->devdata;
 struct acpi_video_device *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 if ( VAR_2 >= VAR_4->brightness->count - 2)
  return -VAR_0;

 VAR_2 = VAR_4->brightness->count - VAR_2;
 VAR_5 = VAR_4->brightness->levels[VAR_2 -1];
 return FUNC_1(VAR_4, VAR_5);
}
