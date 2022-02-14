
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_keybind {int dummy; } ;
struct menu_bind_state {int dummy; } ;


 int VAR_0 ;
 unsigned int* FUNC_0 (int ) ;
 int FUNC_1 (struct menu_bind_state*,struct menu_bind_state*,struct retro_keybind*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(
      struct menu_bind_state *VAR_1,
      struct menu_bind_state *VAR_2,
      struct retro_keybind * VAR_3
   )
{
   unsigned VAR_4;
   unsigned VAR_5 = *(FUNC_0(VAR_0));

   if (!VAR_1 || !VAR_2)
      return 0;

   for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   {
      if (!FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4))
        continue;

      return 1;
   }

   return 0;
}
