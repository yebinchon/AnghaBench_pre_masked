
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; int w; int y; int x; } ;
typedef TYPE_1__ video_layout_bounds_t ;



void FUNC_0(
      video_layout_bounds_t *VAR_0,
      const video_layout_bounds_t *VAR_1)
{
   VAR_0->x *= VAR_1->w;
   VAR_0->y *= VAR_1->h;
   VAR_0->w *= VAR_1->w;
   VAR_0->h *= VAR_1->h;
}
