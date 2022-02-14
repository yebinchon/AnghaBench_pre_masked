
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int,int *) ;

bool FUNC_4(char *VAR_0, UINT VAR_1)
{
 bool VAR_2;
 wchar_t *VAR_3;
 UINT VAR_4 = (VAR_1 + 1) * sizeof(wchar_t);

 VAR_3 = FUNC_1(VAR_4);

 VAR_2 = FUNC_2(VAR_3, VAR_4);

 FUNC_3(VAR_0, VAR_1, VAR_3);

 FUNC_0(VAR_3);

 return VAR_2;
}
