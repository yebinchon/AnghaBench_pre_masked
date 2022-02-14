
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int depth; int old_depth; int icon_size; int textures_arrow_alpha; int x; int selection_ptr_old; int selection_buf_old; } ;
typedef TYPE_1__ stripes_handle_t ;
struct TYPE_10__ {int target_value; int tag; int * subject; int * cb; int easing_enum; int duration; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ) ;
 size_t FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,int,size_t) ;
 int FUNC_6 (TYPE_1__*,int ,int,int ) ;

__attribute__((used)) static void FUNC_7(stripes_handle_t *VAR_3)
{
   menu_animation_ctx_entry_t VAR_4;

   int VAR_5 = 0;
   file_list_t *VAR_6 = FUNC_1(0);
   size_t VAR_7 = FUNC_2();

   VAR_3->depth = (int)FUNC_3(VAR_3, VAR_1);

   if (VAR_3->depth > VAR_3->old_depth)
      VAR_5 = 1;
   else if (VAR_3->depth < VAR_3->old_depth)
      VAR_5 = -1;

   FUNC_4(VAR_3);

   FUNC_6(VAR_3, VAR_3->selection_buf_old,
         VAR_5, VAR_3->selection_ptr_old);
   FUNC_5(VAR_3, VAR_6,
         VAR_5, VAR_7);

   VAR_4.duration = VAR_2;
   VAR_4.target_value = VAR_3->icon_size * -(VAR_3->depth*2-2);
   VAR_4.subject = &VAR_3->x;
   VAR_4.easing_enum = VAR_0;

   VAR_4.tag = -1;
   VAR_4.cb = ((void*)0);

   switch (VAR_3->depth)
   {
      case 1:
         FUNC_0(&VAR_4);

         VAR_4.target_value = 0;
         VAR_4.subject = &VAR_3->textures_arrow_alpha;

         FUNC_0(&VAR_4);
         break;
      case 2:
         FUNC_0(&VAR_4);

         VAR_4.target_value = 1;
         VAR_4.subject = &VAR_3->textures_arrow_alpha;

         FUNC_0(&VAR_4);
         break;
   }

   VAR_3->old_depth = VAR_3->depth;
}
