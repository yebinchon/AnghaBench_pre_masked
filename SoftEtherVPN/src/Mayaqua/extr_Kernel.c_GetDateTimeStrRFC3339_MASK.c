
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int wMilliseconds; int wSecond; int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ,...) ;

void FUNC_2(char *VAR_0, UINT VAR_1, SYSTEMTIME *VAR_2, int VAR_3){

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1);
  return;
 }

 if(VAR_3 == 0){
  FUNC_1(VAR_0, VAR_1, "%04u-%02u-%02uT%02u:%02u:%02u.%03uZ",
  VAR_2->wYear, VAR_2->wMonth, VAR_2->wDay,
  VAR_2->wHour, VAR_2->wMinute, VAR_2->wSecond,
  VAR_2->wMilliseconds);
 }else{
  FUNC_1(VAR_0, VAR_1, "%04u-%02u-%02uT%02u:%02u:%02u.%03u%+02d:%02d",
  VAR_2->wYear, VAR_2->wMonth, VAR_2->wDay,
  VAR_2->wHour, VAR_2->wMinute, VAR_2->wSecond,
  VAR_2->wMilliseconds, VAR_3/60, VAR_3%60);
 }
}
