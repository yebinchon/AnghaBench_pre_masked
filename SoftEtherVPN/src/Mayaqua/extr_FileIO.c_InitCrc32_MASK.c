
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int* VAR_0 ;

void FUNC_0()
{
 UINT VAR_1 = 0xEDB88320;
 UINT VAR_2, VAR_3, VAR_4;

 for (VAR_3 = 0;VAR_3 < 256;VAR_3++)
 {
  VAR_2 = VAR_3;

  for (VAR_4 = 0;VAR_4 < 8;VAR_4++)
  {
   if ((VAR_2 & 0x1) != 0)
   {
    VAR_2 = (VAR_2 >> 1) ^ VAR_1;
   }
   else
   {
    VAR_2 >>= 1;
   }
  }

  VAR_0[VAR_3] = VAR_2;
 }
}
