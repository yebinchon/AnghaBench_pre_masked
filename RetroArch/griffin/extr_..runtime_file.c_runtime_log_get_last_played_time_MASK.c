
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_isdst; } ;
struct TYPE_4__ {scalar_t__ second; scalar_t__ minute; scalar_t__ hour; scalar_t__ day; scalar_t__ month; scalar_t__ year; } ;
struct TYPE_5__ {TYPE_1__ last_played; } ;
typedef TYPE_2__ runtime_log_t ;


 int FUNC_0 (struct tm*) ;

void FUNC_1(runtime_log_t *VAR_0, struct tm *VAR_1)
{
   if (!VAR_0 || !VAR_1)
      return;


   VAR_1->tm_year = (int)VAR_0->last_played.year - 1900;
   VAR_1->tm_mon = (int)VAR_0->last_played.month - 1;
   VAR_1->tm_mday = (int)VAR_0->last_played.day;
   VAR_1->tm_hour = (int)VAR_0->last_played.hour;
   VAR_1->tm_min = (int)VAR_0->last_played.minute;
   VAR_1->tm_sec = (int)VAR_0->last_played.second;
   VAR_1->tm_isdst = -1;



   FUNC_0(VAR_1);
}
