
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int L2TP_TUNNEL ;


 int * FUNC_0 (int *,int) ;

UINT FUNC_1(L2TP_TUNNEL *VAR_0, bool VAR_1)
{
 UINT VAR_2;
 UINT VAR_3 = 0xffff;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1)
 {
  VAR_3 = 0xfffffffe;
 }

 for (VAR_2 = 1;VAR_2 <= VAR_3;VAR_2++)
 {
  if (FUNC_0(VAR_0, VAR_2) == ((void*)0))
  {
   return VAR_2;
  }
 }

 return 0;
}
