
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct acpi_processor_performance {TYPE_1__* states; } ;
struct acpi_cpufreq_data {TYPE_2__* freq_table; struct acpi_processor_performance* acpi_data; } ;
struct TYPE_4__ {scalar_t__ frequency; size_t index; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned FUNC_0(u32 VAR_2, struct acpi_cpufreq_data *VAR_3)
{
 int VAR_4;
 struct acpi_processor_performance *VAR_5;

 VAR_2 &= VAR_1;
 VAR_5 = VAR_3->acpi_data;

 for (VAR_4 = 0; VAR_3->freq_table[VAR_4].frequency != VAR_0; VAR_4++) {
  if (VAR_2 == VAR_5->states[VAR_3->freq_table[VAR_4].index].status)
   return VAR_3->freq_table[VAR_4].frequency;
 }
 return VAR_3->freq_table[0].frequency;
}
