
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixel_size; int bit_width; int cbRow; int h; int ps; scalar_t__ filler; } ;
typedef TYPE_1__ standard_display ;
typedef int png_const_structp ;
typedef int png_const_infop ;
typedef int png_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_7(standard_display *VAR_2, png_const_structp VAR_3,
    png_const_infop VAR_4, int VAR_5)
{

   {
      png_byte VAR_6 = FUNC_3(VAR_3, VAR_4);
      png_byte VAR_7 = FUNC_2(VAR_3, VAR_4);

      if (VAR_7 >= 8 && (VAR_6 == VAR_1 || VAR_6 == VAR_0) &&
          VAR_2->filler)
          VAR_6 |= 4;

      VAR_2->pixel_size = FUNC_0(VAR_3, VAR_6, VAR_7);
   }
   VAR_2->bit_width = FUNC_4(VAR_3, VAR_4) * VAR_2->pixel_size;
   VAR_2->cbRow = FUNC_5(VAR_3, VAR_4);


   if (VAR_2->cbRow != (VAR_2->bit_width+7)/8)
      FUNC_1(VAR_3, "bad png_get_rowbytes calculation");


   FUNC_6(VAR_2->ps, VAR_3, VAR_5, VAR_2->cbRow, VAR_2->h);
}
