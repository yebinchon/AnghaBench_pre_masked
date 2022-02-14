
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int K ;
typedef int BUF ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int,char*) ;

bool FUNC_3(K *VAR_0, wchar_t *VAR_1, bool VAR_2, char *VAR_3)
{
 BUF *VAR_4;
 bool VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 FUNC_1(VAR_4);

 return VAR_5;
}
