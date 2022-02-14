
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct notifier_block {int dummy; } ;
struct cpufreq_policy {int cpu; } ;
struct cpufreq_frequency_table {int frequency; } ;


 unsigned long VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct cpufreq_frequency_table* FUNC_1 (int ) ;
 int FUNC_2 (struct cpufreq_policy*,int ,int ) ;
 size_t* VAR_1 ;
 int FUNC_3 (char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
           unsigned long VAR_3, void *VAR_4)
{
 struct cpufreq_policy *VAR_5 = VAR_4;
 struct cpufreq_frequency_table *VAR_6;
 u8 VAR_7;




 if (VAR_3 == VAR_0)
  return 0;

 VAR_6 = FUNC_1(VAR_5->cpu);
 VAR_7 = FUNC_0(VAR_5->cpu);

 FUNC_3("got notified, event=%lu, node=%u\n", VAR_3, VAR_7);

 if (VAR_1[VAR_7] != 0) {
  FUNC_3("limiting node %d to slow mode %d\n",
    VAR_7, VAR_1[VAR_7]);

  FUNC_2(VAR_5, 0,

   VAR_6[VAR_1[VAR_7]].frequency);
 }

 return 0;
}
