
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_7__ {scalar_t__ Param; } ;
struct TYPE_6__ {int * InBuf; } ;
typedef TYPE_1__ LOCAL_CONSOLE_PARAM ;
typedef TYPE_2__ CONSOLE ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;

wchar_t *FUNC_5(CONSOLE *VAR_0, wchar_t *VAR_1, bool VAR_2)
{
 wchar_t *VAR_3;
 LOCAL_CONSOLE_PARAM *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }
 VAR_4 = (LOCAL_CONSOLE_PARAM *)VAR_0->Param;
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = L">";
 }

 FUNC_1(VAR_0, VAR_1, 0);

 if (VAR_2 == 0 && VAR_4->InBuf != ((void*)0))
 {

  VAR_3 = FUNC_0(VAR_0);

  if (VAR_3 != ((void*)0))
  {

   FUNC_3(L"%s", VAR_1);


   FUNC_3(L"%s\n", VAR_3);
  }
 }
 else
 {

  VAR_3 = FUNC_2(VAR_1);
 }

 if (VAR_3 != ((void*)0))
 {
  FUNC_1(VAR_0, VAR_3, 1);
 }
 else
 {
  FUNC_1(VAR_0, FUNC_4("CON_USER_CANCEL"), 1);
 }

 return VAR_3;
}
