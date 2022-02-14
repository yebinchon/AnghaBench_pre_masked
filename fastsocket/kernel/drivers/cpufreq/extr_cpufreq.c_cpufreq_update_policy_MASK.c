
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int governor; int policy; int max; int min; } ;
struct cpufreq_policy {scalar_t__ cur; TYPE_1__ user_policy; int governor; int policy; int max; int min; } ;
struct TYPE_4__ {scalar_t__ (* get ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_policy*) ;
 struct cpufreq_policy* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct cpufreq_policy*,struct cpufreq_policy*,int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (unsigned int) ;

int FUNC_10(unsigned int VAR_3)
{
 struct cpufreq_policy *VAR_4 = FUNC_1(VAR_3);
 struct cpufreq_policy VAR_5;
 int VAR_6;

 if (!VAR_4) {
  VAR_6 = -VAR_1;
  goto no_policy;
 }

 if (FUNC_8(FUNC_5(VAR_3))) {
  VAR_6 = -VAR_0;
  goto fail;
 }

 FUNC_4("updating policy for CPU %u\n", VAR_3);
 FUNC_6(&VAR_5, VAR_4, sizeof(struct cpufreq_policy));
 VAR_5.min = VAR_4->user_policy.min;
 VAR_5.max = VAR_4->user_policy.max;
 VAR_5.policy = VAR_4->user_policy.policy;
 VAR_5.governor = VAR_4->user_policy.governor;



 if (VAR_2->get) {
  VAR_5.cur = VAR_2->get(VAR_3);
  if (!VAR_4->cur) {
   FUNC_4("Driver did not initialize current freq");
   VAR_4->cur = VAR_5.cur;
  } else {
   if (VAR_4->cur != VAR_5.cur)
    FUNC_3(VAR_3, VAR_4->cur,
        VAR_5.cur);
  }
 }

 VAR_6 = FUNC_0(VAR_4, &VAR_5);

 FUNC_9(VAR_3);

fail:
 FUNC_2(VAR_4);
no_policy:
 return VAR_6;
}
