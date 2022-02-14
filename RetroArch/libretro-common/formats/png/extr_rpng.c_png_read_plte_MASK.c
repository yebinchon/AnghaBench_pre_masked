
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static bool FUNC_0(uint8_t *VAR_0,
      uint32_t *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      uint32_t VAR_4 = VAR_0[3 * VAR_3 + 0];
      uint32_t VAR_5 = VAR_0[3 * VAR_3 + 1];
      uint32_t VAR_6 = VAR_0[3 * VAR_3 + 2];
      VAR_1[VAR_3] = (VAR_4 << 16) | (VAR_5 << 8) | (VAR_6 << 0) | (0xffu << 24);
   }

   return 1;
}
