
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_processor_tx_tss {scalar_t__ control; } ;
struct TYPE_2__ {int state_count; int * states_tss; } ;
struct acpi_processor {TYPE_1__ throttling; } ;
typedef scalar_t__ acpi_integer ;



__attribute__((used)) static int FUNC_0(struct acpi_processor *VAR_0,
    acpi_integer VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->throttling.state_count; VAR_2++) {
  struct acpi_processor_tx_tss *VAR_3 =
      (struct acpi_processor_tx_tss *)&(VAR_0->throttling.
            states_tss[VAR_2]);
  if (VAR_3->control == VAR_1)
   return VAR_2;
 }
 return -1;
}
