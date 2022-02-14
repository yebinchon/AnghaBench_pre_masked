
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_row_infop ;
typedef int * png_bytep ;
typedef int png_byte ;
struct TYPE_3__ {int color_type; scalar_t__ width; int bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

void
FUNC_1(png_row_infop VAR_3, png_bytep VAR_4)
{
   FUNC_0(1, "in png_do_bgr");

   if ((VAR_3->color_type & VAR_0) != 0)
   {
      png_uint_32 VAR_5 = VAR_3->width;
      if (VAR_3->bit_depth == 8)
      {
         if (VAR_3->color_type == VAR_1)
         {
            png_bytep VAR_6;
            png_uint_32 VAR_7;

            for (VAR_7 = 0, VAR_6 = VAR_4; VAR_7 < VAR_5; VAR_7++, VAR_6 += 3)
            {
               png_byte VAR_8 = *VAR_6;
               *VAR_6 = *(VAR_6 + 2);
               *(VAR_6 + 2) = VAR_8;
            }
         }

         else if (VAR_3->color_type == VAR_2)
         {
            png_bytep VAR_9;
            png_uint_32 VAR_10;

            for (VAR_10 = 0, VAR_9 = VAR_4; VAR_10 < VAR_5; VAR_10++, VAR_9 += 4)
            {
               png_byte VAR_11 = *VAR_9;
               *VAR_9 = *(VAR_9 + 2);
               *(VAR_9 + 2) = VAR_11;
            }
         }
      }
   }
}
