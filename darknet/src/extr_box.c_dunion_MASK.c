
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dy; int dx; scalar_t__ dh; scalar_t__ dw; } ;
typedef TYPE_1__ dbox ;
struct TYPE_10__ {scalar_t__ w; scalar_t__ h; } ;
typedef TYPE_2__ box ;


 TYPE_1__ FUNC_0 (TYPE_2__,TYPE_2__) ;

dbox FUNC_1(box VAR_0, box VAR_1)
{
    dbox VAR_2;

    dbox VAR_3 = FUNC_0(VAR_0, VAR_1);
    VAR_2.dw = VAR_0.h - VAR_3.dw;
    VAR_2.dh = VAR_0.w - VAR_3.dh;
    VAR_2.dx = -VAR_3.dx;
    VAR_2.dy = -VAR_3.dy;

    return VAR_2;
}
