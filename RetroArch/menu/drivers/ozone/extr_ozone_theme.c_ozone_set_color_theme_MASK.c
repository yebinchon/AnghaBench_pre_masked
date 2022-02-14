
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int message_background; int entries_icon; int entries_border; int selection; int selection_border; } ;
typedef TYPE_2__ ozone_theme_t ;
struct TYPE_9__ {int message_background; int cursor_alpha; int entries_checkmark; int entries_icon; int entries_border; int selection; int selection_border; } ;
struct TYPE_11__ {TYPE_2__* theme; TYPE_1__ theme_dynamic; } ;
typedef TYPE_3__ ozone_handle_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;

void FUNC_2(ozone_handle_t *VAR_5, unsigned VAR_6)
{
   ozone_theme_t *VAR_7 = VAR_1;

   if (!VAR_5)
      return;

   switch (VAR_6)
   {
      case 1:
         VAR_7 = &VAR_3;
         break;
      case 0:
         VAR_7 = &VAR_4;
         break;
      default:
         break;
   }

   VAR_5->theme = VAR_7;

   FUNC_0(VAR_5->theme_dynamic.selection_border, VAR_5->theme->selection_border, sizeof(VAR_5->theme_dynamic.selection_border));
   FUNC_0(VAR_5->theme_dynamic.selection, VAR_5->theme->selection, sizeof(VAR_5->theme_dynamic.selection));
   FUNC_0(VAR_5->theme_dynamic.entries_border, VAR_5->theme->entries_border, sizeof(VAR_5->theme_dynamic.entries_border));
   FUNC_0(VAR_5->theme_dynamic.entries_icon, VAR_5->theme->entries_icon, sizeof(VAR_5->theme_dynamic.entries_icon));
   FUNC_0(VAR_5->theme_dynamic.entries_checkmark, VAR_2, sizeof(VAR_5->theme_dynamic.entries_checkmark));
   FUNC_0(VAR_5->theme_dynamic.cursor_alpha, VAR_2, sizeof(VAR_5->theme_dynamic.cursor_alpha));
   FUNC_0(VAR_5->theme_dynamic.message_background, VAR_5->theme->message_background, sizeof(VAR_5->theme_dynamic.message_background));

   FUNC_1(VAR_5);

   VAR_0 = VAR_6;
}
