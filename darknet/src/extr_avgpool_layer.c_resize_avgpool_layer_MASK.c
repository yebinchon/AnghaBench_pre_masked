
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int inputs; int c; } ;
typedef TYPE_1__ avgpool_layer ;



void FUNC_0(avgpool_layer *VAR_0, int VAR_1, int VAR_2)
{
    VAR_0->w = VAR_1;
    VAR_0->h = VAR_2;
    VAR_0->inputs = VAR_2*VAR_1*VAR_0->c;
}
