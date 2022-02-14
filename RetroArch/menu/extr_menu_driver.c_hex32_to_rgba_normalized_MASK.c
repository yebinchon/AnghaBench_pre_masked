
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



void FUNC_0(uint32_t VAR_0, float* VAR_1, float VAR_2)
{
   VAR_1[0] = VAR_1[4] = VAR_1[8] = VAR_1[12] = ((VAR_0 >> 16) & 0xFF) * (1.0f / 255.0f);
   VAR_1[1] = VAR_1[5] = VAR_1[9] = VAR_1[13] = ((VAR_0 >> 8 ) & 0xFF) * (1.0f / 255.0f);
   VAR_1[2] = VAR_1[6] = VAR_1[10] = VAR_1[14] = ((VAR_0 >> 0 ) & 0xFF) * (1.0f / 255.0f);
   VAR_1[3] = VAR_1[7] = VAR_1[11] = VAR_1[15] = VAR_2;
}
