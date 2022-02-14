
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_power_meter_resource {unsigned long long avg_interval; TYPE_1__* acpi_dev; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(struct acpi_power_meter_resource *VAR_2)
{
 unsigned long long VAR_3;
 acpi_status VAR_4;

 VAR_4 = FUNC_2(VAR_2->acpi_dev->handle, "_GAI",
           ((void*)0), &VAR_3);
 if (FUNC_1(VAR_4)) {
  FUNC_0((VAR_0, VAR_4, "Evaluating _GAI"));
  return -VAR_1;
 }

 VAR_2->avg_interval = VAR_3;
 return 0;
}
