
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static bool FUNC_0(uint8_t *VAR_0, uint32_t *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_0++, VAR_1++)
      *VAR_1 = (*VAR_1 & 0x00ffffff) | (unsigned)*VAR_0 << 24;

   return 1;
}
