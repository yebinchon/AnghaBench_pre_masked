
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_structp ;
typedef int png_infop ;
typedef int const png_fixed_point ;
struct TYPE_6__ {int use_update_info; } ;
struct TYPE_5__ {int do_background; double screen_gamma; double const file_gamma; double background_gamma; TYPE_2__ this; int background_color; scalar_t__ expand16; scalar_t__ scale16; } ;
typedef TYPE_1__ gamma_display ;


 int VAR_0 ;
 int VAR_1 ;
 int const FUNC_0 (double const) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,double const) ;
 int FUNC_4 (int ,int,int const) ;
 int FUNC_5 (int ,int *,int,int ,double const) ;
 int FUNC_6 (int ,int *,int,int ,int const) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,double const,double const) ;
 int FUNC_9 (int ,int const,int const) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_14(gamma_display *VAR_2, png_structp VAR_3, png_infop VAR_4)
{

   FUNC_12(&VAR_2->this, VAR_3, VAR_4);






   if (VAR_2->scale16)







            FUNC_1(VAR_3, "scale16 (16 to 8 bit conversion) not supported");



   if (VAR_2->expand16)



         FUNC_1(VAR_3, "expand16 (8 to 16 bit conversion) not supported");


   if (VAR_2->do_background >= VAR_0)
   {
         FUNC_1(VAR_3, "alpha mode handling not supported");

   }

   else
   {




      {
         png_fixed_point VAR_5 = FUNC_0(VAR_2->screen_gamma);
         png_fixed_point VAR_6 = FUNC_0(VAR_2->file_gamma);
         FUNC_9(VAR_3, VAR_5, VAR_6);
      }


      if (VAR_2->do_background)
      {
         FUNC_1(VAR_3, "png_set_background not supported");

      }
   }

   {
      int VAR_7 = VAR_2->this.use_update_info;

      do
         FUNC_2(VAR_3, VAR_4);
      while (--VAR_7 > 0);
   }


   FUNC_13(&VAR_2->this, VAR_3, VAR_4, 1 );
}
