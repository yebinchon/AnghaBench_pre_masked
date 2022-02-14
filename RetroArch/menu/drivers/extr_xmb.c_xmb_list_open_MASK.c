
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int depth; int old_depth; int icon_size; int textures_arrow_alpha; int x; int selection_ptr_old; int selection_buf_old; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_12__ {int menu_xmb_animation_opening_main_menu; } ;
struct TYPE_14__ {TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_15__ {int target_value; int tag; int duration; int * subject; int easing_enum; int * cb; } ;
typedef TYPE_4__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,int,size_t) ;
 int FUNC_7 (TYPE_2__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_8(xmb_handle_t *VAR_6)
{
   menu_animation_ctx_entry_t VAR_7;

   settings_t *VAR_8 = FUNC_0();
   int VAR_9 = 0;
   file_list_t *VAR_10 = FUNC_2(0);
   size_t VAR_11 = FUNC_3();

   VAR_6->depth = (int)FUNC_4(VAR_6, VAR_4);

   if (VAR_6->depth > VAR_6->old_depth)
      VAR_9 = 1;
   else if (VAR_6->depth < VAR_6->old_depth)
      VAR_9 = -1;
   else
      return;

   FUNC_5(VAR_6);

   FUNC_7(VAR_6, VAR_6->selection_buf_old,
         VAR_9, VAR_6->selection_ptr_old);
   FUNC_6(VAR_6, VAR_10,
         VAR_9, VAR_11);



   VAR_7.target_value = VAR_6->icon_size * -(VAR_6->depth*2-2);
   VAR_7.subject = &VAR_6->x;

   VAR_7.tag = -1;
   VAR_7.cb = ((void*)0);

   switch (VAR_8->uints.menu_xmb_animation_opening_main_menu)
   {
      case 0:
         VAR_7.easing_enum = VAR_3;
         VAR_7.duration = VAR_5;
         break;
      case 1:
         VAR_7.easing_enum = VAR_1;
         VAR_7.duration = VAR_5 * 2;
         break;
      case 2:
         VAR_7.easing_enum = VAR_2;
         VAR_7.duration = VAR_5 * 3;
         break;
      case 3:
         VAR_7.easing_enum = VAR_0;
         VAR_7.duration = VAR_5 * 4;
         break;
   }

   switch (VAR_6->depth)
   {
      case 1:
      case 2:
         FUNC_1(&VAR_7);

         VAR_7.target_value = VAR_6->depth - 1;
         VAR_7.subject = &VAR_6->textures_arrow_alpha;

         FUNC_1(&VAR_7);
         break;
   }

   VAR_6->old_depth = VAR_6->depth;
}
