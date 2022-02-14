
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int order; int kernel_size; TYPE_1__* fdsp; } ;
struct TYPE_4__ {float (* scalarproduct_float ) (float*,float*,int ) ;} ;
typedef TYPE_2__ AudioNLMSContext ;


 int FUNC_0 (float*,float*,int const) ;
 float FUNC_1 (float*,float*,int ) ;

__attribute__((used)) static float FUNC_2(AudioNLMSContext *VAR_0, float VAR_1, float *VAR_2,
                        float *VAR_3, float *VAR_4, int *VAR_5)
{
    const int VAR_6 = VAR_0->order;
    float VAR_7;

    VAR_2[*VAR_5] = VAR_1;

    FUNC_0(VAR_4, VAR_3 + VAR_6 - *VAR_5, VAR_6 * sizeof(float));

    VAR_7 = VAR_0->fdsp->scalarproduct_float(VAR_2, VAR_4, VAR_0->kernel_size);

    if (--(*VAR_5) < 0)
        *VAR_5 = VAR_6 - 1;

    return VAR_7;
}
