
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long expires; } ;
struct delay_c {int timer_lock; TYPE_1__ delay_timer; } ;


 int FUNC_0 (TYPE_1__*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct delay_c *VAR_0, unsigned long VAR_1)
{
 FUNC_1(&VAR_0->timer_lock);

 if (!FUNC_3(&VAR_0->delay_timer) || VAR_1 < VAR_0->delay_timer.expires)
  FUNC_0(&VAR_0->delay_timer, VAR_1);

 FUNC_2(&VAR_0->timer_lock);
}
