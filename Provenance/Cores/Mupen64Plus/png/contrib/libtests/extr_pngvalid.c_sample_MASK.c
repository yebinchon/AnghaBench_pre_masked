
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int* png_const_bytep ;
typedef int png_byte ;



__attribute__((used)) static unsigned int
FUNC_0(png_const_bytep VAR_0, png_byte VAR_1, png_byte VAR_2,
    png_uint_32 VAR_3, unsigned int VAR_4, int VAR_5, int VAR_6)
{
   png_uint_32 VAR_7, VAR_8;


   VAR_3 *= VAR_2;
   VAR_7 = VAR_3;

   if ((VAR_1 & 1) == 0)
   {
      if (VAR_1 & 2)
         VAR_7 *= 3;

      if (VAR_1 & 4)
         VAR_7 += VAR_3;


      if (VAR_1 & (2+4))
         VAR_7 += VAR_4 * VAR_2;
   }


   VAR_0 += VAR_7 >> 3;
   VAR_8 = *VAR_0;

   if (VAR_2 == 8)
      return VAR_8;

   else if (VAR_2 > 8)
   {
      if (VAR_5)
         return (*++VAR_0 << 8) + VAR_8;
      else
         return (VAR_8 << 8) + *++VAR_0;
   }





   VAR_7 &= 7;

   if (!VAR_6)
      VAR_7 = 8-VAR_7-VAR_2;

   return (VAR_8 >> VAR_7) & ((1U<<VAR_2)-1);
}
