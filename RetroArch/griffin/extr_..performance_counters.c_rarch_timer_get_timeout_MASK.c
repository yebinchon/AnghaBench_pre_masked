
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout_us; } ;
typedef TYPE_1__ rarch_timer_t ;



int FUNC_0(rarch_timer_t *VAR_0)
{
   if (!VAR_0)
      return 0;
   return (int)(VAR_0->timeout_us / 1000000);
}
