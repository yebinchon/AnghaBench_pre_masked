
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* png_bytep ;
typedef int png_byte ;


 unsigned int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(png_bytep VAR_0, png_bytep VAR_1,
   unsigned int* VAR_2, int VAR_3, int VAR_4)
{
   if (*VAR_1 == 0)
   {
      *VAR_0 = 0;
      if (VAR_3)
         *VAR_1 = 1;
      else
         *VAR_1 = 8;
      *VAR_2 = 0;
      return 1;
   }

   if (*VAR_0 < 4 )
   {



      unsigned int VAR_5 = ++*VAR_2;
      png_byte VAR_6 = *VAR_0;

      if (((VAR_6 == 0 || VAR_6 == 2) && VAR_4 && VAR_5 < 2) ||
          (VAR_6 == 3 && VAR_5 < FUNC_0(*VAR_1)))
         return 1;


      *VAR_2 = 0;
   }

   *VAR_1 = (png_byte)(*VAR_1 << 1);


   if (*VAR_1 <= 8



      )
      return 1;


   switch (*VAR_0)
   {
      case 0:
         *VAR_0 = 2;
         *VAR_1 = 8;
         return 1;

      case 2:
         *VAR_0 = 3;
         *VAR_1 = 1;
         return 1;

      case 3:
         *VAR_0 = 4;
         *VAR_1 = 8;
         return 1;

      case 4:
         *VAR_0 = 6;
         *VAR_1 = 8;
         return 1;

      default:
         return 0;
   }
}
