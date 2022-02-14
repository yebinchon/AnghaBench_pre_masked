
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct TYPE_7__ {int visible; int serial; } ;
struct TYPE_5__ {int focus; void* last_y; void* y; void* last_x; void* x; } ;
struct TYPE_6__ {TYPE_1__ mouse; } ;
struct TYPE_8__ {TYPE_3__ cursor; TYPE_2__ input; scalar_t__ buffer_scale; } ;
typedef TYPE_4__ gfx_ctx_wayland_data_t ;


 int FUNC_0 (void*,int ) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      struct wl_pointer *VAR_1,
      uint32_t VAR_2,
      struct wl_surface *VAR_3,
      wl_fixed_t VAR_4,
      wl_fixed_t VAR_5)
{
   gfx_ctx_wayland_data_t *VAR_6 = (gfx_ctx_wayland_data_t*)VAR_0;
   (void)VAR_1;
   (void)VAR_2;
   (void)VAR_3;

   VAR_6->input.mouse.last_x = FUNC_1(VAR_4 * (wl_fixed_t)VAR_6->buffer_scale);
   VAR_6->input.mouse.last_y = FUNC_1(VAR_5 * (wl_fixed_t)VAR_6->buffer_scale);
   VAR_6->input.mouse.x = VAR_6->input.mouse.last_x;
   VAR_6->input.mouse.y = VAR_6->input.mouse.last_y;
   VAR_6->input.mouse.focus = 1;
   VAR_6->cursor.serial = VAR_2;

   FUNC_0(VAR_0, VAR_6->cursor.visible);
}
