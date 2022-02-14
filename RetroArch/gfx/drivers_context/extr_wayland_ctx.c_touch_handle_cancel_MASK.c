
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_touch {int dummy; } ;
typedef int gfx_ctx_wayland_data_t ;
struct TYPE_2__ {int active; int id; unsigned int x; unsigned int y; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(void *VAR_3,
      struct wl_touch *VAR_4)
{


   int VAR_5;
   gfx_ctx_wayland_data_t *VAR_6 = (gfx_ctx_wayland_data_t*)VAR_3;

   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      VAR_1[VAR_5].active = 0;
      VAR_1[VAR_5].id = -1;
      VAR_1[VAR_5].x = (unsigned) 0;
      VAR_1[VAR_5].y = (unsigned) 0;
   }
   VAR_2 = 0;
}
