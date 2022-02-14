
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {float alpha; float label_alpha; float y; float zoom; } ;
typedef TYPE_2__ xmb_node_t ;
struct TYPE_23__ {int icon_size; float items_passive_alpha; float items_passive_zoom; float margins_screen_top; float items_active_alpha; float items_active_zoom; int thumbnail_path_data; scalar_t__ is_db_manager_list; scalar_t__ is_playlist; scalar_t__ categories_selection_ptr; } ;
typedef TYPE_3__ xmb_handle_t ;
struct TYPE_21__ {int menu_xmb_animation_move_up_down; } ;
struct TYPE_24__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
typedef int menu_list_t ;
struct TYPE_25__ {int path_enabled; int label_enabled; int rich_label_enabled; int value_enabled; int sublabel_enabled; } ;
typedef TYPE_5__ menu_entry_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_26__ {float target_value; float* subject; uintptr_t tag; int duration; int easing_enum; int * cb; } ;
typedef TYPE_6__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 TYPE_4__* FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (uintptr_t*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,size_t*) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_5__*,int ,size_t,int *,int) ;
 unsigned int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 size_t FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,unsigned int*) ;
 unsigned int FUNC_13 (TYPE_3__*,unsigned int) ;
 float FUNC_14 (TYPE_3__*,unsigned int,size_t) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*,char*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,unsigned int) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,unsigned int,char) ;

__attribute__((used)) static void FUNC_21(
      xmb_handle_t *VAR_11, bool VAR_12)
{
   unsigned VAR_13, VAR_14, VAR_15;
   menu_animation_ctx_tag VAR_16;
   menu_entry_t VAR_17;
   size_t VAR_18 = 0;
   int VAR_19 = 0;
   menu_list_t *VAR_20 = ((void*)0);
   file_list_t *VAR_21 = FUNC_5(0);
   size_t VAR_22 = FUNC_10();

   if (!VAR_11)
      return;

   FUNC_4(VAR_4, &VAR_20);

   FUNC_9(&VAR_17);
   VAR_17.path_enabled = 0;
   VAR_17.label_enabled = 0;
   VAR_17.rich_label_enabled = 0;
   VAR_17.value_enabled = 0;
   VAR_17.sublabel_enabled = 0;
   FUNC_7(&VAR_17, 0, VAR_22, ((void*)0), 1);

   VAR_14 = (unsigned)FUNC_6();
   VAR_19 = VAR_11->icon_size * 10;

   FUNC_12(((void*)0), &VAR_15);

   VAR_16 = (uintptr_t)VAR_21;

   FUNC_2(&VAR_16);
   FUNC_4(VAR_5, &VAR_18);

   for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
   {
      float VAR_23, VAR_24;
      float VAR_25 = VAR_11->items_passive_alpha;
      float VAR_26 = VAR_11->items_passive_zoom;
      xmb_node_t *VAR_27 = (xmb_node_t*)
         FUNC_1(VAR_21, VAR_13);

      if (!VAR_27)
         continue;

      VAR_23 = FUNC_14(VAR_11, VAR_13, VAR_22);
      VAR_24 = VAR_23 + VAR_11->margins_screen_top;

      if (VAR_13 == VAR_22)
      {
         unsigned VAR_28 = (unsigned)FUNC_15(VAR_11, VAR_6);
         unsigned VAR_29 = FUNC_13(VAR_11, (unsigned)VAR_11->categories_selection_ptr);
         unsigned VAR_30 = FUNC_8(&VAR_17);

         VAR_25 = VAR_11->items_active_alpha;
         VAR_26 = VAR_11->items_active_zoom;
         if (
               FUNC_11(VAR_11->thumbnail_path_data, VAR_8) ||
               FUNC_11(VAR_11->thumbnail_path_data, VAR_7)
            )
         {
            bool VAR_31 = 0;


            if (((VAR_29 > VAR_10 && VAR_28 == 1) ||
                 (VAR_29 < VAR_10 && VAR_28 == 4)) &&
                VAR_11->is_playlist)
            {
               FUNC_16(VAR_11, ((void*)0));
               VAR_31 = 1;
            }


            else if (VAR_28 == 4 && VAR_11->is_db_manager_list)
            {
               FUNC_16(VAR_11, ((void*)0));
               VAR_31 = 1;
            }

            else if (
                  VAR_30 == VAR_3 ||
                  VAR_30 == VAR_2)
            {
               FUNC_16(VAR_11, "imageviewer");
               VAR_31 = 1;
            }

            if (VAR_31)
            {
               if (FUNC_11(VAR_11->thumbnail_path_data, VAR_8))
                  FUNC_20(VAR_11, VAR_13 , 'R');

               if (FUNC_11(VAR_11->thumbnail_path_data, VAR_7))
                  FUNC_20(VAR_11, VAR_13 , 'L');

               FUNC_19(VAR_11);
            }
         }

         FUNC_18(VAR_11, VAR_13);
         FUNC_17(VAR_11);
      }

      if ( (!VAR_12)
            || (VAR_24 < -VAR_19
               || VAR_24 > VAR_15+VAR_19))
      {
         VAR_27->alpha = VAR_27->label_alpha = VAR_25;
         VAR_27->y = VAR_23;
         VAR_27->zoom = VAR_26;
      }
      else
      {
         settings_t *VAR_32 = FUNC_0();


         menu_animation_ctx_entry_t VAR_33;

         VAR_33.target_value = VAR_25;
         VAR_33.subject = &VAR_27->alpha;
         VAR_33.tag = VAR_16;
         VAR_33.cb = ((void*)0);

         switch (VAR_32->uints.menu_xmb_animation_move_up_down)
         {
            case 0:
               VAR_33.duration = VAR_9;
               VAR_33.easing_enum = VAR_1;
               break;
            case 1:
               VAR_33.duration = VAR_9 * 4;
               VAR_33.easing_enum = VAR_0;
               break;
         }

         FUNC_3(&VAR_33);

         VAR_33.subject = &VAR_27->label_alpha;

         FUNC_3(&VAR_33);

         VAR_33.target_value = VAR_26;
         VAR_33.subject = &VAR_27->zoom;

         FUNC_3(&VAR_33);

         VAR_33.target_value = VAR_23;
         VAR_33.subject = &VAR_27->y;

         FUNC_3(&VAR_33);
      }
   }
}
