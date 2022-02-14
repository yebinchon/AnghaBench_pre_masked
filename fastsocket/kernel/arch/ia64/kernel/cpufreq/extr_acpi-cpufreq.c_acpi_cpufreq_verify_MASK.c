
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {size_t cpu; } ;
struct cpufreq_acpi_io {int freq_table; } ;


 struct cpufreq_acpi_io** VAR_0 ;
 unsigned int FUNC_0 (struct cpufreq_policy*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2 (
 struct cpufreq_policy *VAR_1)
{
 unsigned int VAR_2 = 0;
 struct cpufreq_acpi_io *VAR_3 = VAR_0[VAR_1->cpu];

 FUNC_1("acpi_cpufreq_verify\n");

 VAR_2 = FUNC_0(VAR_1,
   VAR_3->freq_table);

 return (VAR_2);
}
