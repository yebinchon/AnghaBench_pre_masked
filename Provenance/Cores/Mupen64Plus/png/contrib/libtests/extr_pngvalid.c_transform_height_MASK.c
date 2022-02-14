
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int png_const_structp ;
typedef int png_byte ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static png_uint_32
FUNC_1(png_const_structp VAR_0, png_byte VAR_1, png_byte VAR_2)
{
   switch (FUNC_0(VAR_0, VAR_1, VAR_2))
   {
      case 1:
      case 2:
      case 4:
         return 1;

      case 8:
         return 2;

      case 16:
         return 512;

      case 24:
      case 32:
         return 512;

      case 48:
      case 64:
         return 2048;


      default:
         return 0;
   }
}
