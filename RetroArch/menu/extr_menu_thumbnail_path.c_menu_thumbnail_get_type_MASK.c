
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int menu_thumbnails; unsigned int menu_left_thumbnails; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_8__ {int playlist_left_mode; int playlist_right_mode; } ;
typedef TYPE_3__ menu_thumbnail_path_data_t ;
typedef enum menu_thumbnail_id { ____Placeholder_menu_thumbnail_id } menu_thumbnail_id ;


 int VAR_0 ;


 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 char const* FUNC_1 (int ) ;

const char *FUNC_2(menu_thumbnail_path_data_t *VAR_2, enum menu_thumbnail_id VAR_3)
{
   settings_t *VAR_4 = FUNC_0();
   unsigned VAR_5 = 0;

   if (!VAR_2 || !VAR_4)
      return FUNC_1(VAR_0);

   switch (VAR_3)
   {
      case 128:
         if (VAR_2->playlist_right_mode != VAR_1)
            VAR_5 = (unsigned)VAR_2->playlist_right_mode - 1;
         else
            VAR_5 = VAR_4->uints.menu_thumbnails;
         break;
      case 129:
         if (VAR_2->playlist_left_mode != VAR_1)
            VAR_5 = (unsigned)VAR_2->playlist_left_mode - 1;
         else
            VAR_5 = VAR_4->uints.menu_left_thumbnails;
         break;
      default:
         return FUNC_1(VAR_0);
   }

   switch (VAR_5)
   {
      case 1:
         return "Named_Snaps";
      case 2:
         return "Named_Titles";
      case 3:
         return "Named_Boxarts";
      case 0:
      default:
         break;
   }

   return FUNC_1(VAR_0);
}
