
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* png_row_infop ;
typedef int * png_bytep ;
typedef scalar_t__ png_byte ;
struct TYPE_3__ {int bit_depth; int rowbytes; int channels; int width; scalar_t__ pixel_depth; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void



FUNC_1(png_row_infop VAR_0, png_bytep VAR_1)
{
   FUNC_0(1, "in png_do_chop");

   if (VAR_0->bit_depth == 16)
   {
      png_bytep VAR_2 = VAR_1;
      png_bytep VAR_3 = VAR_1;
      png_bytep VAR_4 = VAR_2 + VAR_0->rowbytes;

      while (VAR_2 < VAR_4)
      {
         *VAR_3++ = *VAR_2;
         VAR_2 += 2;
      }

      VAR_0->bit_depth = 8;
      VAR_0->pixel_depth = (png_byte)(8 * VAR_0->channels);
      VAR_0->rowbytes = VAR_0->width * VAR_0->channels;
   }
}
