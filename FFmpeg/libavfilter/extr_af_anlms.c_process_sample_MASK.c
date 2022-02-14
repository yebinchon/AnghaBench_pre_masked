
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int order; float leakage; float mu; float eps; int output_mode; int kernel_size; TYPE_1__* fdsp; } ;
struct TYPE_5__ {float (* scalarproduct_float ) (float*,float*,int ) ;int (* vector_fmac_scalar ) (float*,float*,float,int ) ;int (* vector_fmul_scalar ) (float*,float*,float const,int ) ;} ;
typedef TYPE_2__ AudioNLMSContext ;






 float FUNC_0 (TYPE_2__*,float,float*,float*,float*,int*) ;
 int FUNC_1 (float*,float*,int const) ;
 float FUNC_2 (float*,float*,int ) ;
 int FUNC_3 (float*,float*,float const,int ) ;
 int FUNC_4 (float*,float*,float,int ) ;

__attribute__((used)) static float FUNC_5(AudioNLMSContext *VAR_0, float VAR_1, float VAR_2,
                            float *VAR_3, float *VAR_4, float *VAR_5, int *VAR_6)
{
    const int VAR_7 = VAR_0->order;
    const float VAR_8 = VAR_0->leakage;
    const float VAR_9 = VAR_0->mu;
    const float VAR_10 = 1.f - VAR_8 * VAR_9;
    float VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16 = *VAR_6;

    VAR_3[VAR_16 + VAR_7] = VAR_1;

    VAR_12 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);
    VAR_13 = VAR_2 - VAR_12;

    VAR_11 = VAR_0->fdsp->scalarproduct_float(VAR_3, VAR_3, VAR_0->kernel_size);

    VAR_14 = VAR_0->eps + VAR_11;
    VAR_15 = VAR_9 * VAR_13 / VAR_14;

    FUNC_1(VAR_5, VAR_3 + VAR_16, VAR_7 * sizeof(float));

    VAR_0->fdsp->vector_fmul_scalar(VAR_4, VAR_4, VAR_10, VAR_0->kernel_size);

    VAR_0->fdsp->vector_fmac_scalar(VAR_4, VAR_5, VAR_15, VAR_0->kernel_size);

    FUNC_1(VAR_4 + VAR_7, VAR_4, VAR_7 * sizeof(float));

    switch (VAR_0->output_mode) {
    case 130: VAR_12 = VAR_1; break;
    case 131: VAR_12 = VAR_2; break;
    case 128: break;
    case 129: VAR_12 = VAR_2 - VAR_12; break;
    }
    return VAR_12;
}
