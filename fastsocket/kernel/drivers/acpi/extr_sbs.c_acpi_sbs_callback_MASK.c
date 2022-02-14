
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct acpi_sbs {scalar_t__ charger_present; int batteries_supported; struct acpi_battery* battery; scalar_t__ manager_present; TYPE_2__ charger; } ;
struct TYPE_8__ {TYPE_3__* dev; } ;
struct acpi_battery {scalar_t__ present; TYPE_4__ bat; int name; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_5__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct acpi_sbs*) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_6)
{
 int VAR_7;
 struct acpi_sbs *VAR_8 = VAR_6;
 struct acpi_battery *VAR_9;
 u8 VAR_10 = VAR_8->charger_present;
 u8 VAR_11;
 FUNC_0(VAR_8);
 if (VAR_8->charger_present != VAR_10) {
 }
 if (VAR_8->manager_present) {
  for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
   if (!(VAR_8->batteries_supported & (1 << VAR_7)))
    continue;
   VAR_9 = &VAR_8->battery[VAR_7];
   VAR_11 = VAR_9->present;
   FUNC_1(VAR_9);
   if (VAR_11 == VAR_9->present)
    continue;
  }
 }
}
