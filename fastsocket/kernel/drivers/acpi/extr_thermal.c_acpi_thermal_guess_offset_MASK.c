
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ valid; } ;
struct TYPE_5__ {int temperature; TYPE_1__ flags; } ;
struct TYPE_6__ {TYPE_2__ critical; } ;
struct acpi_thermal {int kelvin_offset; TYPE_3__ trips; } ;



__attribute__((used)) static void FUNC_0(struct acpi_thermal *VAR_0)
{
 if (VAR_0->trips.critical.flags.valid &&
     (VAR_0->trips.critical.temperature % 5) == 1)
  VAR_0->kelvin_offset = 2731;
 else
  VAR_0->kelvin_offset = 2732;
}
