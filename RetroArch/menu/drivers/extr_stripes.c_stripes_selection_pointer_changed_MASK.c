
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float alpha; float label_alpha; float y; float zoom; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_8__ {int icon_size; float items_passive_alpha; float items_passive_zoom; float margins_screen_top; } ;
typedef TYPE_2__ stripes_handle_t ;
typedef int menu_list_t ;
typedef int menu_entry_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_9__ {float target_value; float* subject; uintptr_t tag; int * cb; int easing_enum; int duration; } ;
typedef TYPE_3__ menu_animation_ctx_entry_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (uintptr_t*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,size_t*) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int ,size_t,int *,int) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 () ;
 float FUNC_9 (TYPE_2__*,unsigned int,size_t) ;
 char* FUNC_10 (char) ;
 int FUNC_11 (int *,unsigned int*) ;

__attribute__((used)) static void FUNC_12(
      stripes_handle_t *VAR_4, bool VAR_5)
{
   unsigned VAR_6, VAR_7, VAR_8;
   menu_animation_ctx_tag VAR_9;
   menu_entry_t VAR_10;
   size_t VAR_11 = 0;
   int VAR_12 = 0;
   menu_list_t *VAR_13 = ((void*)0);
   file_list_t *VAR_14 = FUNC_4(0);
   size_t VAR_15 = FUNC_8();
   const char *VAR_16 = FUNC_10('R');
   const char *VAR_17= FUNC_10('L');

   FUNC_3(VAR_1, &VAR_13);
   FUNC_7(&VAR_10);

   if (!VAR_4)
      return;

   FUNC_6(&VAR_10, 0, VAR_15, ((void*)0), 1);

   VAR_7 = (unsigned)FUNC_5();
   VAR_12 = VAR_4->icon_size * 10;

   FUNC_11(((void*)0), &VAR_8);

   VAR_9 = (uintptr_t)VAR_14;

   FUNC_1(&VAR_9);
   FUNC_3(VAR_2, &VAR_11);

   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   {
      float VAR_18, VAR_19;
      float VAR_20 = VAR_4->items_passive_alpha;
      float VAR_21 = VAR_4->items_passive_zoom;
      stripes_node_t *VAR_22 = (stripes_node_t*)
         FUNC_0(VAR_14, VAR_6);

      if (!VAR_22)
         continue;

      VAR_18 = FUNC_9(VAR_4, VAR_6, VAR_15);
      VAR_19 = VAR_18 + VAR_4->margins_screen_top;

      if ( (!VAR_5)
            || (VAR_19 < -VAR_12
            || VAR_19 > VAR_8+VAR_12))
      {
         VAR_22->alpha = VAR_22->label_alpha = VAR_20;
         VAR_22->y = VAR_18;
         VAR_22->zoom = VAR_21;
      }
      else
      {
         menu_animation_ctx_entry_t VAR_23;

         VAR_23.duration = VAR_3;
         VAR_23.target_value = VAR_20;
         VAR_23.subject = &VAR_22->alpha;
         VAR_23.easing_enum = VAR_0;
         VAR_23.tag = VAR_9;
         VAR_23.cb = ((void*)0);

         FUNC_2(&VAR_23);

         VAR_23.subject = &VAR_22->label_alpha;

         FUNC_2(&VAR_23);

         VAR_23.target_value = VAR_21;
         VAR_23.subject = &VAR_22->zoom;

         FUNC_2(&VAR_23);

         VAR_23.target_value = VAR_18;
         VAR_23.subject = &VAR_22->y;

         FUNC_2(&VAR_23);
      }
   }
}
