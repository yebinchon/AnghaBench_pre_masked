
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_isdst; void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; void* tm_year; } ;
struct TYPE_3__ {int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 void* FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (struct tm*,int) ;

void FUNC_3(struct tm *VAR_0, SYSTEMTIME *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(struct tm));
 VAR_0->tm_year = FUNC_0(VAR_1->wYear, 1970, 2099) - 1900;
 VAR_0->tm_mon = FUNC_0(VAR_1->wMonth, 1, 12) - 1;
 VAR_0->tm_mday = FUNC_0(VAR_1->wDay, 1, 31);
 VAR_0->tm_hour = FUNC_0(VAR_1->wHour, 0, 23);
 VAR_0->tm_min = FUNC_0(VAR_1->wMinute, 0, 59);
 VAR_0->tm_sec = FUNC_0(VAR_1->wSecond, 0, 59);

 VAR_0->tm_isdst = -1;
 FUNC_1(VAR_0);
}
