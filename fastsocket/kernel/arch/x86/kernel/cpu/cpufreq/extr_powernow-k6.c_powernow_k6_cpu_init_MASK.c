
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transition_latency; } ;
struct cpufreq_policy {scalar_t__ cpu; unsigned int cur; TYPE_1__ cpuinfo; } ;
struct TYPE_6__ {unsigned int frequency; unsigned int index; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct cpufreq_policy*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 unsigned int VAR_7 ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 if (VAR_8->cpu != 0)
  return -VAR_3;


 VAR_7 = FUNC_2();
 VAR_4 = VAR_6 / VAR_7;


 for (VAR_9 = 0; (VAR_5[VAR_9].frequency != VAR_2); VAR_9++) {
  VAR_10 = VAR_5[VAR_9].index;
  if (VAR_10 > VAR_7)
   VAR_5[VAR_9].frequency = VAR_0;
  else
   VAR_5[VAR_9].frequency = VAR_4 * VAR_10;
 }


 VAR_8->cpuinfo.transition_latency = VAR_1;
 VAR_8->cur = VAR_4 * VAR_7;

 VAR_11 = FUNC_0(VAR_8, VAR_5);
 if (VAR_11)
  return VAR_11;

 FUNC_1(VAR_5, VAR_8->cpu);

 return 0;
}
