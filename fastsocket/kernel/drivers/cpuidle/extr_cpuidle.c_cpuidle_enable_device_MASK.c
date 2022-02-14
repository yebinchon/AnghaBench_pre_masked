
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpuidle_device {int enabled; int state_count; scalar_t__ registered; int * last_state; scalar_t__ last_residency; TYPE_1__* states; } ;
struct TYPE_4__ {int (* enable ) (struct cpuidle_device*) ;} ;
struct TYPE_3__ {scalar_t__ time; scalar_t__ usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpuidle_device*) ;
 int FUNC_1 (struct cpuidle_device*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (struct cpuidle_device*) ;
 int VAR_3 ;
 int FUNC_4 (struct cpuidle_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct cpuidle_device*) ;

int FUNC_7(struct cpuidle_device *VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_4->enabled)
  return 0;
 if (!FUNC_2() || !VAR_2)
  return -VAR_1;
 if (!VAR_4->state_count)
  return -VAR_0;

 if (VAR_4->registered == 0) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_4(VAR_4);

 if ((VAR_5 = FUNC_1(VAR_4)))
  return VAR_5;

 if (VAR_2->enable &&
     (VAR_5 = VAR_2->enable(VAR_4)))
  goto fail_sysfs;

 for (VAR_6 = 0; VAR_6 < VAR_4->state_count; VAR_6++) {
  VAR_4->states[VAR_6].usage = 0;
  VAR_4->states[VAR_6].time = 0;
 }
 VAR_4->last_residency = 0;
 VAR_4->last_state = ((void*)0);

 FUNC_5();

 VAR_4->enabled = 1;

 VAR_3++;
 return 0;

fail_sysfs:
 FUNC_3(VAR_4);

 return VAR_5;
}
