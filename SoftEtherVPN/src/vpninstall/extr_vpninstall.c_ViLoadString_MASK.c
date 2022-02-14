
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
typedef int UINT ;
struct TYPE_2__ {int OsType; } ;
typedef int HINSTANCE ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int,char*,int) ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (int ,int) ;

wchar_t *FUNC_8(HINSTANCE VAR_0, UINT VAR_1)
{
 wchar_t *VAR_2 = ((void*)0);

 if (FUNC_6(FUNC_3()->OsType))
 {
  char *VAR_3 = FUNC_7(VAR_0, VAR_1);
  if (VAR_3 != ((void*)0))
  {
   VAR_2 = FUNC_0(VAR_3);
   FUNC_2(VAR_3);
  }
 }
 else
 {
  UINT VAR_4 = 60000;
  wchar_t *VAR_5 = FUNC_5(VAR_4);

  if (FUNC_4(VAR_0, VAR_1, VAR_5, VAR_4) != 0)
  {
   VAR_2 = FUNC_1(VAR_5);
  }

  FUNC_2(VAR_5);
 }

 return VAR_2;
}
