
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static png_byte
FUNC_0(png_byte VAR_4[4], png_uint_32 VAR_5)
{
   png_byte VAR_6;

   if (VAR_5 & VAR_3)
   {
      VAR_6 = 3;

      VAR_4[2] = 1;
      {
         VAR_4[1] = 0;
         VAR_4[3] = 2;
      }
   }

   else
   {
      VAR_6 = 1;
      VAR_4[1] = VAR_4[2] = VAR_4[3] = 0;
   }

   if (VAR_5 & VAR_1)
   {
         VAR_4[0] = VAR_6;

      ++VAR_6;
   }

   else
      VAR_4[0] = 4;

   return VAR_6;
}
