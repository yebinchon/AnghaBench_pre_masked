
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int use_update_info; } ;
typedef TYPE_1__ standard_display ;
typedef int png_structp ;
typedef int png_infop ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(standard_display *VAR_0, png_structp VAR_1, png_infop VAR_2,
    int VAR_3)
{



   FUNC_2(VAR_0, VAR_1, VAR_2);




   if (VAR_0->use_update_info)
   {

      int VAR_4 = VAR_0->use_update_info;
      while (VAR_4-- > 0)
         FUNC_0(VAR_1, VAR_2);
   }

   else
      FUNC_1(VAR_1);




   FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
}
