
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ second; scalar_t__ minute; scalar_t__ hour; scalar_t__ day; scalar_t__ month; scalar_t__ year; } ;
struct TYPE_6__ {scalar_t__ seconds; scalar_t__ minutes; scalar_t__ hours; } ;
struct TYPE_7__ {TYPE_1__ last_played; TYPE_2__ runtime; } ;
typedef TYPE_3__ runtime_log_t ;



void FUNC_0(runtime_log_t *VAR_0)
{
   if (!VAR_0)
      return;

   VAR_0->runtime.hours = 0;
   VAR_0->runtime.minutes = 0;
   VAR_0->runtime.seconds = 0;

   VAR_0->last_played.year = 0;
   VAR_0->last_played.month = 0;
   VAR_0->last_played.day = 0;
   VAR_0->last_played.hour = 0;
   VAR_0->last_played.minute = 0;
   VAR_0->last_played.second = 0;
}
