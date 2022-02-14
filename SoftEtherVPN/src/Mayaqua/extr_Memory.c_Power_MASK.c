
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;



UINT FUNC_0(UINT VAR_0, UINT VAR_1)
{
 UINT VAR_2, VAR_3;
 if (VAR_0 == 0)
 {
  return 0;
 }
 if (VAR_1 == 0)
 {
  return 1;
 }

 VAR_2 = 1;
 for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
 {
  VAR_2 *= VAR_0;
 }

 return VAR_2;
}
