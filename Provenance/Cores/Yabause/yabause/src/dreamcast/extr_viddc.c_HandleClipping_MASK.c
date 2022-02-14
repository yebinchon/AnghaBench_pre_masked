
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ x; int cellw; scalar_t__ y; scalar_t__ cellh; } ;
typedef TYPE_1__ vdp2draw_struct ;
struct TYPE_6__ {scalar_t__ pixeloffset; scalar_t__ lineincrement; scalar_t__ xstart; scalar_t__ xend; int ystart; scalar_t__ yend; } ;
typedef TYPE_2__ clipping_struct ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void inline FUNC_0(vdp2draw_struct *VAR_2, clipping_struct *VAR_3)
{
    VAR_3->pixeloffset=0;
    VAR_3->lineincrement=0;


    if (VAR_2->x < 0)
    {
        VAR_3->xstart = 0;
        VAR_3->xend = (VAR_2->x+VAR_2->cellw);
        VAR_3->pixeloffset = 0 - VAR_2->x;
        VAR_3->lineincrement = 0 - VAR_2->x;
    }
    else
    {
        VAR_3->xstart = VAR_2->x;

        if ((VAR_2->x+VAR_2->cellw) > VAR_1)
        {
            VAR_3->xend = VAR_1;
            VAR_3->lineincrement = (VAR_2->x+VAR_2->cellw) - VAR_1;
        }
        else
            VAR_3->xend = (VAR_2->x+VAR_2->cellw);
    }

    if (VAR_2->y < 0)
    {
        VAR_3->ystart = 0;
        VAR_3->yend = (VAR_2->y+VAR_2->cellh);
        VAR_3->pixeloffset = (VAR_2->cellw * (0 - VAR_2->y)) + VAR_3->pixeloffset;
    }
    else
    {
        VAR_3->ystart = VAR_2->y;

        if ((VAR_2->y+VAR_2->cellh) >= VAR_0)
            VAR_3->yend = VAR_0;
        else
            VAR_3->yend = (VAR_2->y+VAR_2->cellh);
    }
}
