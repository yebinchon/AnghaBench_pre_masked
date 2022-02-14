
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



void FUNC_0(uint8_t *VAR_0, uint32_t *VAR_1, int VAR_2, int VAR_3) {

   int VAR_4;
   for (VAR_4 = 0; VAR_4 < VAR_2 * VAR_3; VAR_4+=1, VAR_0 += 3, VAR_1 += 1) {
      *VAR_1 = 0xFF << 24 | VAR_0[2] << 16 | VAR_0[1] << 8 | VAR_0[0] << 0;
   }
}
