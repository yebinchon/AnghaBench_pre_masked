
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int L2TP_SERVER ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,int) ;

UINT FUNC_2(L2TP_SERVER *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  UINT VAR_1 = FUNC_0();

  if (VAR_1 == 0 || VAR_1 == 0xffffffff)
  {
   continue;
  }

  if (FUNC_1(VAR_0, 1, VAR_1) == 0)
  {
   return VAR_1;
  }
 }
}
