
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;

UINT FUNC_2(BYTE *VAR_0, UINT VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }
 if (VAR_1 == 0)
 {
  VAR_1 = FUNC_1((char *)VAR_0);
 }

 VAR_2 = VAR_3 = 0;
 while (1)
 {
  UINT VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_4 == 0)
  {
   break;
  }
  VAR_2 += VAR_4;
  VAR_3++;
 }

 return VAR_3;
}
