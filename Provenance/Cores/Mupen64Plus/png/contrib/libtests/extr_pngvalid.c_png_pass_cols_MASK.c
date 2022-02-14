
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;


 int** VAR_0 ;

__attribute__((used)) static png_uint_32
FUNC_0(png_uint_32 VAR_1, int VAR_2)
{
   png_uint_32 VAR_3 = VAR_1>>3;
   png_uint_32 VAR_4 = 0;
   unsigned int VAR_5, VAR_6;

   VAR_1 &= 7;
   ++VAR_2;
   for (VAR_5=0; VAR_5<8; ++VAR_5) for (VAR_6=0; VAR_6<8; ++VAR_6) if (VAR_0[VAR_6][VAR_5] == VAR_2)
   {
      VAR_4 += VAR_3;
      if (VAR_5 < VAR_1) ++VAR_4;
      break;
   }

   return VAR_4;
}
