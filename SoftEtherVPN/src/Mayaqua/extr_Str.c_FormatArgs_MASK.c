
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int va_list ;
typedef int UINT ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,int ,int *) ;

void FUNC_4(char *VAR_0, UINT VAR_1, char *VAR_2, va_list VAR_3)
{
 wchar_t *VAR_4;
 wchar_t *VAR_5;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_2(VAR_4, VAR_3, 1);

 FUNC_3(VAR_0, VAR_1, VAR_5);
 FUNC_1(VAR_5);
 FUNC_1(VAR_4);
}
