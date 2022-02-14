
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int zoom; int alpha; } ;
typedef TYPE_2__ xmb_node_t ;
struct TYPE_14__ {size_t system_tab_end; float categories_passive_alpha; float categories_passive_zoom; unsigned int categories_active_idx; float categories_active_alpha; float categories_active_zoom; } ;
typedef TYPE_3__ xmb_handle_t ;
struct TYPE_12__ {int menu_xmb_animation_horizontal_highlight; } ;
struct TYPE_15__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_16__ {float target_value; int tag; int duration; int * subject; int easing_enum; int * cb; } ;
typedef TYPE_5__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,unsigned int) ;
 size_t FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(xmb_handle_t *VAR_5)
{
   unsigned VAR_6;
   size_t VAR_7 = FUNC_3(VAR_5, VAR_3)
      + VAR_5->system_tab_end;

   for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++)
   {
      menu_animation_ctx_entry_t VAR_8;
      settings_t *VAR_9 = FUNC_0();
      float VAR_10 = VAR_5->categories_passive_alpha;
      float VAR_11 = VAR_5->categories_passive_zoom;
      xmb_node_t *VAR_12 = FUNC_2(VAR_5, VAR_6);

      if (!VAR_12)
         continue;

      if (VAR_6 == VAR_5->categories_active_idx)
      {
         VAR_10 = VAR_5->categories_active_alpha;
         VAR_11 = VAR_5->categories_active_zoom;
      }



      VAR_8.target_value = VAR_10;
      VAR_8.subject = &VAR_12->alpha;

      VAR_8.tag = -1;
      VAR_8.cb = ((void*)0);

      switch (VAR_9->uints.menu_xmb_animation_horizontal_highlight)
      {
         case 0:
            VAR_8.duration = VAR_4;
            VAR_8.easing_enum = VAR_2;
            break;
         case 1:
            VAR_8.duration = VAR_4 + (VAR_4 / 2);
            VAR_8.easing_enum = VAR_0;
            break;
         case 2:
            VAR_8.duration = VAR_4 * 2;
            VAR_8.easing_enum = VAR_1;
            break;
      }

      FUNC_1(&VAR_8);

      VAR_8.target_value = VAR_11;
      VAR_8.subject = &VAR_12->zoom;

      FUNC_1(&VAR_8);
   }
}
