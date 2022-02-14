
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; float w; float h; } ;
struct TYPE_4__ {TYPE_2__ bbox; } ;
typedef TYPE_1__ detection ;
typedef TYPE_2__ box ;



void FUNC_0(detection *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8=0;
    int VAR_9=0;
    if (((float)VAR_4/VAR_2) < ((float)VAR_5/VAR_3)) {
        VAR_8 = VAR_4;
        VAR_9 = (VAR_3 * VAR_4)/VAR_2;
    } else {
        VAR_9 = VAR_5;
        VAR_8 = (VAR_2 * VAR_5)/VAR_3;
    }
    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7){
        box VAR_10 = VAR_0[VAR_7].bbox;
        VAR_10.x = (VAR_10.x - (VAR_4 - VAR_8)/2./VAR_4) / ((float)VAR_8/VAR_4);
        VAR_10.y = (VAR_10.y - (VAR_5 - VAR_9)/2./VAR_5) / ((float)VAR_9/VAR_5);
        VAR_10.w *= (float)VAR_4/VAR_8;
        VAR_10.h *= (float)VAR_5/VAR_9;
        if(!VAR_6){
            VAR_10.x *= VAR_2;
            VAR_10.w *= VAR_2;
            VAR_10.y *= VAR_3;
            VAR_10.h *= VAR_3;
        }
        VAR_0[VAR_7].bbox = VAR_10;
    }
}
