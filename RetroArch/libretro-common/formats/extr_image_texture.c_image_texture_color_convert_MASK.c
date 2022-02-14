
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef size_t uint32_t ;
struct texture_image {size_t width; size_t height; scalar_t__ pixels; } ;



bool FUNC_0(unsigned VAR_0,
      unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
      struct texture_image *VAR_4)
{

   if (VAR_3 != 24 || VAR_0 != 16 || VAR_1 != 8 || VAR_2 != 0)
   {
      uint32_t VAR_5;
      uint32_t VAR_6 = VAR_4->width * VAR_4->height;
      uint32_t *VAR_7 = (uint32_t*)VAR_4->pixels;

      for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
      {
         uint32_t VAR_8 = VAR_7[VAR_5];
         uint8_t VAR_9 = (uint8_t)(VAR_8 >> 24);
         uint8_t VAR_10 = (uint8_t)(VAR_8 >> 16);
         uint8_t VAR_11 = (uint8_t)(VAR_8 >> 8);
         uint8_t VAR_12 = (uint8_t)(VAR_8 >> 0);
         VAR_7[VAR_5] = (VAR_9 << VAR_3) |
            (VAR_10 << VAR_0) | (VAR_11 << VAR_1) | (VAR_12 << VAR_2);
      }

      return 1;
   }

   return 0;
}
