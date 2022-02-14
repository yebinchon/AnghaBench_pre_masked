
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {float alpha; float label_alpha; int x; float y; int zoom; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_13__ {int icon_size; float margins_screen_top; float items_active_alpha; float items_passive_alpha; int old_depth; int depth; int thumbnail_path_data; scalar_t__ is_db_manager_list; scalar_t__ is_playlist; scalar_t__ categories_selection_ptr; int categories_active_zoom; int categories_passive_zoom; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_14__ {float target_value; float* subject; uintptr_t tag; int * cb; int easing_enum; int duration; } ;
typedef TYPE_3__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,size_t*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,unsigned int*) ;
 unsigned int FUNC_6 (TYPE_2__*,unsigned int) ;
 float FUNC_7 (TYPE_2__*,unsigned int,size_t) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,char) ;

__attribute__((used)) static void FUNC_12(xmb_handle_t *VAR_6,
      file_list_t *VAR_7, int VAR_8, size_t VAR_9)
{
   unsigned VAR_10, VAR_11;
   unsigned VAR_12 = 0;
   size_t VAR_13 = 0;
   int VAR_14 = VAR_6->icon_size * 10;
   size_t VAR_15 = FUNC_0(VAR_7);

   FUNC_5(((void*)0), &VAR_11);

   for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++)
   {
      float VAR_16;
      float VAR_17;
      xmb_node_t *VAR_18 = (xmb_node_t*)
         FUNC_1(VAR_7, VAR_10);

      if (!VAR_18)
         continue;

      if (VAR_8 == 1)
      {
         VAR_18->alpha = 0;
         VAR_18->label_alpha = 0;
      }
      else if (VAR_8 == -1)
      {
         if (VAR_10 != VAR_9)
            VAR_18->alpha = 0;
         VAR_18->label_alpha = 0;
      }

      VAR_18->x = VAR_6->icon_size * VAR_8 * 2;
      VAR_18->y = FUNC_7(VAR_6, VAR_10, VAR_9);
      VAR_18->zoom = VAR_6->categories_passive_zoom;

      VAR_17 = VAR_18->y + VAR_6->margins_screen_top;

      if (VAR_10 == VAR_9)
      {
         VAR_18->zoom = VAR_6->categories_active_zoom;
         VAR_16 = VAR_6->items_active_alpha;
      }
      else
         VAR_16 = VAR_6->items_passive_alpha;

      if (VAR_17 < -VAR_14 || VAR_17 > VAR_11+VAR_14)
      {
         VAR_18->alpha = VAR_18->label_alpha = VAR_16;
         VAR_18->x = 0;
      }
      else
      {
         menu_animation_ctx_entry_t VAR_19;

         VAR_19.duration = VAR_4;
         VAR_19.target_value = VAR_16;
         VAR_19.subject = &VAR_18->alpha;
         VAR_19.easing_enum = VAR_0;
         VAR_19.tag = (uintptr_t)VAR_7;
         VAR_19.cb = ((void*)0);

         FUNC_2(&VAR_19);

         VAR_19.subject = &VAR_18->label_alpha;

         FUNC_2(&VAR_19);

         VAR_19.target_value = 0;
         VAR_19.subject = &VAR_18->x;

         FUNC_2(&VAR_19);
      }
   }

   VAR_6->old_depth = VAR_6->depth;
   FUNC_3(VAR_1, &VAR_13);

   VAR_12 = FUNC_6(VAR_6,
         (unsigned)VAR_6->categories_selection_ptr);

   if (VAR_12 <= VAR_5)
   {
      if ( FUNC_4(VAR_6->thumbnail_path_data, VAR_3) ||
            FUNC_4(VAR_6->thumbnail_path_data, VAR_2))
      {




         if (VAR_6->depth != 5)
            FUNC_9(VAR_6);

         if (VAR_6->is_playlist || VAR_6->is_db_manager_list)
         {
            FUNC_8(VAR_6, ((void*)0));

            if (FUNC_4(VAR_6->thumbnail_path_data, VAR_3))
               FUNC_11(VAR_6, 0 , 'R');

            if (FUNC_4(VAR_6->thumbnail_path_data, VAR_2))
               FUNC_11(VAR_6, 0 , 'L');

            FUNC_10(VAR_6);
         }
      }
   }
}
