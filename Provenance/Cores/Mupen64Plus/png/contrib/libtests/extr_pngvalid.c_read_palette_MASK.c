
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* store_palette ;
typedef int png_infop ;
typedef int png_const_structp ;
typedef TYPE_2__* png_colorp ;
typedef int* png_bytep ;
struct TYPE_7__ {int blue; int green; int red; } ;
struct TYPE_6__ {int alpha; int blue; int green; int red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,TYPE_2__**,int*) ;
 int FUNC_3 (int ,int ,int**,int*,int ) ;

__attribute__((used)) static int
FUNC_4(store_palette VAR_2, int *VAR_3, png_const_structp VAR_4,
   png_infop VAR_5)
{
   png_colorp VAR_6;
   png_bytep VAR_7;
   int VAR_8;

   VAR_6 = 0;
   *VAR_3 = -1;

   if (FUNC_2(VAR_4, VAR_5, &VAR_6, VAR_3) & VAR_0)
   {
      int VAR_9 = *VAR_3;

      if (VAR_9 <= 0 || VAR_9 > 256)
         FUNC_1(VAR_4, "validate: invalid PLTE count");

      while (--VAR_9 >= 0)
      {
         VAR_2[VAR_9].red = VAR_6[VAR_9].red;
         VAR_2[VAR_9].green = VAR_6[VAR_9].green;
         VAR_2[VAR_9].blue = VAR_6[VAR_9].blue;
      }




      FUNC_0(VAR_2 + *VAR_3, 126, (256-*VAR_3) * sizeof *VAR_2);
   }

   else
   {
      if (*VAR_3 != (-1))
         FUNC_1(VAR_4, "validate: invalid PLTE result");

      *VAR_3 = 0;
      FUNC_0(VAR_2, 113, sizeof (store_palette));
   }

   VAR_7 = 0;
   VAR_8 = 2;
   if ((FUNC_3(VAR_4, VAR_5, &VAR_7, &VAR_8, 0) & VAR_1) != 0 &&
      (VAR_7 != ((void*)0) || VAR_8 != 1 ) &&





      !(VAR_7 != ((void*)0) && VAR_8 == 0))
   {
      int VAR_10;







      if (VAR_7 == ((void*)0) || VAR_8 <= 0 || VAR_8 > 256 || VAR_8 > *VAR_3)
         FUNC_1(VAR_4, "validate: unexpected png_get_tRNS (palette) result");

      for (VAR_10=0; VAR_10<VAR_8; ++VAR_10)
         VAR_2[VAR_10].alpha = VAR_7[VAR_10];

      for (VAR_8=*VAR_3; VAR_10<VAR_8; ++VAR_10)
         VAR_2[VAR_10].alpha = 255;

      for (; VAR_10<256; ++VAR_10)
         VAR_2[VAR_10].alpha = 33;

      return 1;
   }

   else
   {

      int VAR_11;

      for (VAR_11=0, VAR_8=*VAR_3; VAR_11<VAR_8; ++VAR_11)
         VAR_2[VAR_11].alpha = 255;

      for (; VAR_11<256; ++VAR_11)
         VAR_2[VAR_11].alpha = 55;

      return 0;
   }
}
