
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int* png_const_bytep ;
typedef unsigned int* png_bytep ;
typedef unsigned int png_byte ;


 int FUNC_0 (unsigned int*,unsigned int*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(png_bytep VAR_0, png_const_bytep VAR_1, unsigned int VAR_2,
      int VAR_3)
{
   FUNC_0(VAR_0, VAR_1, VAR_2 >> 3);

   if ((VAR_2 & 7) != 0)
   {
      unsigned int VAR_4;

      VAR_0 += VAR_2 >> 3;
      VAR_1 += VAR_2 >> 3;
      if (VAR_3)
         VAR_4 = 0xff << (VAR_2 & 7);
      else
         VAR_4 = 0xff >> (VAR_2 & 7);
      *VAR_0 = (png_byte)((*VAR_0 & VAR_4) | (*VAR_1 & ~VAR_4));
   }
}
