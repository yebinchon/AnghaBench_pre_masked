
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ current; scalar_t__ timeout_end; scalar_t__ timeout_us; } ;
typedef TYPE_1__ rarch_timer_t ;


 scalar_t__ FUNC_0 () ;

void FUNC_1(rarch_timer_t *VAR_0)
{
   if (!VAR_0)
      return;
   VAR_0->current = FUNC_0();
   VAR_0->timeout_us = (VAR_0->timeout_end - VAR_0->current);
}
