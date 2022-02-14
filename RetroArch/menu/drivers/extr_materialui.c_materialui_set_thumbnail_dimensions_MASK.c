
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int font_height; } ;
struct TYPE_6__ {int font_height; } ;
struct TYPE_8__ {TYPE_2__ hint; TYPE_1__ list; } ;
struct TYPE_9__ {int list_view_type; int thumbnail_height_max; int icon_size; unsigned int thumbnail_width_max; int dip_base_unit_size; int margin; int landscape_entry_margin; scalar_t__ nav_bar_layout_width; scalar_t__ last_width; TYPE_3__ font_data; } ;
typedef TYPE_4__ materialui_handle_t ;
 float VAR_0 ;

__attribute__((used)) static void FUNC_0(materialui_handle_t *VAR_1)
{
   switch (VAR_1->list_view_type)
   {
      case 128:


         VAR_1->thumbnail_height_max = VAR_1->icon_size;


         VAR_1->thumbnail_width_max =
               (unsigned)(((float)VAR_1->thumbnail_height_max *
                     VAR_0) + 0.5f);

         break;

      case 129:






         VAR_1->thumbnail_height_max =
               VAR_1->font_data.list.font_height +
               (3 * VAR_1->font_data.hint.font_height) +
               (VAR_1->dip_base_unit_size / 10);






         VAR_1->thumbnail_width_max =
               (unsigned)(((float)VAR_1->thumbnail_height_max *
                     VAR_0) + 0.5f);

         break;

      case 130:






         VAR_1->thumbnail_height_max =
               (VAR_1->font_data.list.font_height +
                (3 * VAR_1->font_data.hint.font_height)) * 2;


         VAR_1->thumbnail_width_max =
               (unsigned)(((float)VAR_1->thumbnail_height_max *
                     VAR_0) + 0.5f);

         break;

      case 131:
         {







            int VAR_2 =
                  (int)VAR_1->last_width - (int)(VAR_1->margin * 3) -
                  (int)(VAR_1->landscape_entry_margin * 2) - (int)VAR_1->nav_bar_layout_width;


            if (VAR_2 < 2)
            {
               VAR_1->thumbnail_width_max = 0;
               VAR_1->thumbnail_height_max = 0;
            }


            VAR_1->thumbnail_width_max = (VAR_2 >> 1);


            VAR_1->thumbnail_height_max =
                  (unsigned)(((float)VAR_1->thumbnail_width_max *
                        (1.0f / VAR_0)) + 0.5f);
         }
         break;

      case 132:
      case 133:
      default:


         VAR_1->thumbnail_height_max = 0;
         VAR_1->thumbnail_width_max = 0;
         break;
   }
}
