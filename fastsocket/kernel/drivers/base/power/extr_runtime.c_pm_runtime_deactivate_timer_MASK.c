
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ timer_expires; int suspend_timer; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0)
{
 if (VAR_0->power.timer_expires > 0) {
  FUNC_0(&VAR_0->power.suspend_timer);
  VAR_0->power.timer_expires = 0;
 }
}
