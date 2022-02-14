
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_wday; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_4__ {scalar_t__ wMilliseconds; void* wSecond; void* wMinute; void* wHour; void* wDayOfWeek; void* wDay; void* wMonth; void* wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (struct tm*,struct tm*,int) ;
 void* FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (struct tm*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(SYSTEMTIME *VAR_0, struct tm *VAR_1)
{
 struct tm VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(&VAR_2, VAR_1, sizeof(struct tm));
 FUNC_2(&VAR_2);

 FUNC_3(VAR_0, sizeof(SYSTEMTIME));
 VAR_0->wYear = FUNC_1(VAR_2.tm_year + 1900, 1970, 2099);
 VAR_0->wMonth = FUNC_1(VAR_2.tm_mon + 1, 1, 12);
 VAR_0->wDay = FUNC_1(VAR_2.tm_mday, 1, 31);
 VAR_0->wDayOfWeek = FUNC_1(VAR_2.tm_wday, 0, 6);
 VAR_0->wHour = FUNC_1(VAR_2.tm_hour, 0, 23);
 VAR_0->wMinute = FUNC_1(VAR_2.tm_min, 0, 59);
 VAR_0->wSecond = FUNC_1(VAR_2.tm_sec, 0, 59);
 VAR_0->wMilliseconds = 0;
}
