
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp ;
typedef int UINT ;
typedef int REMOTE_CLIENT ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ,int *,...) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (char*) ;

void FUNC_4(REMOTE_CLIENT *VAR_1, wchar_t *VAR_2, UINT VAR_3, wchar_t *VAR_4)
{
 UINT VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 for (VAR_5 = 1;;VAR_5++)
 {
  wchar_t VAR_6[VAR_0];
  if (VAR_5 == 1)
  {
   FUNC_1(VAR_6, sizeof(VAR_6), FUNC_3("CM_IMPORT_NAME_1"), VAR_4);
  }
  else
  {
   FUNC_1(VAR_6, sizeof(VAR_6), FUNC_3("CM_IMPORT_NAME_2"), VAR_4, VAR_5);
  }

  if (FUNC_0(VAR_1, VAR_6) == 0)
  {
   FUNC_2(VAR_2, VAR_3, VAR_6);
   return;
  }
 }
}
