
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



void FUNC_0(void *VAR_0, int VAR_1, uint64_t VAR_2)
{
   unsigned char *VAR_3 = VAR_0;
   VAR_3[VAR_1 + 0] = (VAR_2 >> 56) & 0xff;
   VAR_3[VAR_1 + 1] = (VAR_2 >> 48) & 0xff;
   VAR_3[VAR_1 + 2] = (VAR_2 >> 40) & 0xff;
   VAR_3[VAR_1 + 3] = (VAR_2 >> 32) & 0xff;
   VAR_3[VAR_1 + 4] = (VAR_2 >> 24) & 0xff;
   VAR_3[VAR_1 + 5] = (VAR_2 >> 16) & 0xff;
   VAR_3[VAR_1 + 6] = (VAR_2 >> 8) & 0xff;
   VAR_3[VAR_1 + 7] = (VAR_2 >> 0) & 0xff;
}
