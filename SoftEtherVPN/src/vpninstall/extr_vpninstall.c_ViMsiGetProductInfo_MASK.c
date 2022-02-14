
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef scalar_t__ UINT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,char*,int*) ;
 int FUNC_1 (char*,scalar_t__,char*) ;

bool FUNC_2(char *VAR_2, char *VAR_3, char *VAR_4, UINT VAR_5)
{
 UINT VAR_6;
 char VAR_7[VAR_1];
 DWORD VAR_8;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_8 = sizeof(VAR_7);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_7, &VAR_8);
 if (VAR_6 != VAR_0)
 {
  return 0;
 }

 FUNC_1(VAR_4, VAR_5, VAR_7);

 return 1;
}
