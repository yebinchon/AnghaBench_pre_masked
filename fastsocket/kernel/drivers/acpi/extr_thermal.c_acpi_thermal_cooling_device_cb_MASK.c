
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct TYPE_15__ {int count; int * handles; } ;
struct TYPE_21__ {int count; int * handles; } ;
struct TYPE_20__ {scalar_t__ valid; } ;
struct TYPE_22__ {TYPE_6__ devices; TYPE_5__ flags; } ;
struct TYPE_18__ {scalar_t__ valid; } ;
struct TYPE_19__ {TYPE_3__ flags; } ;
struct TYPE_16__ {scalar_t__ valid; } ;
struct TYPE_17__ {TYPE_1__ flags; } ;
struct TYPE_14__ {TYPE_10__* active; TYPE_7__ passive; TYPE_4__ hot; TYPE_2__ critical; } ;
struct acpi_thermal {TYPE_12__ devices; TYPE_11__ trips; } ;
struct acpi_device {int dummy; } ;
typedef int (* cb ) (struct thermal_zone_device*,int,struct thermal_cooling_device*) ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_24__ {int count; int * handles; } ;
struct TYPE_23__ {int valid; } ;
struct TYPE_13__ {TYPE_9__ devices; TYPE_8__ flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct acpi_device**) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_1,
     struct thermal_cooling_device *VAR_2,
     cb VAR_3)
{
 struct acpi_device *VAR_4 = VAR_2->devdata;
 struct acpi_thermal *VAR_5 = VAR_1->devdata;
 struct acpi_device *VAR_6;
 acpi_status VAR_7;
 acpi_handle VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = -1;
 int VAR_12 = 0;

 if (VAR_5->trips.critical.flags.valid)
  VAR_11++;

 if (VAR_5->trips.hot.flags.valid)
  VAR_11++;

 if (VAR_5->trips.passive.flags.valid) {
  VAR_11++;
  for (VAR_9 = 0; VAR_9 < VAR_5->trips.passive.devices.count;
      VAR_9++) {
   VAR_8 = VAR_5->trips.passive.devices.handles[VAR_9];
   VAR_7 = FUNC_1(VAR_8, &VAR_6);
   if (FUNC_0(VAR_7) && (VAR_6 == VAR_4)) {
    VAR_12 = VAR_3(VAR_1, VAR_11, VAR_2);
    if (VAR_12)
     goto failed;
   }
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!VAR_5->trips.active[VAR_9].flags.valid)
   break;
  VAR_11++;
  for (VAR_10 = 0;
      VAR_10 < VAR_5->trips.active[VAR_9].devices.count;
      VAR_10++) {
   VAR_8 = VAR_5->trips.active[VAR_9].devices.handles[VAR_10];
   VAR_7 = FUNC_1(VAR_8, &VAR_6);
   if (FUNC_0(VAR_7) && (VAR_6 == VAR_4)) {
    VAR_12 = VAR_3(VAR_1, VAR_11, VAR_2);
    if (VAR_12)
     goto failed;
   }
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_5->devices.count; VAR_9++) {
  VAR_8 = VAR_5->devices.handles[VAR_9];
  VAR_7 = FUNC_1(VAR_8, &VAR_6);
  if (FUNC_0(VAR_7) && (VAR_6 == VAR_4)) {
   VAR_12 = VAR_3(VAR_1, -1, VAR_2);
   if (VAR_12)
    goto failed;
  }
 }

failed:
 return VAR_12;
}
