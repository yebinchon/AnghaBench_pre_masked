
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,char*) ;
 char* FUNC_3 (int) ;

bool FUNC_4(wchar_t *VAR_1, UINT VAR_2)
{
 char *VAR_3;
 UINT VAR_4 = VAR_2;
 if (VAR_1 == ((void*)0) || VAR_2 < sizeof(wchar_t))
 {
  return 0;
 }
 if (VAR_4 >= 0x7fffffff)
 {
  VAR_4 = VAR_0;
 }
 VAR_4 *= 2;

 VAR_3 = FUNC_3(VAR_4);

 FUNC_0(VAR_3, VAR_4);

 FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_3);

 return 1;
}
