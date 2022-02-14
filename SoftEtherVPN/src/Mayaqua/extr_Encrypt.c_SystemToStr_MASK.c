
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int wYear; int wSecond; int wMinute; int wHour; int wDay; int wMonth; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (char*,int ,char*,int,int ,int ,int ,int ,int ) ;

bool FUNC_1(char *VAR_0, UINT VAR_1, SYSTEMTIME *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_0, VAR_1, "%02u%02u%02u%02u%02u%02uZ",
  VAR_2->wYear % 100, VAR_2->wMonth, VAR_2->wDay,
  VAR_2->wHour, VAR_2->wMinute, VAR_2->wSecond);

 return 1;
}
