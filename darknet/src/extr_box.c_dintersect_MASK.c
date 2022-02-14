
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {float dw; float dx; float dh; float dy; } ;
typedef TYPE_1__ dbox ;
struct TYPE_10__ {int h; int y; int w; int x; } ;
typedef TYPE_2__ box ;


 TYPE_1__ FUNC_0 (TYPE_2__,TYPE_2__) ;
 float FUNC_1 (int ,int ,int ,int ) ;

dbox FUNC_2(box VAR_0, box VAR_1)
{
    float VAR_2 = FUNC_1(VAR_0.x, VAR_0.w, VAR_1.x, VAR_1.w);
    float VAR_3 = FUNC_1(VAR_0.y, VAR_0.h, VAR_1.y, VAR_1.h);
    dbox VAR_4 = FUNC_0(VAR_0, VAR_1);
    dbox VAR_5;

    VAR_5.dw = VAR_4.dw*VAR_3;
    VAR_5.dx = VAR_4.dx*VAR_3;
    VAR_5.dh = VAR_4.dh*VAR_2;
    VAR_5.dy = VAR_4.dy*VAR_2;

    return VAR_5;
}
