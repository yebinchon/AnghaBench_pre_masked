
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct acpi_video_device {TYPE_1__* brightness; } ;
struct TYPE_2__ {int count; int* levels; } ;







 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct acpi_video_device *VAR_0,
     u32 VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 255;
 VAR_4 = VAR_6 = 0;
 VAR_3 = VAR_5 = 255;

 for (VAR_7 = 2; VAR_7 < VAR_0->brightness->count; VAR_7++) {
  VAR_8 = VAR_0->brightness->levels[VAR_7];
  if (FUNC_0(VAR_8 - VAR_1) < FUNC_0(VAR_9)) {
   VAR_9 = VAR_8 - VAR_1;
   if (!VAR_9)
    break;
  }
 }

 VAR_1 += VAR_9;
 for (VAR_7 = 2; VAR_7 < VAR_0->brightness->count; VAR_7++) {
  VAR_8 = VAR_0->brightness->levels[VAR_7];
  if (VAR_8 < VAR_3)
   VAR_3 = VAR_8;
  if (VAR_8 > VAR_4)
   VAR_4 = VAR_8;
  if (VAR_8 < VAR_5 && VAR_8 > VAR_1)
   VAR_5 = VAR_8;
  if (VAR_8 > VAR_6 && VAR_8 < VAR_1)
   VAR_6 = VAR_8;
 }

 switch (VAR_2) {
 case 132:
  return (VAR_1 < VAR_4) ? VAR_5 : VAR_3;
 case 129:
  return (VAR_1 < VAR_4) ? VAR_5 : VAR_4;
 case 131:
  return (VAR_1 > VAR_3) ? VAR_6 : VAR_3;
 case 128:
 case 130:
  return 0;
 default:
  return VAR_1;
 }
}
