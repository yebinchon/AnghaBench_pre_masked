
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
struct TYPE_3__ {int* image; size_t cb_image; int cb_row; scalar_t__ image_h; } ;
typedef TYPE_1__ png_store ;
typedef int png_size_t ;
typedef int png_const_structp ;
typedef int* png_const_bytep ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(const png_store* VAR_0, png_const_structp VAR_1, int VAR_2)
{
   png_const_bytep VAR_3 = VAR_0->image;

   if (VAR_3[-1] != 0xed || VAR_3[VAR_0->cb_image] != 0xfe)
      FUNC_0(VAR_1, "image overwrite");
   else
   {
      png_size_t VAR_4 = VAR_0->cb_row;
      png_uint_32 VAR_5 = VAR_0->image_h;

      VAR_3 += VAR_2 * (VAR_4+5) * VAR_0->image_h;

      VAR_3 += 2;

      for (; VAR_5 > 0; --VAR_5)
      {
         if (VAR_3[-2] != 190 || VAR_3[-1] != 239)
            FUNC_0(VAR_1, "row start overwritten");

         if (VAR_3[VAR_4] != 222 || VAR_3[VAR_4+1] != 173 ||
            VAR_3[VAR_4+2] != 17)
            FUNC_0(VAR_1, "row end overwritten");

         VAR_3 += VAR_4+5;
      }
   }
}
