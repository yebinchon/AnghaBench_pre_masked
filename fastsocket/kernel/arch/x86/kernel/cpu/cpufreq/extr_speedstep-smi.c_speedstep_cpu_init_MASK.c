
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transition_latency; } ;
struct cpufreq_policy {scalar_t__ cpu; unsigned int cur; TYPE_1__ cpuinfo; } ;
struct TYPE_6__ {unsigned int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct cpufreq_policy*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int ,unsigned int*,unsigned int*,int *,int *) ;
 unsigned int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (unsigned int*,unsigned int*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned int *VAR_12, *VAR_13;


 if (VAR_8->cpu != 0)
  return -VAR_2;

 VAR_9 = FUNC_6();
 if (VAR_9) {
  FUNC_2("fails in aquiring ownership of a SMI interface.\n");
  return -VAR_1;
 }


 VAR_12 = &VAR_5[VAR_4].frequency;
 VAR_13 = &VAR_5[VAR_3].frequency;

 VAR_9 = FUNC_5(VAR_12, VAR_13);
 if (VAR_9) {


  FUNC_2("could not detect low and high frequencies "
    "by SMI call.\n");
  VAR_9 = FUNC_3(VAR_6,
    VAR_12, VAR_13,
    ((void*)0),
    &VAR_7);

  if (VAR_9) {
   FUNC_2("could not detect two different speeds"
     " -- aborting.\n");
   return VAR_9;
  } else
   FUNC_2("workaround worked.\n");
 }


 VAR_11 = FUNC_4();
 VAR_10 = VAR_5[VAR_11].frequency;

 FUNC_2("currently at %s speed setting - %i MHz\n",
  (VAR_10 == VAR_5[VAR_4].frequency)
  ? "low" : "high",
  (VAR_10 / 1000));


 VAR_8->cpuinfo.transition_latency = VAR_0;
 VAR_8->cur = VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_5, VAR_8->cpu);

 return 0;
}
