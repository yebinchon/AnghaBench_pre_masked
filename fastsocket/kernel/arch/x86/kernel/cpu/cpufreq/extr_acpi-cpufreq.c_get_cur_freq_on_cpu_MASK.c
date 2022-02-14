
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_cpufreq_data {int resume; TYPE_1__* acpi_data; TYPE_2__* freq_table; } ;
struct TYPE_4__ {unsigned int frequency; } ;
struct TYPE_3__ {size_t state; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_2 (int ,struct acpi_cpufreq_data*) ;
 int FUNC_3 (int ) ;
 struct acpi_cpufreq_data* FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static unsigned int FUNC_6(unsigned int VAR_1)
{
 struct acpi_cpufreq_data *VAR_2 = FUNC_4(VAR_0, VAR_1);
 unsigned int VAR_3;
 unsigned int VAR_4;

 FUNC_1("get_cur_freq_on_cpu (%d)\n", VAR_1);

 if (FUNC_5(VAR_2 == ((void*)0) ||
       VAR_2->acpi_data == ((void*)0) || VAR_2->freq_table == ((void*)0))) {
  return 0;
 }

 VAR_4 = VAR_2->freq_table[VAR_2->acpi_data->state].frequency;
 VAR_3 = FUNC_2(FUNC_3(FUNC_0(VAR_1)), VAR_2);
 if (VAR_3 != VAR_4) {




  VAR_2->resume = 1;
 }

 FUNC_1("cur freq = %u\n", VAR_3);

 return VAR_3;
}
