
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {float alpha; float label_alpha; int x; float y; int zoom; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_12__ {int icon_size; float margins_screen_top; float items_passive_alpha; float items_active_alpha; int old_depth; int depth; scalar_t__ categories_selection_ptr; int categories_active_zoom; int categories_passive_zoom; } ;
typedef TYPE_2__ stripes_handle_t ;
struct TYPE_13__ {float target_value; float* subject; uintptr_t tag; int * cb; int easing_enum; int duration; } ;
typedef TYPE_3__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,size_t*) ;
 unsigned int FUNC_4 (TYPE_2__*,unsigned int) ;
 float FUNC_5 (TYPE_2__*,unsigned int,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,char) ;
 int FUNC_9 (int *,unsigned int*) ;

__attribute__((used)) static void FUNC_10(stripes_handle_t *VAR_4,
      file_list_t *VAR_5, int VAR_6, size_t VAR_7)
{
   unsigned VAR_8, VAR_9;
   unsigned VAR_10 = 0;
   size_t VAR_11 = 0;
   int VAR_12 = VAR_4->icon_size * 10;
   size_t VAR_13 = FUNC_0(VAR_5);

   FUNC_9(((void*)0), &VAR_9);

   for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
   {
      float VAR_14;
      float VAR_15;
      stripes_node_t *VAR_16 = (stripes_node_t*)
         FUNC_1(VAR_5, VAR_8);

      if (!VAR_16)
         continue;

      if (VAR_6 == 1 || (VAR_6 == -1 && VAR_8 != VAR_7))
         VAR_16->alpha = 0;

      if (VAR_6 == 1 || VAR_6 == -1)
         VAR_16->label_alpha = 0;

      VAR_16->x = VAR_4->icon_size * VAR_6 * 2;
      VAR_16->y = FUNC_5(VAR_4, VAR_8, VAR_7);
      VAR_16->zoom = VAR_4->categories_passive_zoom;

      VAR_15 = VAR_16->y + VAR_4->margins_screen_top;

      if (VAR_8 == VAR_7)
         VAR_16->zoom = VAR_4->categories_active_zoom;

      VAR_14 = VAR_4->items_passive_alpha;
      if (VAR_8 == VAR_7)
         VAR_14 = VAR_4->items_active_alpha;

      if (VAR_15 < -VAR_12 || VAR_15 > VAR_9+VAR_12)
      {
         VAR_16->alpha = VAR_16->label_alpha = VAR_14;
         VAR_16->x = 0;
      }
      else
      {
         menu_animation_ctx_entry_t VAR_17;

         VAR_17.duration = VAR_2;
         VAR_17.target_value = VAR_14;
         VAR_17.subject = &VAR_16->alpha;
         VAR_17.easing_enum = VAR_0;
         VAR_17.tag = (uintptr_t)VAR_5;
         VAR_17.cb = ((void*)0);

         FUNC_2(&VAR_17);

         VAR_17.subject = &VAR_16->label_alpha;

         FUNC_2(&VAR_17);

         VAR_17.target_value = 0;
         VAR_17.subject = &VAR_16->x;

         FUNC_2(&VAR_17);
      }
   }

   VAR_4->old_depth = VAR_4->depth;
   FUNC_3(VAR_1, &VAR_11);

   VAR_10 = FUNC_4(VAR_4,
         (unsigned)VAR_4->categories_selection_ptr);

   if (VAR_10 <= VAR_3)
   {
      if (VAR_4->depth < 4)
         FUNC_6(VAR_4);
      FUNC_8(VAR_4, 0, 'R');
      FUNC_7(VAR_4);
      FUNC_8(VAR_4, 0, 'L');
      FUNC_7(VAR_4);
   }
}
