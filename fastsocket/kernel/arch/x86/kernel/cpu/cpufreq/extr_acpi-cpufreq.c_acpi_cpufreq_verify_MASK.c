
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;
struct acpi_cpufreq_data {int freq_table; } ;


 int FUNC_0 (struct cpufreq_policy*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct acpi_cpufreq_data* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_1)
{
 struct acpi_cpufreq_data *VAR_2 = FUNC_2(VAR_0, VAR_1->cpu);

 FUNC_1("acpi_cpufreq_verify\n");

 return FUNC_0(VAR_1, VAR_2->freq_table);
}
