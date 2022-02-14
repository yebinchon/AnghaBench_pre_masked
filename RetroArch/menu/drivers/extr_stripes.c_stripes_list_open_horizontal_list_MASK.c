
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int alpha; } ;
typedef TYPE_1__ stripes_node_t ;
struct TYPE_10__ {size_t system_tab_end; unsigned int categories_active_idx; float categories_active_alpha; int depth; float categories_passive_alpha; } ;
typedef TYPE_2__ stripes_handle_t ;
struct TYPE_11__ {float target_value; int tag; int * subject; int * cb; int easing_enum; int duration; } ;
typedef TYPE_3__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,unsigned int) ;
 size_t FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3(stripes_handle_t *VAR_3)
{
   unsigned VAR_4;
   size_t VAR_5 = FUNC_2(VAR_3, VAR_1)
      + VAR_3->system_tab_end;

   for (VAR_4 = 0; VAR_4 <= VAR_5; VAR_4++)
   {
      menu_animation_ctx_entry_t VAR_6;
      float VAR_7 = 0;
      stripes_node_t *VAR_8 = FUNC_1(VAR_3, VAR_4);

      if (!VAR_8)
         continue;

      if (VAR_4 == VAR_3->categories_active_idx)
         VAR_7 = VAR_3->categories_active_alpha;
      else if (VAR_3->depth <= 1)
         VAR_7 = VAR_3->categories_passive_alpha;

      VAR_6.duration = VAR_2;
      VAR_6.target_value = VAR_7;
      VAR_6.subject = &VAR_8->alpha;
      VAR_6.easing_enum = VAR_0;

      VAR_6.tag = -1;
      VAR_6.cb = ((void*)0);

      if (VAR_6.subject)
         FUNC_0(&VAR_6);
   }
}
