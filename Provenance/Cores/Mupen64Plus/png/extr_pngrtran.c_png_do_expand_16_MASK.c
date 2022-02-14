
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_row_infop ;
typedef scalar_t__* png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_3__ {int bit_depth; scalar_t__ color_type; int rowbytes; int channels; scalar_t__ pixel_depth; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(png_row_infop VAR_1, png_bytep VAR_2)
{
   if (VAR_1->bit_depth == 8 &&
      VAR_1->color_type != VAR_0)
   {
      png_byte *VAR_3 = VAR_2 + VAR_1->rowbytes;
      png_byte *VAR_4 = VAR_3 + VAR_1->rowbytes;
      while (VAR_4 > VAR_3)
         VAR_4[-2] = VAR_4[-1] = *--VAR_3, VAR_4 -= 2;

      VAR_1->rowbytes *= 2;
      VAR_1->bit_depth = 16;
      VAR_1->pixel_depth = (png_byte)(VAR_1->channels * 16);
   }
}
