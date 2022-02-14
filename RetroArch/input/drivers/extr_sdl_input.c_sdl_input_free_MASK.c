
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* joypad; } ;
typedef TYPE_2__ sdl_input_t ;
struct TYPE_3__ {int (* destroy ) () ;} ;
typedef int SDL_Event ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{

   SDL_Event VAR_3;

   sdl_input_t *VAR_4 = (sdl_input_t*)VAR_2;

   if (!VAR_2)
      return;





   while (FUNC_1(&VAR_3));


   if (VAR_4->joypad)
      VAR_4->joypad->destroy();

   FUNC_2(VAR_2);
}
