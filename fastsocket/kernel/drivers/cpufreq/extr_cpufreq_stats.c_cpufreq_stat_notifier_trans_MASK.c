
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct cpufreq_stats {int last_index; int max_state; int total_trans; int * trans_table; } ;
struct cpufreq_freqs {int cpu; int new; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_stats*,int ) ;
 struct cpufreq_stats* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3,
  unsigned long VAR_4, void *VAR_5)
{
 struct cpufreq_freqs *VAR_6 = VAR_5;
 struct cpufreq_stats *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4 != VAR_0)
  return 0;

 VAR_7 = FUNC_2(VAR_2, VAR_6->cpu);
 if (!VAR_7)
  return 0;

 VAR_8 = VAR_7->last_index;
 VAR_9 = FUNC_1(VAR_7, VAR_6->new);

 FUNC_0(VAR_6->cpu);
 if (VAR_8 == VAR_9)
  return 0;

 if (VAR_8 == -1 || VAR_9 == -1)
  return 0;

 FUNC_3(&VAR_1);
 VAR_7->last_index = VAR_9;



 VAR_7->total_trans++;
 FUNC_4(&VAR_1);
 return 0;
}
