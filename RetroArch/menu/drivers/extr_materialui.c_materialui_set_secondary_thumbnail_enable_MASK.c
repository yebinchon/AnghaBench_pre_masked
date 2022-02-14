
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int menu_materialui_dual_thumbnail_list_view_enable; } ;
struct TYPE_11__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {scalar_t__ width; } ;
struct TYPE_12__ {int list_view_type; int secondary_thumbnail_enabled; int margin; int landscape_entry_margin; int thumbnail_width_max; TYPE_2__ scrollbar; int is_portrait; scalar_t__ nav_bar_layout_width; scalar_t__ last_width; } ;
typedef TYPE_4__ materialui_handle_t ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(
      materialui_handle_t *VAR_0, settings_t *VAR_1)
{
   switch (VAR_0->list_view_type)
   {
      case 128:
      case 129:
      case 130:

         {
            int VAR_2 = 0;
            int VAR_3 = 0;


            VAR_0->secondary_thumbnail_enabled = 0;



            if (!VAR_1->bools.menu_materialui_dual_thumbnail_list_view_enable)
               return;



            if (!FUNC_0(VAR_0, VAR_1))
               return;






            VAR_2 =
                  (int)VAR_0->last_width - (int)(VAR_0->margin * 2) -
                  (int)(VAR_0->landscape_entry_margin * 2) - (int)VAR_0->nav_bar_layout_width;



            if (VAR_0->is_portrait)
               VAR_3 = (int)VAR_0->scrollbar.width;


            else
               if (VAR_0->landscape_entry_margin < VAR_0->margin)
                  VAR_3 = (int)(VAR_0->margin - VAR_0->landscape_entry_margin);



            VAR_2 -= 2 * ((int)VAR_0->thumbnail_width_max + VAR_3);




            VAR_0->secondary_thumbnail_enabled =
                  VAR_2 > (int)(VAR_0->thumbnail_width_max * 2);
         }
         break;
      case 131:







         FUNC_0(VAR_0, VAR_1);
         VAR_0->secondary_thumbnail_enabled = 1;
         break;
      case 132:
      case 133:
      default:

         VAR_0->secondary_thumbnail_enabled = 0;
         break;
   }
}
