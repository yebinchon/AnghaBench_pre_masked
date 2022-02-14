
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct retro_keybind {int dummy; } ;
struct TYPE_3__ {int key_state; } ;
typedef TYPE_1__ input_ctx_wayland_data_t ;
typedef enum retro_key { ____Placeholder_retro_key } retro_key ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static bool FUNC_1(input_ctx_wayland_data_t *VAR_2,
      const struct retro_keybind **VAR_3,
      unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7)
{
   unsigned VAR_8 = VAR_1[(enum retro_key)VAR_7];
   return VAR_7 < VAR_0 && FUNC_0(VAR_2->key_state, VAR_8);
}
