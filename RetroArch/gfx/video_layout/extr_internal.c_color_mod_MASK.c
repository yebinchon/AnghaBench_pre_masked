
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int b; int g; int r; } ;
typedef TYPE_1__ video_layout_color_t ;



void FUNC_0(video_layout_color_t *VAR_0, const video_layout_color_t *VAR_1)
{
   VAR_0->r *= VAR_1->r;
   VAR_0->g *= VAR_1->g;
   VAR_0->b *= VAR_1->b;
   VAR_0->a *= VAR_1->a;
}
