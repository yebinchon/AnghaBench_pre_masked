
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_year; int tm_wday; int tm_mon; } ;
struct TYPE_3__ {int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; int wDayOfWeek; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int VAR_0)
{
 time_t VAR_1;
 struct tm *VAR_2;

 VAR_1 = FUNC_3(((void*)0));
 VAR_2 = FUNC_2(&VAR_1);

 switch (VAR_0) {
 case 0:
  return FUNC_1(VAR_2->tm_sec);
 case 1:
  return FUNC_1(VAR_2->tm_min);
 case 2:
  return FUNC_1(VAR_2->tm_hour);
 case 3:
  return FUNC_1(VAR_2->tm_mday);
 case 4:
  return FUNC_1(VAR_2->tm_mon + 1);
 case 5:
  return FUNC_1(VAR_2->tm_year % 100);
 case 6:
  return FUNC_1(((VAR_2->tm_wday + 2) % 7) + 1);
 }

 return 0;
}
