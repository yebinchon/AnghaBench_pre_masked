
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gfx_ctx_wayland_data_t ;
struct TYPE_2__ {unsigned int x; unsigned int y; int active; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

bool FUNC_0(void *VAR_2, unsigned VAR_3,
      unsigned* VAR_4, unsigned* VAR_5)
{
   gfx_ctx_wayland_data_t *VAR_6 = (gfx_ctx_wayland_data_t*)VAR_2;

   if (VAR_3 >= VAR_0)
       return 0;
   *VAR_4 = VAR_1[VAR_3].x;
   *VAR_5 = VAR_1[VAR_3].y;
   return VAR_1[VAR_3].active;
}
