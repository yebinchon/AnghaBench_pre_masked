
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct texture_image {unsigned int* pixels; int width; int height; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static bool FUNC_1(
      unsigned VAR_0,
      struct texture_image *VAR_1,
      struct texture_image *VAR_2)
{
   uint32_t VAR_3, VAR_4;
   unsigned VAR_5, VAR_6;
   unsigned VAR_7, VAR_8;


   if ((VAR_0 < 1) || !VAR_1 || !VAR_2)
      return 0;

   if (!VAR_1->pixels || (VAR_1->width < 1) || (VAR_1->height < 1))
      return 0;


   VAR_2->width = VAR_1->width * VAR_0;
   VAR_2->height = VAR_1->height * VAR_0;


   VAR_2->pixels = (uint32_t*)FUNC_0(VAR_2->width * VAR_2->height, sizeof(uint32_t));
   if (!VAR_2->pixels)
      return 0;


   VAR_3 = ((VAR_1->width << 16) / VAR_2->width);
   VAR_4 = ((VAR_1->height << 16) / VAR_2->height);

   for (VAR_8 = 0; VAR_8 < VAR_2->height; VAR_8++)
   {
      VAR_6 = (VAR_8 * VAR_4) >> 16;
      for (VAR_7 = 0; VAR_7 < VAR_2->width; VAR_7++)
      {
         VAR_5 = (VAR_7 * VAR_3) >> 16;
         VAR_2->pixels[(VAR_8 * VAR_2->width) + VAR_7] = VAR_1->pixels[(VAR_6 * VAR_1->width) + VAR_5];
      }
   }

   return 1;
}
