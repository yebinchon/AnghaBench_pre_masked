
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *,scalar_t__,int *,scalar_t__) ;
 int * FUNC_3 (scalar_t__) ;

wchar_t *FUNC_4(char *VAR_0)
{
 UINT VAR_1;
 wchar_t *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_0);

 VAR_1 = FUNC_0((BYTE *)VAR_0, VAR_3);
 VAR_2 = FUNC_3(VAR_1 + sizeof(wchar_t));
 FUNC_2(VAR_2, VAR_1, (BYTE *)VAR_0, VAR_3);

 return VAR_2;
}
