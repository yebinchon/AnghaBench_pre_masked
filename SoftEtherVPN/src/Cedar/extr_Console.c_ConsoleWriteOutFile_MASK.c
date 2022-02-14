
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
typedef scalar_t__ UINT ;
typedef char UCHAR ;
struct TYPE_5__ {scalar_t__ Param; } ;
struct TYPE_4__ {int * OutFile; } ;
typedef TYPE_1__ LOCAL_CONSOLE_PARAM ;
typedef TYPE_2__ CONSOLE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,scalar_t__,char*) ;
 char* FUNC_7 (scalar_t__) ;

void FUNC_8(CONSOLE *VAR_0, wchar_t *VAR_1, bool VAR_2)
{
 LOCAL_CONSOLE_PARAM *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = (LOCAL_CONSOLE_PARAM *)VAR_0->Param;

 if (VAR_3 != ((void*)0) && VAR_3->OutFile != ((void*)0))
 {
  wchar_t *VAR_4 = FUNC_5(VAR_1);
  UINT VAR_5;
  UCHAR *VAR_6;

  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = FUNC_7(VAR_5 + 1);
  FUNC_6(VAR_6, VAR_5 + 1, VAR_4);

  FUNC_1(VAR_3->OutFile, VAR_6, VAR_5);

  if (FUNC_4(VAR_1, L"\n") == 0 && VAR_2)
  {
   char *VAR_7 = "\r\n";
   FUNC_1(VAR_3->OutFile, "\r\n", FUNC_3(VAR_7));
  }

  FUNC_2(VAR_6);
  FUNC_2(VAR_4);
 }

}
