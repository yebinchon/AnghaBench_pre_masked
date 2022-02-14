
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_keyboard {int dummy; } ;
struct TYPE_3__ {int keyboard_focus; } ;
struct TYPE_4__ {TYPE_1__ input; } ;
typedef TYPE_2__ gfx_ctx_wayland_data_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0,
      struct wl_keyboard *VAR_1,
      uint32_t VAR_2,
      struct wl_surface *VAR_3)
{
   gfx_ctx_wayland_data_t *VAR_4 = (gfx_ctx_wayland_data_t*)VAR_0;
   VAR_4->input.keyboard_focus = 0;
}
