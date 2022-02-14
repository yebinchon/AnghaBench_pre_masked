
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
struct TYPE_2__ {scalar_t__ ConsoleType; int OutputLock; } ;
typedef TYPE_1__ CONSOLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int ) ;

void FUNC_6(void *VAR_2, wchar_t *VAR_3)
{
 CONSOLE *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = (CONSOLE *)VAR_2;

 if (VAR_4->ConsoleType == VAR_0)
 {
  FUNC_0(VAR_4->OutputLock);
  {
   wchar_t VAR_5[VAR_1];



   FUNC_4(VAR_5, sizeof(VAR_5), VAR_3);
   if (FUNC_1(VAR_3, L"\n") == 0)
   {
    FUNC_3(VAR_5, sizeof(VAR_5), L"\n");
   }
   FUNC_2(L"%s", VAR_5);
  }
  FUNC_5(VAR_4->OutputLock);
 }
}
