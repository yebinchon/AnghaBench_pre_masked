
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int TOKEN_LIST ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int **) ;

TOKEN_LIST *FUNC_3(wchar_t *VAR_0)
{
 TOKEN_LIST *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return FUNC_1();
 }

 FUNC_0(FUNC_2(VAR_0, L"dummy_str", &VAR_1));

 return VAR_1;
}
