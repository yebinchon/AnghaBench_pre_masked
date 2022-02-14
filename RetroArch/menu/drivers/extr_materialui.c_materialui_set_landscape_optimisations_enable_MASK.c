
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int settings_t ;
struct TYPE_3__ {unsigned int landscape_entry_margin; int last_landscape_layout_optimization; scalar_t__ last_height; scalar_t__ nav_bar_layout_width; scalar_t__ last_width; int list_view_type; scalar_t__ is_portrait; } ;
typedef TYPE_1__ materialui_handle_t ;
__attribute__((used)) static void FUNC_0(
      materialui_handle_t *VAR_0, settings_t *VAR_1)
{
   bool VAR_2 = 0;
   VAR_0->landscape_entry_margin = 0;


   if (VAR_0->is_portrait)
      return;



   switch (VAR_0->last_landscape_layout_optimization)
   {
      case 136:
         VAR_2 = 1;
         break;
      case 134:

         switch (VAR_0->list_view_type)
         {
            case 128:
            case 129:
            case 130:
            case 131:
               VAR_2 = 0;
               break;
            case 132:
            case 133:
            default:
               VAR_2 = 1;
               break;
         }

         break;

      case 135:
      default:
         VAR_2 = 0;
         break;
   }


   if (VAR_2)
   {



      const float VAR_3 = 4.0f / 3.0f;
      float VAR_4 =
            ((float)(VAR_0->last_width - VAR_0->nav_bar_layout_width) -
                  (VAR_3 * (float)VAR_0->last_height)) / 2.0f;


      if (VAR_4 > 1.0f)
         VAR_0->landscape_entry_margin = (unsigned)VAR_4;
   }
}
