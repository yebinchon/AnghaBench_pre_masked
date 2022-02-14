
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;

wchar_t *FUNC_3(wchar_t *VAR_0)
{
 UINT VAR_1;
 wchar_t *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_0((VAR_1 + 1) * sizeof(wchar_t));
 FUNC_1(VAR_2, 0, VAR_0);

 return VAR_2;
}
