
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct get_freqs {int ret; struct cpufreq_policy* policy; } ;
struct cpufreq_policy {unsigned int cur; int cpu; int cpus; } ;
struct TYPE_4__ {unsigned int frequency; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 int VAR_3 ;
 int FUNC_6 (unsigned int,int ,struct get_freqs*,int) ;
 TYPE_1__* VAR_4 ;
 unsigned int FUNC_7 (unsigned int) ;

__attribute__((used)) static int FUNC_8(struct cpufreq_policy *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7, VAR_8;
 struct get_freqs VAR_9;





 VAR_7 = FUNC_3(VAR_5->cpus, VAR_2);


 VAR_9.policy = VAR_5;
 FUNC_6(VAR_7, VAR_3, &VAR_9, 1);
 if (VAR_9.ret)
  return VAR_9.ret;


 VAR_8 = FUNC_7(VAR_7);
 if (!VAR_8)
  return -VAR_0;

 FUNC_5("currently at %s speed setting - %i MHz\n",
  (VAR_8 == VAR_4[VAR_1].frequency)
  ? "low" : "high",
  (VAR_8 / 1000));


 VAR_5->cur = VAR_8;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_4, VAR_5->cpu);

 return 0;
}
