
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int X ;


 int FUNC_0 (int *,int,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(void *VAR_1, void *VAR_2)
{
 X *VAR_3, *VAR_4;
 wchar_t VAR_5[VAR_0];
 wchar_t VAR_6[VAR_0];
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }
 VAR_3 = *(X **)VAR_1;
 VAR_4 = *(X **)VAR_2;
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_5, sizeof(VAR_5), VAR_3);
 FUNC_0(VAR_6, sizeof(VAR_6), VAR_4);

 return FUNC_1(VAR_5, VAR_6);
}
