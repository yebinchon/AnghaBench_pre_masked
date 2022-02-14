
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int dx; int dy; int dw; int dh; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ dbox ;
struct TYPE_17__ {int x; int y; int w; int h; } ;
typedef TYPE_2__ box ;


 float FUNC_0 (TYPE_2__,TYPE_2__) ;
 float FUNC_1 (TYPE_2__,TYPE_2__) ;
 TYPE_1__ FUNC_2 (TYPE_2__,TYPE_2__) ;
 TYPE_1__ FUNC_3 (TYPE_2__,TYPE_2__) ;
 int FUNC_4 (int,int) ;

dbox FUNC_5(box VAR_0, box VAR_1)
{
    float VAR_2 = FUNC_1(VAR_0,VAR_1);
    float VAR_3 = FUNC_0(VAR_0,VAR_1);
    dbox VAR_4 = FUNC_2(VAR_0,VAR_1);
    dbox VAR_5 = FUNC_3(VAR_0,VAR_1);
    dbox VAR_6 = {0,0,0,0};

    if(VAR_3 <= 0 || 1) {
        VAR_6.dx = VAR_1.x - VAR_0.x;
        VAR_6.dy = VAR_1.y - VAR_0.y;
        VAR_6.dw = VAR_1.w - VAR_0.w;
        VAR_6.dh = VAR_1.h - VAR_0.h;
        return VAR_6;
    }

    VAR_6.dx = 2*FUNC_4((1-(VAR_3/VAR_2)),1)*(VAR_4.dx*VAR_2 - VAR_5.dx*VAR_3)/(VAR_2*VAR_2);
    VAR_6.dy = 2*FUNC_4((1-(VAR_3/VAR_2)),1)*(VAR_4.dy*VAR_2 - VAR_5.dy*VAR_3)/(VAR_2*VAR_2);
    VAR_6.dw = 2*FUNC_4((1-(VAR_3/VAR_2)),1)*(VAR_4.dw*VAR_2 - VAR_5.dw*VAR_3)/(VAR_2*VAR_2);
    VAR_6.dh = 2*FUNC_4((1-(VAR_3/VAR_2)),1)*(VAR_4.dh*VAR_2 - VAR_5.dh*VAR_3)/(VAR_2*VAR_2);
    return VAR_6;
}
