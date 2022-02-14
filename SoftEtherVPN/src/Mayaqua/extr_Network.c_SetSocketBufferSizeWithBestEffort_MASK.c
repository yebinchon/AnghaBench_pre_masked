
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ SOCKET ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;

UINT FUNC_1(SOCKET VAR_1, bool VAR_2, UINT VAR_3)
{

 if (VAR_1 == VAR_0)
 {
  return 0;
 }

 while (1)
 {
  if (FUNC_0(VAR_1, VAR_2, VAR_3))
  {
   return VAR_3;
  }

  VAR_3 = (UINT)((double)VAR_3 / 1.5);

  if (VAR_3 <= 32767)
  {
   return 0;
  }
 }
}
