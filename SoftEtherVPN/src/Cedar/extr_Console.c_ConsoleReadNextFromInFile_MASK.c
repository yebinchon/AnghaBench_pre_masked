
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ Param; } ;
struct TYPE_4__ {int * InBuf; } ;
typedef TYPE_1__ LOCAL_CONSOLE_PARAM ;
typedef TYPE_2__ CONSOLE ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,scalar_t__,int *,int ) ;
 int * FUNC_7 (scalar_t__) ;

wchar_t *FUNC_8(CONSOLE *VAR_0)
{
 LOCAL_CONSOLE_PARAM *VAR_1;
 char *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = (LOCAL_CONSOLE_PARAM *)VAR_0->Param;

 if (VAR_1->InBuf == ((void*)0))
 {
  return ((void*)0);
 }

 while (1)
 {
  VAR_2 = FUNC_1(VAR_1->InBuf);

  if (VAR_2 == ((void*)0))
  {
   return ((void*)0);
  }

  FUNC_5(VAR_2);

  if (FUNC_3(VAR_2) == 0)
  {
   UINT VAR_3;
   wchar_t *VAR_4;

   VAR_3 = FUNC_0((BYTE *)VAR_2, FUNC_4(VAR_2));
   VAR_4 = FUNC_7(VAR_3 + 32);
   FUNC_6(VAR_4, VAR_3, (BYTE *)VAR_2, FUNC_4(VAR_2));

   FUNC_2(VAR_2);

   return VAR_4;
  }

  FUNC_2(VAR_2);
 }
}
