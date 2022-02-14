
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_thermal {int polling_frequency; TYPE_1__* thermal_zone; scalar_t__ tz_enabled; } ;
struct TYPE_2__ {int polling_delay; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct acpi_thermal *VAR_2, int VAR_3)
{

 if (!VAR_2)
  return -VAR_1;

 VAR_2->polling_frequency = VAR_3 * 10;

 VAR_2->thermal_zone->polling_delay = VAR_3 * 1000;

 if (VAR_2->tz_enabled)
  FUNC_1(VAR_2->thermal_zone);

 FUNC_0((VAR_0,
     "Polling frequency set to %lu seconds\n",
     VAR_2->polling_frequency/10));

 return 0;
}
