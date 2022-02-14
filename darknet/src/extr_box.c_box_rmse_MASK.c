
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ h; scalar_t__ w; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ box ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 float FUNC_1 (scalar_t__) ;

float FUNC_2(box VAR_0, box VAR_1)
{
    return FUNC_1(FUNC_0(VAR_0.x-VAR_1.x, 2) +
                FUNC_0(VAR_0.y-VAR_1.y, 2) +
                FUNC_0(VAR_0.w-VAR_1.w, 2) +
                FUNC_0(VAR_0.h-VAR_1.h, 2));
}
