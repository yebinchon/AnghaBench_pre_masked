
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;



bool FUNC_0(void *VAR_0, UINT VAR_1)
{
 UINT VAR_2;
 UCHAR *VAR_3 = (UCHAR *)VAR_0;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 1;
 }

 for (VAR_2 = 0;VAR_2 < VAR_1;VAR_2++)
 {
  if (VAR_3[VAR_2] != 0)
  {
   return 0;
  }
 }

 return 1;
}
