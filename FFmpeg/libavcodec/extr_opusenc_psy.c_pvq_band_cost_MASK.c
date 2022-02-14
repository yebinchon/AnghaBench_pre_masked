
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int blocks; int size; int channels; int remaining2; int framebits; int anticollapse_needed; int coded_bands; int remaining; int* pulses; scalar_t__ dual_stereo; TYPE_1__* block; } ;
struct TYPE_13__ {int (* quant_band ) (TYPE_2__*,TYPE_3__*,int *,int,float*,float*,int const,int,int,int *,int,float*,int ,float,float*,int) ;} ;
struct TYPE_12__ {float* coeffs; } ;
typedef int OpusRangeCoder ;
typedef TYPE_2__ CeltPVQ ;
typedef TYPE_3__ CeltFrame ;


 int FUNC_0 (int,int) ;
 float FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_5 (float*,float*,int const) ;
 int FUNC_6 (int *) ;
 float FUNC_7 (float) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int *,int,float*,float*,int const,int,int,int *,int,float*,int ,float,float*,int) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,int *,int,float*,float*,int const,int,int,int *,int,float*,int ,float,float*,int) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,int *,int,float*,float*,int const,int,int,int *,int,float*,int ,float,float*,int) ;

__attribute__((used)) static float FUNC_11(CeltPVQ *VAR_2, CeltFrame *VAR_3, OpusRangeCoder *VAR_4, int VAR_5,
                           float *VAR_6, float VAR_7)
{
    int VAR_8, VAR_9 = 0;
    uint32_t VAR_10[2] = { (1 << VAR_3->blocks) - 1, (1 << VAR_3->blocks) - 1 };
    const int VAR_11 = VAR_1[VAR_5] << VAR_3->size;
    float VAR_12[176 * 2], VAR_13[176], VAR_14[176], VAR_15[176];
    float VAR_16, VAR_17, VAR_18 = 0.0f, VAR_19 = 0.0f;
    float *VAR_20 = VAR_12;
    float *VAR_21 = VAR_3->block[0].coeffs + (VAR_0[VAR_5] << VAR_3->size);
    float *VAR_22 = (VAR_3->channels == 2) ? &VAR_12[176] : ((void*)0);
    float *VAR_23 = VAR_3->block[1].coeffs + (VAR_0[VAR_5] << VAR_3->size);
    FUNC_3(VAR_4);

    FUNC_5(VAR_20, VAR_21, VAR_11*sizeof(float));
    if (VAR_22)
        FUNC_5(VAR_22, VAR_23, VAR_11*sizeof(float));

    VAR_3->remaining2 = ((VAR_3->framebits << 3) - VAR_3->anticollapse_needed) - FUNC_6(VAR_4) - 1;
    if (VAR_5 <= VAR_3->coded_bands - 1) {
        int VAR_24 = VAR_3->remaining / FUNC_0(3, VAR_3->coded_bands - VAR_5);
        VAR_9 = FUNC_4(FUNC_0(VAR_3->remaining2 + 1, VAR_3->pulses[VAR_5] + VAR_24), 14);
    }

    if (VAR_3->dual_stereo) {
        VAR_2->quant_band(VAR_2, VAR_3, VAR_4, VAR_5, VAR_20, ((void*)0), VAR_11, VAR_9 / 2, VAR_3->blocks, ((void*)0),
                        VAR_3->size, VAR_14, 0, 1.0f, VAR_13, VAR_10[0]);

        VAR_2->quant_band(VAR_2, VAR_3, VAR_4, VAR_5, VAR_22, ((void*)0), VAR_11, VAR_9 / 2, VAR_3->blocks, ((void*)0),
                        VAR_3->size, VAR_15, 0, 1.0f, VAR_13, VAR_10[1]);
    } else {
        VAR_2->quant_band(VAR_2, VAR_3, VAR_4, VAR_5, VAR_20, VAR_22, VAR_11, VAR_9, VAR_3->blocks, ((void*)0), VAR_3->size,
                        VAR_14, 0, 1.0f, VAR_13, VAR_10[0] | VAR_10[1]);
    }

    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
        VAR_18 += (VAR_20[VAR_8] - VAR_21[VAR_8])*(VAR_20[VAR_8] - VAR_21[VAR_8]);
        if (VAR_22)
            VAR_19 += (VAR_22[VAR_8] - VAR_23[VAR_8])*(VAR_22[VAR_8] - VAR_23[VAR_8]);
    }

    VAR_16 = FUNC_7(VAR_18) + FUNC_7(VAR_19);
    VAR_17 = FUNC_1(VAR_4)/8.0f;
    *VAR_6 += VAR_17;

    FUNC_2(VAR_4);

    return VAR_7*VAR_16*VAR_17;
}
