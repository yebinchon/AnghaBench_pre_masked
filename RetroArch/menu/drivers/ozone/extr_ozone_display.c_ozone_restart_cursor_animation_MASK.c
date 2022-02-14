
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cursor_state; int cursor_border; } ;
struct TYPE_8__ {TYPE_2__* theme; TYPE_1__ theme_dynamic; int has_all_assets; } ;
typedef TYPE_3__ ozone_handle_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_7__ {int cursor_border_1; int cursor_border_0; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (uintptr_t*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;

void FUNC_3(ozone_handle_t *VAR_1)
{
   menu_animation_ctx_tag VAR_2 = (uintptr_t) &VAR_0;

   if (!VAR_1->has_all_assets)
      return;

   VAR_1->theme_dynamic.cursor_state = 1;
   FUNC_0(VAR_1->theme_dynamic.cursor_border, VAR_1->theme->cursor_border_0, sizeof(VAR_1->theme_dynamic.cursor_border));
   FUNC_1(&VAR_2);

   FUNC_2(VAR_1, VAR_1->theme_dynamic.cursor_border, VAR_1->theme->cursor_border_1);
}
