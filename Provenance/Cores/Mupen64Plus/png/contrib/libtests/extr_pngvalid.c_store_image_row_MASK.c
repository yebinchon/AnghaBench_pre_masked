
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_3__ {int image_h; int cb_row; scalar_t__ cb_image; int * image; } ;
typedef TYPE_1__ png_store ;
typedef scalar_t__ png_size_t ;
typedef int png_const_structp ;
typedef int * png_bytep ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static png_bytep
FUNC_1(const png_store* VAR_0, png_const_structp VAR_1, int VAR_2,
   png_uint_32 VAR_3)
{
   png_size_t VAR_4 = (VAR_2 * VAR_0->image_h + VAR_3) * (VAR_0->cb_row + 5) + 2;

   if (VAR_0->image == ((void*)0))
      FUNC_0(VAR_1, "no allocated image");

   if (VAR_4 + VAR_0->cb_row + 3 > VAR_0->cb_image)
      FUNC_0(VAR_1, "image too small");

   return VAR_0->image + VAR_4;
}
