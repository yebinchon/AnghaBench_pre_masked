
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * call; } ;
struct TYPE_5__ {TYPE_1__ threshold; int dequeues; } ;
typedef TYPE_2__ timer_longterm_t ;
typedef int * timer_call_t ;


 TYPE_2__ VAR_0 ;

void
FUNC_0(timer_call_t VAR_1)
{
 timer_longterm_t *VAR_2 = &VAR_0;

 VAR_2->dequeues++;
 if (VAR_1 == VAR_2->threshold.call)
  VAR_2->threshold.call = ((void*)0);
}
