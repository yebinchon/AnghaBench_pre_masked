
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct seq_file {struct acpi_thermal* private; } ;
struct TYPE_19__ {int count; int * handles; } ;
struct TYPE_18__ {scalar_t__ valid; } ;
struct TYPE_20__ {TYPE_6__ devices; int tsp; int tc2; int tc1; int temperature; TYPE_5__ flags; } ;
struct TYPE_16__ {scalar_t__ valid; } ;
struct TYPE_17__ {int temperature; TYPE_3__ flags; } ;
struct TYPE_14__ {scalar_t__ valid; } ;
struct TYPE_15__ {int temperature; TYPE_1__ flags; } ;
struct TYPE_13__ {TYPE_10__* active; TYPE_7__ passive; TYPE_4__ hot; TYPE_2__ critical; } ;
struct acpi_thermal {TYPE_11__ trips; } ;
struct acpi_device {int dummy; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_22__ {int count; int * handles; } ;
struct TYPE_21__ {int valid; } ;
struct TYPE_12__ {TYPE_9__ devices; int temperature; TYPE_8__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct acpi_device**) ;
 char* FUNC_2 (struct acpi_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 struct acpi_thermal *VAR_4 = VAR_2->private;
 struct acpi_device *VAR_5;
 acpi_status VAR_6;

 int VAR_7 = 0;
 int VAR_8 = 0;


 if (!VAR_4)
  goto end;

 if (VAR_4->trips.critical.flags.valid)
  FUNC_3(VAR_2, "critical (S5):           %ld C%s",
      FUNC_0(VAR_4->trips.critical.temperature),
      VAR_1 ? " <disabled>\n" : "\n");

 if (VAR_4->trips.hot.flags.valid)
  FUNC_3(VAR_2, "hot (S4):                %ld C%s",
      FUNC_0(VAR_4->trips.hot.temperature),
      VAR_1 ? " <disabled>\n" : "\n");

 if (VAR_4->trips.passive.flags.valid) {
  FUNC_3(VAR_2,
      "passive:                 %ld C: tc1=%lu tc2=%lu tsp=%lu devices=",
      FUNC_0(VAR_4->trips.passive.temperature),
      VAR_4->trips.passive.tc1, VAR_4->trips.passive.tc2,
      VAR_4->trips.passive.tsp);
  for (VAR_8 = 0; VAR_8 < VAR_4->trips.passive.devices.count; VAR_8++) {
   VAR_6 = FUNC_1(VAR_4->trips.passive.devices.
           handles[VAR_8], &VAR_5);
   FUNC_3(VAR_2, "%4.4s ", VAR_6 ? "" :
       FUNC_2(VAR_5));
  }
  FUNC_4(VAR_2, "\n");
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!(VAR_4->trips.active[VAR_7].flags.valid))
   break;
  FUNC_3(VAR_2, "active[%d]:               %ld C: devices=",
      VAR_7,
      FUNC_0(VAR_4->trips.active[VAR_7].temperature));
  for (VAR_8 = 0; VAR_8 < VAR_4->trips.active[VAR_7].devices.count; VAR_8++){
   VAR_6 = FUNC_1(VAR_4->trips.active[VAR_7].
           devices.handles[VAR_8],
           &VAR_5);
   FUNC_3(VAR_2, "%4.4s ", VAR_6 ? "" :
       FUNC_2(VAR_5));
  }
  FUNC_4(VAR_2, "\n");
 }

      end:
 return 0;
}
