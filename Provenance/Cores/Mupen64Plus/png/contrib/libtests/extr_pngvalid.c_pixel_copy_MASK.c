
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int png_uint_32 ;
typedef unsigned int* png_const_bytep ;
typedef unsigned int* png_bytep ;
typedef unsigned int png_byte ;


 int FUNC_0 (unsigned int*,unsigned int*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(png_bytep VAR_0, png_uint_32 VAR_1,
   png_const_bytep VAR_2, png_uint_32 VAR_3, unsigned int VAR_4,
   int VAR_5)
{



   VAR_1 *= VAR_4;
   VAR_3 *= VAR_4;
   if (VAR_4 < 8)
   {

      unsigned int VAR_6 = ((1U<<VAR_4)-1) <<
         (VAR_5 ? VAR_1&7 : 8-VAR_4-(VAR_1&7));

      unsigned int VAR_7 = VAR_0[VAR_1 >> 3] & ~VAR_6;
      unsigned int VAR_8 = VAR_2[VAR_3 >> 3];


      VAR_3 &= 7;
      if (VAR_5)
      {
         if (VAR_3 > 0) VAR_8 >>= VAR_3;
         if ((VAR_1 & 7) > 0) VAR_8 <<= VAR_1 & 7;
      }

      else
      {
         if (VAR_3 > 0) VAR_8 <<= VAR_3;
         if ((VAR_1 & 7) > 0) VAR_8 >>= VAR_1 & 7;
      }

      VAR_0[VAR_1 >> 3] = (png_byte)(VAR_7 | (VAR_8 & VAR_6));
   }
   else
      FUNC_0(VAR_0+(VAR_1>>3), VAR_2+(VAR_3>>3), VAR_4>>3);
}
