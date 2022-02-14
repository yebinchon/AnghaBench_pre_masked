
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Win32_OldConsoleWidth; int OutputLock; int * OutFile; int InBuf; int * InFile; scalar_t__ Param; } ;
typedef TYPE_1__ LOCAL_CONSOLE_PARAM ;
typedef TYPE_1__ CONSOLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(CONSOLE *VAR_0)
{
 LOCAL_CONSOLE_PARAM *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_1 = (LOCAL_CONSOLE_PARAM *)VAR_0->Param;
 if (VAR_1 != ((void*)0))
 {
  if (VAR_1->InFile != ((void*)0))
  {
   FUNC_1(VAR_1->InFile);
   FUNC_3(VAR_1->InBuf);
  }

  if (VAR_1->OutFile != ((void*)0))
  {
   FUNC_1(VAR_1->OutFile);
  }

  FUNC_2(VAR_1);
 }

 FUNC_0(VAR_0->OutputLock);


 FUNC_2(VAR_0);
}
