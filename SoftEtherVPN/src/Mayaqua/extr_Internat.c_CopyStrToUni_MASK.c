
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (char*) ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,char*) ;

wchar_t *FUNC_4(char *VAR_0)
{
 wchar_t *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == 0)
 {
  return FUNC_1(L"");
 }
 VAR_1 = FUNC_2(VAR_2);
 FUNC_3(VAR_1, VAR_2, VAR_0);

 return VAR_1;
}
