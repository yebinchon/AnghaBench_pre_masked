
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int joypad; } ;
typedef TYPE_1__ input_ctx_wayland_data_t ;


 int FUNC_0 (char const*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

bool FUNC_2(void *VAR_1, const char *VAR_2)
{
   input_ctx_wayland_data_t *VAR_3 = (input_ctx_wayland_data_t*)VAR_1;

   if (!VAR_3)
      return 0;

   VAR_3->joypad = FUNC_0(VAR_2, VAR_3);

   if (!VAR_3->joypad)
      return 0;

   FUNC_1(VAR_0);
   return 1;
}
