
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idle_notification; int disable_depth; int request_pending; int deferred_resume; int wait_queue; int suspend_timer; scalar_t__ timer_expires; int work; int request; int child_count; scalar_t__ runtime_error; int usage_count; int runtime_status; int lock; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,unsigned long) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct device *VAR_4)
{
 FUNC_5(&VAR_4->power.lock);

 VAR_4->power.runtime_status = VAR_1;
 VAR_4->power.idle_notification = 0;

 VAR_4->power.disable_depth = 1;
 FUNC_1(&VAR_4->power.usage_count, 0);

 VAR_4->power.runtime_error = 0;

 FUNC_1(&VAR_4->power.child_count, 0);
 FUNC_3(VAR_4, 0);

 VAR_4->power.request_pending = 0;
 VAR_4->power.request = VAR_0;
 VAR_4->power.deferred_resume = 0;
 FUNC_0(&VAR_4->power.work, VAR_2);

 VAR_4->power.timer_expires = 0;
 FUNC_4(&VAR_4->power.suspend_timer, VAR_3,
   (unsigned long)VAR_4);

 FUNC_2(&VAR_4->power.wait_queue);
}
