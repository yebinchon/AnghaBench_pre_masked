
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int year; unsigned int month; unsigned int day; unsigned int hour; unsigned int minute; unsigned int second; } ;
struct TYPE_5__ {TYPE_1__ last_played; } ;
typedef TYPE_2__ runtime_log_t ;



void FUNC_0(runtime_log_t *VAR_0,
      unsigned *VAR_1, unsigned *VAR_2, unsigned *VAR_3,
      unsigned *VAR_4, unsigned *VAR_5, unsigned *VAR_6)
{
   if (!VAR_0)
      return;

   *VAR_1 = VAR_0->last_played.year;
   *VAR_2 = VAR_0->last_played.month;
   *VAR_3 = VAR_0->last_played.day;
   *VAR_4 = VAR_0->last_played.hour;
   *VAR_5 = VAR_0->last_played.minute;
   *VAR_6 = VAR_0->last_played.second;
}
