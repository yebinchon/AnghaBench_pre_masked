
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int hours; unsigned int minutes; unsigned int seconds; } ;
struct TYPE_5__ {TYPE_1__ runtime; } ;
typedef TYPE_2__ runtime_log_t ;



void FUNC_0(runtime_log_t *VAR_0,
      unsigned *VAR_1, unsigned *VAR_2, unsigned *VAR_3)
{
   if (!VAR_0)
      return;

   *VAR_1 = VAR_0->runtime.hours;
   *VAR_2 = VAR_0->runtime.minutes;
   *VAR_3 = VAR_0->runtime.seconds;
}
