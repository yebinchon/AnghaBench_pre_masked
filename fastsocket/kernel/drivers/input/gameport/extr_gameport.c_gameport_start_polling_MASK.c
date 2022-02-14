
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int timer_lock; int poll_interval; int poll_timer; int poll_handler; int poll_cnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct gameport *VAR_1)
{
 FUNC_3(&VAR_1->timer_lock);

 if (!VAR_1->poll_cnt++) {
  FUNC_0(!VAR_1->poll_handler);
  FUNC_0(!VAR_1->poll_interval);
  FUNC_1(&VAR_1->poll_timer, VAR_0 + FUNC_2(VAR_1->poll_interval));
 }

 FUNC_4(&VAR_1->timer_lock);
}
