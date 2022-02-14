
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint16_t *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      uint16_t VAR_4 = *VAR_1++;
      uint8_t VAR_5 = (VAR_4 >> 0) & 0x1f;
      uint8_t VAR_6 = (VAR_4 >> 5) & 0x3f;
      uint8_t VAR_7 = (VAR_4 >> 11) & 0x1f;
      *VAR_0++ = (VAR_5 << 3) | (VAR_5 >> 2);
      *VAR_0++ = (VAR_6 << 2) | (VAR_6 >> 4);
      *VAR_0++ = (VAR_7 << 3) | (VAR_7 >> 2);
   }
}
