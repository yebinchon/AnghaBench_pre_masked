
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ UINT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__) ;

UINT FUNC_2(BYTE *VAR_0, UINT VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if (VAR_1 == 0)
 {
  VAR_1 = FUNC_0((char *)VAR_0);
 }

 return (FUNC_1(VAR_0, VAR_1) + 1) * sizeof(wchar_t);
}
