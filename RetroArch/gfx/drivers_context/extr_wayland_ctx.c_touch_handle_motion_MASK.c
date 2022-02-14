
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_touch {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef int gfx_ctx_wayland_data_t ;
struct TYPE_2__ {scalar_t__ id; unsigned int x; unsigned int y; scalar_t__ active; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2,
      struct wl_touch *VAR_3,
      uint32_t VAR_4,
      int32_t VAR_5,
      wl_fixed_t VAR_6,
      wl_fixed_t VAR_7)
{
   int VAR_8;
   gfx_ctx_wayland_data_t *VAR_9 = (gfx_ctx_wayland_data_t*)VAR_2;

   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   {
      if ( VAR_1[VAR_8].active &&
            VAR_1[VAR_8].id == VAR_5)
      {
         VAR_1[VAR_8].x = (unsigned) FUNC_0(VAR_6);
         VAR_1[VAR_8].y = (unsigned) FUNC_0(VAR_7);
      }
   }
}
