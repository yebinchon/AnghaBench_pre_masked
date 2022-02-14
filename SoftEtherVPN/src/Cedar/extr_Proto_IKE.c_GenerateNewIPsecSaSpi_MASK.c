
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IKE_SERVER ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *,int) ;

UINT FUNC_2(IKE_SERVER *VAR_1, UINT VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  VAR_3 = FUNC_0();

  if (VAR_3 != VAR_2)
  {
   if (VAR_3 >= 4096 && VAR_3 != VAR_0)
   {
    if (FUNC_1(VAR_1, VAR_3) == ((void*)0))
    {
     return VAR_3;
    }
   }
  }
 }
}
