
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float y; float alpha; float label_alpha; int x; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_7__ {int icon_size; float items_active_alpha; float margins_screen_top; } ;
typedef TYPE_2__ stripes_handle_t ;
struct TYPE_8__ {float target_value; float* subject; uintptr_t tag; int * cb; int easing_enum; int duration; } ;
typedef TYPE_3__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,unsigned int*) ;

__attribute__((used)) static void FUNC_4(stripes_handle_t *VAR_2,
      file_list_t *VAR_3, int VAR_4, size_t VAR_5)
{
   unsigned VAR_6, VAR_7 = 0;
   int VAR_8 = VAR_2->icon_size * 10;
   size_t VAR_9 = 0;

   VAR_9 = FUNC_0(VAR_3);

   FUNC_3(((void*)0), &VAR_7);

   for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
   {
      float VAR_10 = 0;
      float VAR_11;
      stripes_node_t *VAR_12 = (stripes_node_t*)
         FUNC_1(VAR_3, VAR_6);

      if (!VAR_12)
         continue;

      if (VAR_6 == VAR_5)
         VAR_10 = VAR_2->items_active_alpha;
      if (VAR_4 == -1)
         VAR_10 = 0;

      VAR_11 = VAR_12->y + VAR_2->margins_screen_top;

      if (VAR_11 < -VAR_8 || VAR_11 > VAR_7+VAR_8)
      {
         VAR_12->alpha = VAR_10;
         VAR_12->label_alpha = 0;
         VAR_12->x = VAR_2->icon_size * VAR_4 * -2;
      }
      else
      {
         menu_animation_ctx_entry_t VAR_13;

         VAR_13.duration = VAR_1;
         VAR_13.target_value = VAR_10;
         VAR_13.subject = &VAR_12->alpha;
         VAR_13.easing_enum = VAR_0;
         VAR_13.tag = (uintptr_t)VAR_3;
         VAR_13.cb = ((void*)0);

         FUNC_2(&VAR_13);

         VAR_13.target_value = 0;
         VAR_13.subject = &VAR_12->label_alpha;

         FUNC_2(&VAR_13);

         VAR_13.target_value = VAR_2->icon_size * VAR_4 * -2;
         VAR_13.subject = &VAR_12->x;

         FUNC_2(&VAR_13);
      }
   }
}
