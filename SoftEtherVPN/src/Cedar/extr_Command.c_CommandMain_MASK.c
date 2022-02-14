
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char wchar_t ;
typedef int cmd ;
typedef int UINT ;
struct TYPE_8__ {char* member_0; int member_1; } ;
struct TYPE_7__ {int ProgrammingMode; int (* Free ) (TYPE_1__*) ;int RetCode; int ConsoleType; } ;
typedef TYPE_1__ CONSOLE ;
typedef TYPE_2__ CMD ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,char*,TYPE_2__*,int,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*) ;

UINT FUNC_8(wchar_t *VAR_3)
{
 UINT VAR_4 = 0;
 wchar_t *VAR_5, *VAR_6;
 char *VAR_7, *VAR_8;
 wchar_t *VAR_9;
 wchar_t *VAR_10;
 CONSOLE *VAR_11;


 if (VAR_3 == ((void*)0))
 {
  return VAR_1;
 }


 VAR_5 = FUNC_4(VAR_3, L"in");
 VAR_6 = FUNC_4(VAR_3, L"out");
 if (FUNC_6(VAR_5))
 {
  FUNC_2(VAR_5);
  VAR_5 = ((void*)0);
 }
 if (FUNC_6(VAR_6))
 {
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_5);
 VAR_8 = FUNC_0(VAR_6);


 VAR_11 = FUNC_3(VAR_5, VAR_6);
 if (VAR_11 != ((void*)0))
 {

  CMD VAR_12[] =
  {
   {"vpncmd", VAR_2},
  };


  VAR_9 = FUNC_4(VAR_3, L"csv");
  if(VAR_9 != ((void*)0))
  {
   FUNC_2(VAR_9);
   VAR_11->ConsoleType = VAR_0;
  }

  VAR_10 = FUNC_4(VAR_3, L"programming");
  if (VAR_10 != ((void*)0))
  {
   FUNC_2(VAR_10);
   VAR_11->ProgrammingMode = 1;
  }

  if (FUNC_1(VAR_11, VAR_3, ">", VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]), ((void*)0)) == 0)
  {
   VAR_4 = VAR_1;
  }
  else
  {
   VAR_4 = VAR_11->RetCode;
  }


  VAR_11->Free(VAR_11);
 }
 else
 {
  FUNC_5("Error: Couldn't open local console.\n");
 }

 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 return VAR_4;
}
