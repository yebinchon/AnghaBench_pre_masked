
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint32_t VAR_0)
{

   unsigned VAR_1 = (VAR_0 >> 24) & 0xff;
   unsigned VAR_2 = (VAR_0 >> 16) & 0xff;
   unsigned VAR_3 = (VAR_0 >> 8) & 0xff;
   unsigned VAR_4 = VAR_0 & 0xff;
   if (VAR_1 < 0xff)
   {
      float VAR_5 = (float)VAR_1 * (1.0 / 255.0);
      VAR_2 = (unsigned)(((float)VAR_2 * VAR_5) + 0.5) & 0xff;
      VAR_3 = (unsigned)(((float)VAR_3 * VAR_5) + 0.5) & 0xff;
      VAR_4 = (unsigned)(((float)VAR_4 * VAR_5) + 0.5) & 0xff;
   }

   VAR_2 = VAR_2 >> 3;
   VAR_3 = VAR_3 >> 3;
   VAR_4 = VAR_4 >> 3;

   return (1 << 15) | (VAR_4 << 10) | (VAR_3 << 5) | VAR_2;
}
