
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {float alpha; float label_alpha; float zoom; int x; void* y; } ;
typedef TYPE_2__ xmb_node_t ;
struct TYPE_12__ {int use_ps3_layout; int margins_screen_left; int margins_screen_top; int margins_title_left; int margins_title_top; int margins_title_bottom; int margins_label_left; int margins_label_top; int margins_setting_left; int icon_spacing_horizontal; int icon_spacing_vertical; int icon_size; float items_passive_alpha; float items_passive_zoom; float items_active_alpha; int depth; int * selection_buf_old; scalar_t__ selection_ptr_old; } ;
typedef TYPE_3__ xmb_handle_t ;
struct TYPE_10__ {int menu_xmb_layout; } ;
struct TYPE_13__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
typedef int file_list_t ;


 int FUNC_0 (char*,int) ;
 TYPE_4__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 size_t FUNC_6 () ;
 int FUNC_7 (unsigned int*,unsigned int*) ;
 void* FUNC_8 (TYPE_3__*,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_3__*,unsigned int) ;
 int FUNC_10 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static void FUNC_11(xmb_handle_t *VAR_0)
{
   unsigned VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
   settings_t *VAR_6 = FUNC_1();
   file_list_t *VAR_7 = FUNC_4(0);
   size_t VAR_8 = FUNC_6();

   FUNC_7(&VAR_1, &VAR_2);

   switch (VAR_6->uints.menu_xmb_layout)
   {

      case 0:
         {
            VAR_0->use_ps3_layout = 0;
            VAR_0->use_ps3_layout = VAR_1 > 320 && VAR_2 > 240;


            if (VAR_0->use_ps3_layout)
               FUNC_9(VAR_0, VAR_1);
            else
               FUNC_10(VAR_0, VAR_1);
         }
         break;

      case 1:
         VAR_0->use_ps3_layout = 1;
         FUNC_9(VAR_0, VAR_1);
         break;

      case 2:
         VAR_0->use_ps3_layout = 0;
         FUNC_10(VAR_0, VAR_1);
         break;
   }
   VAR_4 = (unsigned)VAR_8;
   VAR_5 = (unsigned)FUNC_5();

   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   {
      float VAR_9 = VAR_0->items_passive_alpha;
      float VAR_10 = VAR_0->items_passive_zoom;
      xmb_node_t *VAR_11 = (xmb_node_t*)FUNC_3(
            VAR_7, VAR_3);

      if (!VAR_11)
         continue;

      if (VAR_3 == VAR_4)
      {
         VAR_9 = VAR_0->items_active_alpha;
         VAR_10 = VAR_0->items_active_alpha;
      }

      VAR_11->alpha = VAR_9;
      VAR_11->label_alpha = VAR_9;
      VAR_11->zoom = VAR_10;
      VAR_11->y = FUNC_8(VAR_0, VAR_3, VAR_4);
   }

   if (VAR_0->depth <= 1)
      return;

   VAR_4 = (unsigned)VAR_0->selection_ptr_old;
   VAR_5 = (unsigned)FUNC_2(VAR_0->selection_buf_old);

   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   {
      float VAR_12 = 0;
      float VAR_13 = VAR_0->items_passive_zoom;
      xmb_node_t *VAR_14 = (xmb_node_t*)FUNC_3(
            VAR_0->selection_buf_old, VAR_3);

      if (!VAR_14)
         continue;

      if (VAR_3 == VAR_4)
      {
         VAR_12 = VAR_0->items_active_alpha;
         VAR_13 = VAR_0->items_active_alpha;
      }

      VAR_14->alpha = VAR_12;
      VAR_14->label_alpha = 0;
      VAR_14->zoom = VAR_13;
      VAR_14->y = FUNC_8(VAR_0, VAR_3, VAR_4);
      VAR_14->x = VAR_0->icon_size * 1 * -2;
   }
}
