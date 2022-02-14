
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BYTE ;



UINT FUNC_0(BYTE *VAR_0, UINT VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if ((VAR_2 + 1) > VAR_1)
 {
  return 0;
 }
 if ((VAR_0[VAR_2] & 0x80) == 0)
 {

  return 1;
 }
 if ((VAR_0[VAR_2] & 0x20) == 0)
 {

  if ((VAR_2 + 2) > VAR_1)
  {
   return 0;
  }
  return 2;
 }

 if ((VAR_2 + 3) > VAR_1)
 {
  return 0;
 }
 return 3;
}
