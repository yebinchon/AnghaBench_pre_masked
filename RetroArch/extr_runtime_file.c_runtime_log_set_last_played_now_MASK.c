
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_4__ {unsigned int year; unsigned int month; unsigned int day; unsigned int hour; unsigned int minute; unsigned int second; } ;
struct TYPE_5__ {TYPE_1__ last_played; } ;
typedef TYPE_2__ runtime_log_t ;


 int FUNC_0 (char*) ;
 struct tm* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(runtime_log_t *VAR_0)
{
   time_t VAR_1;
   struct tm *VAR_2;

   if (!VAR_0)
      return;


   FUNC_2(&VAR_1);
   VAR_2 = FUNC_1(&VAR_1);



   if(!VAR_2)
   {
      FUNC_0("Failed to get current time.\n");
      return;
   }


   VAR_0->last_played.year = (unsigned)VAR_2->tm_year + 1900;
   VAR_0->last_played.month = (unsigned)VAR_2->tm_mon + 1;
   VAR_0->last_played.day = (unsigned)VAR_2->tm_mday;
   VAR_0->last_played.hour = (unsigned)VAR_2->tm_hour;
   VAR_0->last_played.minute = (unsigned)VAR_2->tm_min;
   VAR_0->last_played.second = (unsigned)VAR_2->tm_sec;
}
