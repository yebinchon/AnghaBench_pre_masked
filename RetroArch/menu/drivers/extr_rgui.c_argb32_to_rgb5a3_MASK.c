
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint32_t VAR_0)
{

   unsigned VAR_1 = (VAR_0 >> 24) & 0xff;
   unsigned VAR_2 = (VAR_0 >> 16) & 0xff;
   unsigned VAR_3 = (VAR_0 >> 8) & 0xff;
   unsigned VAR_4 = VAR_0 & 0xff;
   unsigned VAR_5 = VAR_1 >> 5;
   if (VAR_1 < 0xff)
   {







      unsigned VAR_6 = VAR_1 >> 4;
      float VAR_7 = 1.0;
      if (VAR_5 > 0)
      {

         VAR_7 = ((float)VAR_6 * (1.0 / 15.0)) / ((float)VAR_5 * (1.0 / 7.0));
      }
      VAR_2 = (unsigned)(((float)VAR_2 * VAR_7) + 0.5);
      VAR_3 = (unsigned)(((float)VAR_3 * VAR_7) + 0.5);
      VAR_4 = (unsigned)(((float)VAR_4 * VAR_7) + 0.5);



      VAR_2 = (VAR_2 <= 0xff) ? VAR_2 : 0xff;
      VAR_3 = (VAR_3 <= 0xff) ? VAR_3 : 0xff;
      VAR_4 = (VAR_4 <= 0xff) ? VAR_4 : 0xff;
   }

   VAR_2 = VAR_2 >> 4;
   VAR_3 = VAR_3 >> 4;
   VAR_4 = VAR_4 >> 4;

   return (VAR_5 << 12) | (VAR_2 << 8) | (VAR_3 << 4) | VAR_4;
}
