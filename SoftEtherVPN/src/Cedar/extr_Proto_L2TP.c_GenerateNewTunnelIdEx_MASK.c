
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int L2TP_SERVER ;
typedef int IP ;


 int * FUNC_0 (int *,int *,int,int) ;

UINT FUNC_1(L2TP_SERVER *VAR_0, IP *VAR_1, bool VAR_2)
{
 UINT VAR_3;
 UINT VAR_4 = 0xffff;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2)
 {
  VAR_4 = 0xfffffffe;
 }

 for (VAR_3 = 1;VAR_3 <= VAR_4;VAR_3++)
 {
  if (FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2) == ((void*)0))
  {
   return VAR_3;
  }
 }

 return 0;
}
