
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct acpi_processor_performance {int state_count; TYPE_1__* states; } ;
struct acpi_cpufreq_data {TYPE_2__* freq_table; struct acpi_processor_performance* acpi_data; } ;
struct TYPE_4__ {int frequency; } ;
struct TYPE_3__ {scalar_t__ status; } ;



__attribute__((used)) static unsigned FUNC_0(u32 VAR_0, struct acpi_cpufreq_data *VAR_1)
{
 struct acpi_processor_performance *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->acpi_data;

 for (VAR_3 = 0; VAR_3 < VAR_2->state_count; VAR_3++) {
  if (VAR_0 == VAR_2->states[VAR_3].status)
   return VAR_1->freq_table[VAR_3].frequency;
 }
 return 0;
}
