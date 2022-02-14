
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



uint64_t FUNC_0(const void *VAR_0, int VAR_1)
{
   const unsigned char *VAR_2 = VAR_0;
   return ((uint64_t)VAR_2[VAR_1 + 0] << 56) | ((uint64_t)VAR_2[VAR_1 + 1] << 48) |
          ((uint64_t)VAR_2[VAR_1 + 2] << 40) | ((uint64_t)VAR_2[VAR_1 + 3] << 32) |
          (VAR_2[VAR_1 + 4] << 24) | (VAR_2[VAR_1 + 5] << 16) |
          (VAR_2[VAR_1 + 6] << 8) | (VAR_2[VAR_1 + 7] << 0);
}
