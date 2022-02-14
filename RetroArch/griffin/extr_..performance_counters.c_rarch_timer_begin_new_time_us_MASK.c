
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ timeout_us; scalar_t__ current; scalar_t__ timeout_end; } ;
typedef TYPE_1__ rarch_timer_t ;


 scalar_t__ FUNC_0 () ;

void FUNC_1(rarch_timer_t *VAR_0, uint64_t VAR_1)
{
   if (!VAR_0)
      return;
   VAR_0->timeout_us = VAR_1;
   VAR_0->current = FUNC_0();
   VAR_0->timeout_end = VAR_0->current + VAR_0->timeout_us;
}
