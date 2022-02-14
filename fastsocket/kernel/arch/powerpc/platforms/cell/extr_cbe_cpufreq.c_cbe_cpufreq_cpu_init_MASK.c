
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int transition_latency; } ;
struct cpufreq_policy {int cpu; int cur; int cpus; TYPE_1__ cpuinfo; } ;
struct TYPE_6__ {int frequency; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct cpufreq_policy*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,int *) ;
 struct device_node* FUNC_6 (int,int *) ;
 int* FUNC_7 (struct device_node*,char*,int *) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct cpufreq_policy *VAR_5)
{
 const u32 *VAR_6;
 u32 VAR_7;
 int VAR_8, VAR_9;
 struct device_node *VAR_10;

 VAR_10 = FUNC_6(VAR_5->cpu, ((void*)0));

 if (!VAR_10)
  return -VAR_2;

 FUNC_10("init cpufreq on CPU %d\n", VAR_5->cpu);




 if (!FUNC_2(VAR_5->cpu) ||
     !FUNC_1(VAR_5->cpu)) {
  FUNC_11("invalid CBE regs pointers for cpufreq\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_7(VAR_10, "clock-frequency", ((void*)0));

 FUNC_8(VAR_10);

 if (!VAR_6)
  return -VAR_1;


 VAR_7 = *VAR_6 / 1000;

 FUNC_10("max clock-frequency is at %u kHz\n", VAR_7);
 FUNC_10("initializing frequency table\n");


 for (VAR_8=0; VAR_3[VAR_8].frequency!=VAR_0; VAR_8++) {
  VAR_3[VAR_8].frequency = VAR_7 / VAR_3[VAR_8].index;
  FUNC_10("%d: %d\n", VAR_8, VAR_3[VAR_8].frequency);
 }



 VAR_5->cpuinfo.transition_latency = 25000;

 VAR_9 = FUNC_0(VAR_5->cpu);
 FUNC_10("current pmode is at %d\n",VAR_9);

 VAR_5->cur = VAR_3[VAR_9].frequency;





 FUNC_4(VAR_3, VAR_5->cpu);



 return FUNC_3(VAR_5, VAR_3);
}
