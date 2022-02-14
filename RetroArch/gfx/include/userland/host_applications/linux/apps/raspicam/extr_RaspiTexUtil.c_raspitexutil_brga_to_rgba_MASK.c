
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



void FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
   uint8_t* VAR_2 = VAR_0;
   uint8_t* VAR_3 = VAR_0 + VAR_1;

   while (VAR_2 < VAR_3)
   {
      uint8_t VAR_4 = VAR_2[0];
      VAR_2[0] = VAR_2[2];
      VAR_2[2] = VAR_4;
      VAR_2 += 4;
   }
}
