
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__,int *) ;
 char* FUNC_2 (scalar_t__) ;

char *FUNC_3(wchar_t *VAR_0)
{
 UINT VAR_1;
 char *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_1 + sizeof(char));

 FUNC_1((char *)VAR_2, VAR_1, VAR_0);

 return VAR_2;
}
