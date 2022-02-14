
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ year; scalar_t__ month; scalar_t__ day; scalar_t__ hour; scalar_t__ minute; scalar_t__ second; } ;
struct TYPE_5__ {TYPE_1__ last_played; } ;
typedef TYPE_2__ runtime_log_t ;



bool FUNC_0(runtime_log_t *VAR_0)
{
   if (!VAR_0)
      return 0;

   return !((VAR_0->last_played.year == 0) &&
            (VAR_0->last_played.month == 0) &&
            (VAR_0->last_played.day == 0) &&
            (VAR_0->last_played.hour == 0) &&
            (VAR_0->last_played.minute == 0) &&
            (VAR_0->last_played.second == 0));
}
