
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int thickness; int h; int x; int w; } ;
typedef TYPE_1__ DrawBoxContext ;



int FUNC_0(DrawBoxContext *VAR_0, int VAR_1, int VAR_2)
{
    return (VAR_2 - VAR_0->y < VAR_0->thickness) || (VAR_0->y + VAR_0->h - 1 - VAR_2 < VAR_0->thickness) ||
           (VAR_1 - VAR_0->x < VAR_0->thickness) || (VAR_0->x + VAR_0->w - 1 - VAR_1 < VAR_0->thickness);
}
