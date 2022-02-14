
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {int cpu; int cur; } ;
struct cpufreq_freqs {int cpu; int new; int old; } ;
struct TYPE_3__ {int index; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpufreq_policy*,TYPE_1__*,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_1 (struct cpufreq_freqs*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct cpufreq_policy *VAR_4,
         unsigned int VAR_5,
         unsigned int VAR_6)
{
 int VAR_7;
 struct cpufreq_freqs VAR_8;
 unsigned int VAR_9;

 FUNC_0(VAR_4,
           VAR_2,
           VAR_5,
           VAR_6,
           &VAR_9);

 VAR_8.old = VAR_4->cur;
 VAR_8.new = VAR_2[VAR_9].frequency;
 VAR_8.cpu = VAR_4->cpu;

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_8, VAR_1);

 FUNC_4("setting frequency for cpu %d to %d kHz, " "1/%d of max frequency\n",

   VAR_4->cpu,
   VAR_2[VAR_9].frequency,
   VAR_2[VAR_9].index);

 VAR_7 = FUNC_5(VAR_4->cpu, VAR_9);

 FUNC_1(&VAR_8, VAR_0);
 FUNC_3(&VAR_3);

 return VAR_7;
}
