
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

UINT FUNC_3(IP *VAR_0)
{
 UINT VAR_1;

 if (FUNC_2(VAR_0) == 0)
 {
  return 0;
 }

 for (VAR_1 = 0;VAR_1 <= 128;VAR_1++)
 {
  IP VAR_2;

  FUNC_1(&VAR_2, VAR_1);

  if (FUNC_0(VAR_0, &VAR_2) == 0)
  {
   return VAR_1;
  }
 }

 return 0;
}
