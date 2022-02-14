
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_byte ;


 int FUNC_0 (int) ;

__attribute__((used)) static png_byte
FUNC_1(png_uint_32 VAR_0, png_uint_32 VAR_1,
    png_uint_32 VAR_2 )
{
   if (VAR_0 >= VAR_1 || VAR_1 < 128)
      return 255;




   else if (VAR_0 > 0)
   {





      if (VAR_1 < 65407)
      {
         VAR_0 *= VAR_2;
         VAR_0 += 64;
         VAR_0 >>= 7;
      }

      else
         VAR_0 *= 255;


      return (png_byte)FUNC_0(VAR_0);
   }

   else
      return 0;
}
