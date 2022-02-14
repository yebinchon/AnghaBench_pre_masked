
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* image; size_t cb_image; } ;
typedef TYPE_1__ png_store ;
typedef int * png_const_structp ;
typedef int* png_bytep ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int *,char*,int) ;

__attribute__((used)) static void
FUNC_3(png_store *VAR_0, png_const_structp VAR_1)
{
   if (VAR_0->image != ((void*)0))
   {
      png_bytep VAR_2 = VAR_0->image;

      if (VAR_2[-1] != 0xed || VAR_2[VAR_0->cb_image] != 0xfe)
      {
         if (VAR_1 != ((void*)0))
            FUNC_1(VAR_1, "png_store image overwrite (1)");
         else
            FUNC_2(VAR_0, ((void*)0), "png_store image overwrite (2)", 1);
      }

      VAR_0->image = ((void*)0);
      VAR_0->cb_image = 0;
      --VAR_2;
      FUNC_0(VAR_2);
   }
}
