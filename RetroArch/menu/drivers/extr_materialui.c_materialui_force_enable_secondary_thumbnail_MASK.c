
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ menu_left_thumbnails; scalar_t__ menu_thumbnails; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {int thumbnail_path_data; } ;
typedef TYPE_3__ materialui_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(
      materialui_handle_t *VAR_3, settings_t *VAR_4)
{


   if (FUNC_0(
         VAR_3->thumbnail_path_data, VAR_0))
      return 1;



   if (VAR_4->uints.menu_left_thumbnails == 0)
   {






      if (VAR_4->uints.menu_thumbnails ==
            VAR_2)
         VAR_4->uints.menu_left_thumbnails =
               VAR_1;
      else
         VAR_4->uints.menu_left_thumbnails =
               VAR_2;
   }



   return FUNC_0(
         VAR_3->thumbnail_path_data, VAR_0);
}
