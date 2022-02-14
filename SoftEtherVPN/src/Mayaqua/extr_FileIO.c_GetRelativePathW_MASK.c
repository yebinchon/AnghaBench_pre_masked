
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int fullpath2 ;
typedef int basepath2 ;
typedef int UINT ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;

bool FUNC_6(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3, wchar_t *VAR_4)
{
 wchar_t VAR_5[VAR_0];
 wchar_t VAR_6[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }
 FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_5, sizeof(VAR_5), VAR_3);
 FUNC_1(VAR_6, sizeof(VAR_6), VAR_4);




 FUNC_3(VAR_6, sizeof(VAR_6), L"/");


 if (FUNC_5(VAR_5) <= FUNC_5(VAR_6))
 {
  return 0;
 }

 if (FUNC_2(VAR_5, VAR_6) == 0)
 {
  return 0;
 }

 FUNC_4(VAR_1, VAR_2, VAR_5 + FUNC_5(VAR_6));

 return 1;
}
