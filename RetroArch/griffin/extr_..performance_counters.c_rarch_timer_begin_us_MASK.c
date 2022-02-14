
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int timer_begin; int timer_end; } ;
typedef TYPE_1__ rarch_timer_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(rarch_timer_t *VAR_0, uint64_t VAR_1)
{
   if (!VAR_0)
      return;
   FUNC_0(VAR_0, VAR_1);
   VAR_0->timer_begin = 1;
   VAR_0->timer_end = 0;
}
