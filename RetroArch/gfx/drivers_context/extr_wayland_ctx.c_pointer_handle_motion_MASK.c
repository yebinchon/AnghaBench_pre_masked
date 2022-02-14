
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct TYPE_4__ {void* y; void* x; } ;
struct TYPE_5__ {TYPE_1__ mouse; } ;
struct TYPE_6__ {scalar_t__ buffer_scale; TYPE_2__ input; } ;
typedef TYPE_3__ gfx_ctx_wayland_data_t ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
      struct wl_pointer *VAR_1,
      uint32_t VAR_2,
      wl_fixed_t VAR_3,
      wl_fixed_t VAR_4)
{
   gfx_ctx_wayland_data_t *VAR_5 = (gfx_ctx_wayland_data_t*)VAR_0;
   VAR_5->input.mouse.x = FUNC_0(
         (wl_fixed_t)VAR_5->buffer_scale * VAR_3);
   VAR_5->input.mouse.y = FUNC_0(
         (wl_fixed_t)VAR_5->buffer_scale * VAR_4);
}
