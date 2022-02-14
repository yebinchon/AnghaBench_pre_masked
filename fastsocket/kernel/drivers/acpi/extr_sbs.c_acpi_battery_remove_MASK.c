
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_sbs {struct acpi_battery* battery; } ;
struct TYPE_2__ {scalar_t__ dev; } ;
struct acpi_battery {scalar_t__ proc_entry; TYPE_1__ bat; scalar_t__ have_sysfs_alarm; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct acpi_sbs *VAR_2, int VAR_3)
{
 struct acpi_battery *VAR_4 = &VAR_2->battery[VAR_3];
}
