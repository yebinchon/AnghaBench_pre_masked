
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 () ;

UINT FUNC_1(wchar_t VAR_0)
{
 BYTE VAR_1, VAR_2;

 if (FUNC_0())
 {
  if (sizeof(wchar_t) == 2)
  {
   VAR_1 = ((BYTE *)&VAR_0)[0];
   VAR_2 = ((BYTE *)&VAR_0)[1];
  }
  else
  {
   VAR_1 = ((BYTE *)&VAR_0)[2];
   VAR_2 = ((BYTE *)&VAR_0)[3];
  }
 }
 else
 {
  VAR_1 = ((BYTE *)&VAR_0)[1];
  VAR_2 = ((BYTE *)&VAR_0)[0];
 }

 if (VAR_1 == 0)
 {
  if (VAR_2 <= 0x7f)
  {

   return 1;
  }
  else
  {

   return 2;
  }
 }
 if ((VAR_1 & 0xf8) == 0)
 {

  return 2;
 }

 return 3;
}
