
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float w; float h; } ;
typedef TYPE_1__ box ;


 float FUNC_0 (TYPE_1__,TYPE_1__) ;

float FUNC_1(box VAR_0, box VAR_1)
{
    float VAR_2 = FUNC_0(VAR_0, VAR_1);
    float VAR_3 = VAR_0.w*VAR_0.h + VAR_1.w*VAR_1.h - VAR_2;
    return VAR_3;
}
