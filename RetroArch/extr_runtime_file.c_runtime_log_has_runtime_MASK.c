
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hours; scalar_t__ minutes; scalar_t__ seconds; } ;
struct TYPE_5__ {TYPE_1__ runtime; } ;
typedef TYPE_2__ runtime_log_t ;



bool FUNC_0(runtime_log_t *VAR_0)
{
   if (!VAR_0)
      return 0;

   return !((VAR_0->runtime.hours == 0) &&
            (VAR_0->runtime.minutes == 0) &&
            (VAR_0->runtime.seconds == 0));
}
