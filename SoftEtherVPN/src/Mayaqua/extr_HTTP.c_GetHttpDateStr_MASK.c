
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT ;
struct TYPE_3__ {size_t wDayOfWeek; int wMonth; int wSecond; int wMinute; int wHour; int wYear; int wDay; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (char*,int ,char*,char*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(char *VAR_0, UINT VAR_1, UINT64 VAR_2)
{
 SYSTEMTIME VAR_3;
 static char *VAR_4[] =
 {
  "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat",
 };
 static char *VAR_5[] =
 {
  "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct",
  "Nov", "Dec",
 };

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 FUNC_1(&VAR_3, VAR_2);

 FUNC_0(VAR_0, VAR_1, "%s, %02u %s %04u %02u:%02u:%02u GMT",
  VAR_4[VAR_3.wDayOfWeek], VAR_3.wDay, VAR_5[VAR_3.wMonth - 1], VAR_3.wYear,
  VAR_3.wHour, VAR_3.wMinute, VAR_3.wSecond);
}
