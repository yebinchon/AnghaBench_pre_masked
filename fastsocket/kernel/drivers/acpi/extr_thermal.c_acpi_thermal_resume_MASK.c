
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* active; } ;
struct TYPE_7__ {int active; } ;
struct acpi_thermal {TYPE_5__ trips; TYPE_2__ state; } ;
struct acpi_device {int dummy; } ;
struct TYPE_8__ {int enabled; int valid; } ;
struct TYPE_6__ {int count; int * handles; } ;
struct TYPE_9__ {TYPE_3__ flags; TYPE_1__ devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;
 struct acpi_thermal* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_thermal*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_4)
{
 struct acpi_thermal *VAR_5 = ((void*)0);
 int VAR_6, VAR_7, VAR_8, VAR_9;


 if (!VAR_4 || !FUNC_1(VAR_4))
  return -VAR_3;

 VAR_5 = FUNC_1(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (!(&VAR_5->trips.active[VAR_6]))
   break;
  if (!VAR_5->trips.active[VAR_6].flags.valid)
   break;
  VAR_5->trips.active[VAR_6].flags.enabled = 1;
  for (VAR_7 = 0; VAR_7 < VAR_5->trips.active[VAR_6].devices.count; VAR_7++) {
   VAR_9 = FUNC_0(VAR_5->trips.active[VAR_6].devices.
       handles[VAR_7], &VAR_8);
   if (VAR_9 || (VAR_8 != VAR_0)) {
    VAR_5->trips.active[VAR_6].flags.enabled = 0;
    break;
   }
  }
  VAR_5->state.active |= VAR_5->trips.active[VAR_6].flags.enabled;
 }

 FUNC_2(VAR_5);

 return VAR_2;
}
