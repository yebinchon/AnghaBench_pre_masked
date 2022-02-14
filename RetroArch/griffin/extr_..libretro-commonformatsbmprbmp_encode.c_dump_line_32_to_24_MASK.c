
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const uint32_t *VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;

   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   {
      uint32_t VAR_4 = *VAR_1++;
      *VAR_0++ = (VAR_4 >> 0) & 0xff;
      *VAR_0++ = (VAR_4 >> 8) & 0xff;
      *VAR_0++ = (VAR_4 >> 16) & 0xff;
   }
}
