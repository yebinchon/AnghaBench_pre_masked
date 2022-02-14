
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor_state; int cursor_border; } ;
struct TYPE_7__ {TYPE_1__ theme_dynamic; TYPE_2__* theme; } ;
typedef TYPE_3__ ozone_handle_t ;
struct TYPE_6__ {float* cursor_border_1; float* cursor_border_0; } ;


 int FUNC_0 (TYPE_3__*,int ,float*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   ozone_handle_t *VAR_1 = (ozone_handle_t*) VAR_0;

   float *VAR_2 = ((void*)0);

   switch (VAR_1->theme_dynamic.cursor_state)
   {
      case 0:
         VAR_2 = VAR_1->theme->cursor_border_1;
         break;
      case 1:
         VAR_2 = VAR_1->theme->cursor_border_0;
         break;
   }

   VAR_1->theme_dynamic.cursor_state = (VAR_1->theme_dynamic.cursor_state + 1) % 2;

   FUNC_0(VAR_1, VAR_1->theme_dynamic.cursor_border, VAR_2);
}
