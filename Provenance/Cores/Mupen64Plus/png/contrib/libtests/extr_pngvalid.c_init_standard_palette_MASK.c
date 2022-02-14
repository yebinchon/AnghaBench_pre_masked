
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int red; int green; int blue; int alpha; } ;
typedef TYPE_1__ store_palette_entry ;
typedef int png_structp ;
typedef int png_store ;
typedef int png_infop ;
struct TYPE_6__ {int red; int green; int blue; } ;
typedef TYPE_2__ png_color ;
typedef int png_byte ;


 TYPE_1__* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int) ;
 int FUNC_2 (int ,int ,int*,int,int ) ;

__attribute__((used)) static void
FUNC_3(png_store *VAR_0, png_structp VAR_1, png_infop VAR_2, int VAR_3,
   int VAR_4)
{
   store_palette_entry *VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4);

   {
      int VAR_6;
      png_color VAR_7[256];


      for (VAR_6=0; VAR_6<VAR_3; ++VAR_6)
      {
         VAR_7[VAR_6].red = VAR_5[VAR_6].red;
         VAR_7[VAR_6].green = VAR_5[VAR_6].green;
         VAR_7[VAR_6].blue = VAR_5[VAR_6].blue;
      }


      for (; VAR_6<256; ++VAR_6)
         VAR_7[VAR_6].red = VAR_7[VAR_6].green = VAR_7[VAR_6].blue = 42;

      FUNC_1(VAR_1, VAR_2, VAR_7, VAR_3);
   }

   if (VAR_4)
   {
      int VAR_8, VAR_9;
      png_byte VAR_10[256];


      for (VAR_8=VAR_9=0; VAR_8<VAR_3; ++VAR_8)
         if ((VAR_10[VAR_8] = VAR_5[VAR_8].alpha) < 255)
            VAR_9 = VAR_8+1;


      for (; VAR_8<256; ++VAR_8)
         VAR_10[VAR_8] = 24;





   }
}
