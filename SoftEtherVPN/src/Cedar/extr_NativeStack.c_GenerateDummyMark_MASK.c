
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PRAND ;


 int FUNC_0 (int *) ;

UINT FUNC_1(PRAND *VAR_0)
{
 UINT VAR_1;
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  VAR_1 = FUNC_0(VAR_0);

  if (VAR_1 >= 1000000000 && VAR_1 <= 0x7FFFFFFE)
  {
   return VAR_1;
  }
 }

 return 0;
}
