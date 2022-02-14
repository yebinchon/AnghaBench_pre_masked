
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int menu_texture_enable; int menu_texture_full_screen; } ;
typedef TYPE_1__ gl1_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool VAR_1, bool VAR_2)
{
   gl1_t *VAR_3 = (gl1_t*)VAR_0;

   if (!VAR_3)
      return;

   VAR_3->menu_texture_enable = VAR_1;
   VAR_3->menu_texture_full_screen = VAR_2;
}
