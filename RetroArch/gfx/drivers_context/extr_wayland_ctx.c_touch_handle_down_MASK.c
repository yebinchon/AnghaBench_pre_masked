
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_touch {int dummy; } ;
struct wl_surface {int dummy; } ;
typedef int int32_t ;
typedef int gfx_ctx_wayland_data_t ;
struct TYPE_2__ {int active; unsigned int x; unsigned int y; int id; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_3,
      struct wl_touch *VAR_4,
      uint32_t VAR_5,
      uint32_t VAR_6,
      struct wl_surface *VAR_7,
      int32_t VAR_8,
      wl_fixed_t VAR_9,
      wl_fixed_t VAR_10)
{
   int VAR_11;
   gfx_ctx_wayland_data_t *VAR_12 = (gfx_ctx_wayland_data_t*)VAR_3;

   if (VAR_2 < VAR_0)
   {
      for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
      {

         if (!VAR_1[VAR_11].active)
         {
            VAR_1[VAR_2].active = 1;
            VAR_1[VAR_2].id = VAR_8;
            VAR_1[VAR_2].x = (unsigned)
               FUNC_0(VAR_9);
            VAR_1[VAR_2].y = (unsigned)
               FUNC_0(VAR_10);
            VAR_2++;
            break;
         }
      }
   }
}
