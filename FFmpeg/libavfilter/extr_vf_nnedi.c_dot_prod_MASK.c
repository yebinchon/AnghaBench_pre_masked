
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fdsp; } ;
struct TYPE_4__ {float (* scalarproduct_float ) (float const*,float const*,int const) ;} ;
typedef TYPE_2__ NNEDIContext ;


 float FUNC_0 (float const*,float const*,int const) ;

__attribute__((used)) static void FUNC_1(NNEDIContext *VAR_0, const float *VAR_1, const float *VAR_2, float *VAR_3, const int VAR_4, const int VAR_5, const float *VAR_6)
{
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        float VAR_8;

        VAR_8 = VAR_0->fdsp->scalarproduct_float(VAR_1, &VAR_2[VAR_7 * VAR_5], VAR_5);

        VAR_3[VAR_7] = VAR_8 * VAR_6[0] + VAR_2[VAR_4 * VAR_5 + VAR_7];
    }
}
