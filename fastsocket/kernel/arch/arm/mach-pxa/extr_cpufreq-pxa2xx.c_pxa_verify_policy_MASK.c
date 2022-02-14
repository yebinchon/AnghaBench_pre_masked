
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int max; int min; } ;
struct cpufreq_frequency_table {int dummy; } ;
typedef int pxa_freqs_t ;


 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_frequency_table*) ;
 int FUNC_1 (struct cpufreq_frequency_table**,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_1)
{
 struct cpufreq_frequency_table *VAR_2;
 pxa_freqs_t *VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2, &VAR_3);
 VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (VAR_0)
  FUNC_2("Verified CPU policy: %dKhz min to %dKhz max\n",
    VAR_1->min, VAR_1->max);

 return VAR_4;
}
