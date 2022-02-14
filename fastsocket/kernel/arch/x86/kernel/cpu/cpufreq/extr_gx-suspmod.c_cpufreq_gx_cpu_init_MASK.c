
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int min_freq; unsigned int max_freq; int transition_latency; } ;
struct cpufreq_policy {scalar_t__ cpu; unsigned int min; unsigned int max; unsigned int cur; TYPE_1__ cpuinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (int ) ;
 int* VAR_5 ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_9)
{
 unsigned int VAR_10, VAR_11;

 if (!VAR_9 || VAR_9->cpu != 0)
  return -VAR_2;


 if (VAR_7)
  VAR_10 = VAR_7 * VAR_5[FUNC_1(VAR_1) & 0x0f];
 else if (VAR_4)
  VAR_10 = VAR_4;
 else
  VAR_10 = 30000 * VAR_5[FUNC_1(VAR_1) & 0x0f];

 VAR_8 = VAR_10;
 VAR_11 = FUNC_2(0);

 FUNC_0("cpu max frequency is %d.\n", VAR_10);
 FUNC_0("cpu current frequency is %dkHz.\n", VAR_11);


 VAR_9->cpu = 0;

 if (VAR_6 < VAR_3)
  VAR_9->min = VAR_10 / VAR_6;
 else
  VAR_9->min = VAR_10 / VAR_3;
 VAR_9->max = VAR_10;
 VAR_9->cur = VAR_11;
 VAR_9->cpuinfo.min_freq = VAR_10 / VAR_6;
 VAR_9->cpuinfo.max_freq = VAR_10;
 VAR_9->cpuinfo.transition_latency = VAR_0;

 return 0;
}
