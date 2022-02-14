
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ categories_selection_ptr; scalar_t__ categories_selection_ptr_old; int categories_active_idx; float icon_spacing_horizontal; unsigned int categories_active_idx_old; int thumbnail_path_data; scalar_t__ is_playlist; int selection_ptr_old; int selection_buf_old; int categories_x_pos; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_15__ {scalar_t__ menu_horizontal_animation; } ;
struct TYPE_17__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_18__ {float target_value; int tag; int * subject; int * cb; int easing_enum; int duration; } ;
typedef TYPE_4__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,int,size_t) ;
 int FUNC_7 (TYPE_2__*,int ,int,int ) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,char) ;

__attribute__((used)) static void FUNC_12(xmb_handle_t *VAR_4)
{
   menu_animation_ctx_entry_t VAR_5;
   int VAR_6 = -1;
   file_list_t *VAR_7 = FUNC_2(0);
   size_t VAR_8 = FUNC_3();
   settings_t *VAR_9 = FUNC_0();

   if (VAR_4->categories_selection_ptr > VAR_4->categories_selection_ptr_old)
      VAR_6 = 1;

   VAR_4->categories_active_idx += VAR_6;

   FUNC_5(VAR_4);

   VAR_5.duration = VAR_3;
   VAR_5.target_value = VAR_4->icon_spacing_horizontal
      * -(float)VAR_4->categories_selection_ptr;
   VAR_5.subject = &VAR_4->categories_x_pos;
   VAR_5.easing_enum = VAR_0;

   VAR_5.tag = -1;
   VAR_5.cb = ((void*)0);

   if (VAR_5.subject)
      FUNC_1(&VAR_5);

   VAR_6 = -1;
   if (VAR_4->categories_selection_ptr > VAR_4->categories_selection_ptr_old)
      VAR_6 = 1;

   FUNC_7(VAR_4, VAR_4->selection_buf_old,
         VAR_6, VAR_4->selection_ptr_old);


   if (VAR_9->bools.menu_horizontal_animation)
      FUNC_6(VAR_4, VAR_7, VAR_6, VAR_8);
   VAR_4->categories_active_idx_old = (unsigned)VAR_4->categories_selection_ptr;

   if (FUNC_4(VAR_4->thumbnail_path_data, VAR_2) ||
       FUNC_4(VAR_4->thumbnail_path_data, VAR_1))
   {
      FUNC_9(VAR_4);

      if (VAR_4->is_playlist)
      {
         FUNC_8(VAR_4, ((void*)0));

         if (FUNC_4(VAR_4->thumbnail_path_data, VAR_2))
            FUNC_11(VAR_4, 0 , 'R');

         if (FUNC_4(VAR_4->thumbnail_path_data, VAR_1))
            FUNC_11(VAR_4, 0 , 'L');

         FUNC_10(VAR_4);
      }
   }
}
