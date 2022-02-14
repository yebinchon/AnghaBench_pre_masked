
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ request; scalar_t__ runtime_status; scalar_t__ disable_depth; int lock; scalar_t__ timer_expires; int suspend_timer; int usage_count; scalar_t__ request_pending; scalar_t__ runtime_error; } ;
struct device {TYPE_1__ power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct device *VAR_9, unsigned int VAR_10)
{
 unsigned long VAR_11;
 int VAR_12 = 0;

 FUNC_6(&VAR_9->power.lock, VAR_11);

 if (VAR_9->power.runtime_error) {
  VAR_12 = -VAR_3;
  goto out;
 }

 if (!VAR_10) {
  VAR_12 = FUNC_0(VAR_9);
  goto out;
 }

 FUNC_5(VAR_9);

 if (VAR_9->power.request_pending) {




  if (VAR_9->power.request == VAR_5) {
   VAR_12 = -VAR_0;
   goto out;
  }
  VAR_9->power.request = VAR_4;
 }

 if (VAR_9->power.runtime_status == VAR_6)
  VAR_12 = 1;
 else if (VAR_9->power.runtime_status == VAR_7)
  VAR_12 = -VAR_2;
 else if (FUNC_1(&VAR_9->power.usage_count) > 0
     || VAR_9->power.disable_depth > 0)
  VAR_12 = -VAR_0;
 else if (!FUNC_4(VAR_9))
  VAR_12 = -VAR_1;
 if (VAR_12)
  goto out;

 VAR_9->power.timer_expires = VAR_8 + FUNC_3(VAR_10);
 FUNC_2(&VAR_9->power.suspend_timer, VAR_9->power.timer_expires);

 out:
 FUNC_7(&VAR_9->power.lock, VAR_11);

 return VAR_12;
}
