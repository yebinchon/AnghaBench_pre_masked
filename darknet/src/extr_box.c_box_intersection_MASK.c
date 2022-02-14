
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; int y; int w; int x; } ;
typedef TYPE_1__ box ;


 float FUNC_0 (int ,int ,int ,int ) ;

float FUNC_1(box VAR_0, box VAR_1)
{
    float VAR_2 = FUNC_0(VAR_0.x, VAR_0.w, VAR_1.x, VAR_1.w);
    float VAR_3 = FUNC_0(VAR_0.y, VAR_0.h, VAR_1.y, VAR_1.h);
    if(VAR_2 < 0 || VAR_3 < 0) return 0;
    float VAR_4 = VAR_2*VAR_3;
    return VAR_4;
}
