
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int* png_const_bytep ;


 scalar_t__ FUNC_0 (int*,int*,int) ;

__attribute__((used)) static int
FUNC_1(png_const_bytep VAR_0, png_const_bytep VAR_1, png_uint_32 VAR_2)
{

   if (FUNC_0(VAR_0, VAR_1, VAR_2>>3) == 0)
   {
      png_uint_32 VAR_3;

      if ((VAR_2 & 7) == 0) return 0;


      VAR_3 = VAR_0[VAR_2 >> 3];
      VAR_3 ^= VAR_1[VAR_2 >> 3];

      if (VAR_3 == 0) return 0;




      VAR_2 &= 7;
      VAR_3 >>= 8-VAR_2;

      if (VAR_3 == 0) return 0;
   }
   {
      png_uint_32 VAR_4 = 0;

      while (VAR_0[VAR_4] == VAR_1[VAR_4]) ++VAR_4;
      return 1+VAR_4;
   }
}
