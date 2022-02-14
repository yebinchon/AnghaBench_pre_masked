
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int w; int y; int h; } ;
typedef TYPE_1__ box ;


 void* FUNC_0 (int) ;

box FUNC_1(box VAR_0, box VAR_1)
{
    box VAR_2;
    VAR_2.x = (VAR_0.x - VAR_1.x) / VAR_1.w;
    VAR_2.y = (VAR_0.y - VAR_1.y) / VAR_1.h;
    VAR_2.w = FUNC_0(VAR_0.w / VAR_1.w);
    VAR_2.h = FUNC_0(VAR_0.h / VAR_1.h);
    return VAR_2;
}
