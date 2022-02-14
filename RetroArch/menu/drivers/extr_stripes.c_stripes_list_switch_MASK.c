
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ categories_selection_ptr; scalar_t__ categories_selection_ptr_old; int categories_active_idx; float categories_passive_width; unsigned int categories_active_idx_old; int selection_ptr_old; int selection_buf_old; int categories_x_pos; } ;
typedef TYPE_2__ stripes_handle_t ;
struct TYPE_17__ {scalar_t__ menu_horizontal_animation; } ;
struct TYPE_19__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_20__ {int path; } ;
typedef TYPE_4__ menu_entry_t ;
struct TYPE_21__ {float target_value; int tag; int * subject; int * cb; int easing_enum; int duration; } ;
typedef TYPE_5__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,size_t,int *,int) ;
 int FUNC_4 (TYPE_4__*) ;
 size_t FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *,int,size_t) ;
 int FUNC_11 (TYPE_2__*,int ,int,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (char) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int ,char) ;

__attribute__((used)) static void FUNC_16(stripes_handle_t *VAR_3)
{
   menu_animation_ctx_entry_t VAR_4;
   int VAR_5 = -1;
   file_list_t *VAR_6 = FUNC_2(0);
   size_t VAR_7 = FUNC_5();
   settings_t *VAR_8 = FUNC_0();

   if (VAR_3->categories_selection_ptr > VAR_3->categories_selection_ptr_old)
      VAR_5 = 1;

   VAR_3->categories_active_idx += VAR_5;

   FUNC_9(VAR_3);

   VAR_4.duration = VAR_2;
   VAR_4.target_value = VAR_3->categories_passive_width
      * -(float)VAR_3->categories_selection_ptr;
   VAR_4.subject = &VAR_3->categories_x_pos;
   VAR_4.easing_enum = VAR_0;

   VAR_4.tag = -1;
   VAR_4.cb = ((void*)0);

   if (VAR_4.subject)
      FUNC_1(&VAR_4);

   VAR_5 = -1;
   if (VAR_3->categories_selection_ptr > VAR_3->categories_selection_ptr_old)
      VAR_5 = 1;

   FUNC_11(VAR_3, VAR_3->selection_buf_old,
         VAR_5, VAR_3->selection_ptr_old);


   if (VAR_8->bools.menu_horizontal_animation)
      FUNC_10(VAR_3, VAR_6, VAR_5, VAR_7);
   VAR_3->categories_active_idx_old = (unsigned)VAR_3->categories_selection_ptr;

   if (!FUNC_8(FUNC_13('R'),
            FUNC_6(VAR_1)))
   {
      menu_entry_t VAR_9;

      FUNC_4(&VAR_9);
      FUNC_3(&VAR_9, 0, VAR_7, ((void*)0), 1);

      if (!FUNC_7(VAR_9.path))
         FUNC_12(VAR_3, VAR_9.path, 0 );

      FUNC_15(VAR_3, 0, 'R');
      FUNC_14(VAR_3);
   }
   if (!FUNC_8(FUNC_13('L'),
            FUNC_6(VAR_1)))
   {
      menu_entry_t VAR_10;

      FUNC_4(&VAR_10);
      FUNC_3(&VAR_10, 0, VAR_7, ((void*)0), 1);

      if (!FUNC_7(VAR_10.path))
         FUNC_12(VAR_3, VAR_10.path, 0 );

      FUNC_15(VAR_3, 0, 'L');
      FUNC_14(VAR_3);
   }
}
