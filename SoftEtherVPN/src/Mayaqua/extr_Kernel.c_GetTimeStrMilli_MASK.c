
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int wMilliseconds; int wSecond; int wMinute; int wHour; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ) ;

void FUNC_1(char *VAR_0, UINT VAR_1, SYSTEMTIME *VAR_2)
{

 if (VAR_2 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, VAR_1, "%02u:%02u:%02u.%03u",
  VAR_2->wHour, VAR_2->wMinute, VAR_2->wSecond, VAR_2->wMilliseconds);
}
