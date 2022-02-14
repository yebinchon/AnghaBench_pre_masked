
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;
typedef int LOG ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,scalar_t__,int *) ;
 char* FUNC_4 (scalar_t__) ;

void FUNC_5(LOG *VAR_0, wchar_t *VAR_1)
{
 char *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_0(VAR_1) + 32;
 VAR_2 = FUNC_4(VAR_3);

 FUNC_3((BYTE *)VAR_2, VAR_3, VAR_1);
 FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_2);
}
