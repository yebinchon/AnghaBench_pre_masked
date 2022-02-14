
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer_end; int timer_begin; scalar_t__ timeout_end; } ;
typedef TYPE_1__ rarch_timer_t ;



void FUNC_0(rarch_timer_t *VAR_0)
{
   if (!VAR_0)
      return;
   VAR_0->timer_end = 1;
   VAR_0->timer_begin = 0;
   VAR_0->timeout_end = 0;
}
