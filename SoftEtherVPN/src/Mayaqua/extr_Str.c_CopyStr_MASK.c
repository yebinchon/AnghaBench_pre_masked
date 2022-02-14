
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (char*) ;

char *FUNC_3(char *VAR_0)
{
 UINT VAR_1;
 char *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_1 + 1);
 FUNC_1(VAR_2, VAR_1 + 1, VAR_0);
 return VAR_2;
}
