
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int size; float* luminance; } ;
typedef TYPE_1__ DeflickerContext ;
typedef TYPE_2__ AVFilterContext ;


 float FUNC_0 (float,float) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_0, float *VAR_1)
{
    DeflickerContext *VAR_2 = VAR_0->priv;
    int VAR_3;

    *VAR_1 = 1;

    for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++) {
        *VAR_1 *= VAR_2->luminance[VAR_3];
    }

    *VAR_1 = FUNC_0(*VAR_1, 1.0f / VAR_2->size);
    *VAR_1 /= VAR_2->luminance[0];
}
