
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int* x; float const* y; } ;
typedef TYPE_1__ AMRFixed ;


 int FUNC_0 (float*,int ,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const AMRFixed *VAR_1,
                                  const float *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    FUNC_0(VAR_0, 0, VAR_3*sizeof(float));
    for (VAR_4 = 0; VAR_4 < VAR_1->n; VAR_4++)
        for (VAR_5 = VAR_1->x[VAR_4]; VAR_5 < VAR_3; VAR_5++)
            VAR_0[VAR_5] += VAR_1->y[VAR_4] * VAR_2[VAR_5 - VAR_1->x[VAR_4]];
}
