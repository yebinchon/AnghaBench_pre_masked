
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_touch {int dummy; } ;
typedef int int32_t ;
typedef int gfx_ctx_wayland_data_t ;
struct TYPE_2__ {int active; int id; unsigned int x; unsigned int y; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void *VAR_3,
      struct wl_touch *VAR_4,
      uint32_t VAR_5,
      uint32_t VAR_6,
      int32_t VAR_7)
{
   int VAR_8;
   gfx_ctx_wayland_data_t *VAR_9 = (gfx_ctx_wayland_data_t*)VAR_3;

   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   {
      if ( VAR_1[VAR_8].active &&
            VAR_1[VAR_8].id == VAR_7)
      {
         VAR_1[VAR_8].active = 0;
         VAR_1[VAR_8].id = -1;
         VAR_1[VAR_8].x = (unsigned)0;
         VAR_1[VAR_8].y = (unsigned)0;
         VAR_2--;
      }
   }
   FUNC_0();
}
