
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long state_count; TYPE_2__* states; } ;
struct cpufreq_acpi_io {TYPE_1__ acpi_data; } ;
struct TYPE_4__ {unsigned int status; int core_frequency; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned
FUNC_1 (
 struct cpufreq_acpi_io *VAR_0,
 unsigned VAR_1,
 unsigned int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0("extract_clock\n");

 for (VAR_3 = 0; VAR_3 < VAR_0->acpi_data.state_count; VAR_3++) {
  if (VAR_1 == VAR_0->acpi_data.states[VAR_3].status)
   return VAR_0->acpi_data.states[VAR_3].core_frequency;
 }
 return VAR_0->acpi_data.states[VAR_3-1].core_frequency;
}
