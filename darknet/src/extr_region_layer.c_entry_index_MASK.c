
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int outputs; int coords; int classes; } ;
typedef TYPE_1__ layer ;



int FUNC_0(layer VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = VAR_2 / (VAR_0.w*VAR_0.h);
    int VAR_5 = VAR_2 % (VAR_0.w*VAR_0.h);
    return VAR_1*VAR_0.outputs + VAR_4*VAR_0.w*VAR_0.h*(VAR_0.coords+VAR_0.classes+1) + VAR_3*VAR_0.w*VAR_0.h + VAR_5;
}
