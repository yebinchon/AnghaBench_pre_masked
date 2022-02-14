
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ delta_y; scalar_t__ delta_x; int focus; scalar_t__ y; scalar_t__ last_y; scalar_t__ x; scalar_t__ last_x; } ;
struct TYPE_8__ {TYPE_2__* joypad; TYPE_1__ mouse; } ;
typedef TYPE_3__ input_ctx_wayland_data_t ;
struct TYPE_7__ {int (* poll ) () ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   input_ctx_wayland_data_t *VAR_1 = (input_ctx_wayland_data_t*)VAR_0;
   if (!VAR_1)
      return;

   FUNC_0(VAR_1);

   VAR_1->mouse.delta_x = VAR_1->mouse.x - VAR_1->mouse.last_x;
   VAR_1->mouse.delta_y = VAR_1->mouse.y - VAR_1->mouse.last_y;
   VAR_1->mouse.last_x = VAR_1->mouse.x;
   VAR_1->mouse.last_y = VAR_1->mouse.y;

   if (!VAR_1->mouse.focus)
   {
      VAR_1->mouse.delta_x = 0;
      VAR_1->mouse.delta_y = 0;
   }

   if (VAR_1->joypad)
      VAR_1->joypad->poll();

   FUNC_1(VAR_1);
}
