
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;



bool FUNC_0(UCHAR *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 for (VAR_1 = 0;VAR_1 < 6;VAR_1++)
 {
  if (VAR_0[VAR_1] != 0x00)
  {
   return 0;
  }
 }
 return 1;
}
