
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dx; int dy; scalar_t__ dh; scalar_t__ dw; } ;
typedef TYPE_1__ dbox ;
struct TYPE_7__ {int x; int w; int y; int h; } ;
typedef TYPE_2__ box ;



dbox FUNC_0(box VAR_0, box VAR_1)
{
    dbox VAR_2;
    VAR_2.dx = 0;
    VAR_2.dw = 0;
    float VAR_3 = VAR_0.x - VAR_0.w/2;
    float VAR_4 = VAR_1.x - VAR_1.w/2;
    if (VAR_3 > VAR_4){
        VAR_2.dx -= 1;
        VAR_2.dw += .5;
    }
    float VAR_5 = VAR_0.x + VAR_0.w/2;
    float VAR_6 = VAR_1.x + VAR_1.w/2;
    if(VAR_5 < VAR_6){
        VAR_2.dx += 1;
        VAR_2.dw += .5;
    }
    if (VAR_3 > VAR_6) {
        VAR_2.dx = -1;
        VAR_2.dw = 0;
    }
    if (VAR_5 < VAR_4){
        VAR_2.dx = 1;
        VAR_2.dw = 0;
    }

    VAR_2.dy = 0;
    VAR_2.dh = 0;
    float VAR_7 = VAR_0.y - VAR_0.h/2;
    float VAR_8 = VAR_1.y - VAR_1.h/2;
    if (VAR_7 > VAR_8){
        VAR_2.dy -= 1;
        VAR_2.dh += .5;
    }
    float VAR_9 = VAR_0.y + VAR_0.h/2;
    float VAR_10 = VAR_1.y + VAR_1.h/2;
    if(VAR_9 < VAR_10){
        VAR_2.dy += 1;
        VAR_2.dh += .5;
    }
    if (VAR_7 > VAR_10) {
        VAR_2.dy = -1;
        VAR_2.dh = 0;
    }
    if (VAR_9 < VAR_8){
        VAR_2.dy = 1;
        VAR_2.dh = 0;
    }
    return VAR_2;
}
