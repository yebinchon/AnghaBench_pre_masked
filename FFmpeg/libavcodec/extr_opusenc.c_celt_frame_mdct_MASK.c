
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int (* mdct ) (TYPE_5__*,float*,float*,int) ;} ;
struct TYPE_12__ {float* overlap; float* samples; float* coeffs; float* lin_energy; scalar_t__* energy; } ;
struct TYPE_11__ {int channels; int blocks; int size; TYPE_4__* block; scalar_t__ transient; } ;
struct TYPE_10__ {float* scratch; TYPE_5__** mdct; TYPE_1__* dsp; } ;
struct TYPE_9__ {int (* vector_fmul_reverse ) (float*,float*,scalar_t__,int) ;int (* vector_fmul ) (float*,float*,scalar_t__,int) ;} ;
typedef TYPE_2__ OpusEncContext ;
typedef TYPE_3__ CeltFrame ;
typedef TYPE_4__ CeltBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 float VAR_3 ;
 int FUNC_1 (int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (float*,float*,int) ;
 int FUNC_4 (float*,int ,int) ;
 float FUNC_5 (float) ;
 int FUNC_6 (float*,float*,scalar_t__,int) ;
 int FUNC_7 (float*,float*,scalar_t__,int) ;
 int FUNC_8 (TYPE_5__*,float*,float*,int) ;
 int FUNC_9 (float*,float*,scalar_t__,int) ;
 int FUNC_10 (float*,float*,scalar_t__,int) ;
 int FUNC_11 (TYPE_5__*,float*,float*,int) ;

__attribute__((used)) static void FUNC_12(OpusEncContext *VAR_8, CeltFrame *VAR_9)
{
    float *VAR_10 = VAR_8->scratch, *VAR_11 = VAR_8->scratch + 1920;

    if (VAR_9->transient) {
        for (int VAR_12 = 0; VAR_12 < VAR_9->channels; VAR_12++) {
            CeltBlock *VAR_13 = &VAR_9->block[VAR_12];
            float *VAR_14 = VAR_13->overlap;
            for (int VAR_15 = 0; VAR_15 < VAR_9->blocks; VAR_15++) {
                float *VAR_16 = &VAR_13->samples[VAR_2*VAR_15];
                VAR_8->dsp->vector_fmul(VAR_10, VAR_14, VAR_7, 128);
                VAR_8->dsp->vector_fmul_reverse(&VAR_10[VAR_2], VAR_16,
                                            VAR_7 - 8, 128);
                VAR_14 = VAR_16;
                VAR_8->mdct[0]->mdct(VAR_8->mdct[0], VAR_13->coeffs + VAR_15, VAR_10, VAR_9->blocks);
            }
        }
    } else {
        int VAR_17 = FUNC_1(VAR_9->size), VAR_18 = FUNC_1(VAR_9->size + 1);
        int VAR_19 = VAR_17 - VAR_2, VAR_20 = (VAR_18 - VAR_17 - VAR_2) >> 1;
        FUNC_4(VAR_10, 0, VAR_18*sizeof(float));
        for (int VAR_21 = 0; VAR_21 < VAR_9->channels; VAR_21++) {
            CeltBlock *VAR_22 = &VAR_9->block[VAR_21];


            VAR_8->dsp->vector_fmul(VAR_11, VAR_22->overlap, VAR_7, 128);
            FUNC_3(VAR_10 + VAR_20, VAR_11, VAR_2*sizeof(float));


            FUNC_3(&VAR_10[VAR_20 + VAR_2], VAR_22->samples, VAR_19*sizeof(float));


            VAR_8->dsp->vector_fmul_reverse(VAR_11, VAR_22->samples + VAR_19,
                                        VAR_7 - 8, 128);
            FUNC_3(VAR_10 + VAR_20 + VAR_17, VAR_11, VAR_2*sizeof(float));

            VAR_8->mdct[VAR_9->size]->mdct(VAR_8->mdct[VAR_9->size], VAR_22->coeffs, VAR_10, 1);
        }
    }

    for (int VAR_23 = 0; VAR_23 < VAR_9->channels; VAR_23++) {
        CeltBlock *VAR_24 = &VAR_9->block[VAR_23];
        for (int VAR_25 = 0; VAR_25 < VAR_1; VAR_25++) {
            float VAR_26 = 0.0f;
            int VAR_27 = VAR_4[VAR_25] << VAR_9->size;
            int VAR_28 = VAR_5[VAR_25] << VAR_9->size;
            float *VAR_29 = &VAR_24->coeffs[VAR_27];

            for (int VAR_30 = 0; VAR_30 < VAR_28; VAR_30++)
                VAR_26 += VAR_29[VAR_30]*VAR_29[VAR_30];

            VAR_24->lin_energy[VAR_25] = FUNC_5(VAR_26) + VAR_3;
            VAR_26 = 1.0f/VAR_24->lin_energy[VAR_25];

            for (int VAR_31 = 0; VAR_31 < VAR_28; VAR_31++)
                VAR_29[VAR_31] *= VAR_26;

            VAR_24->energy[VAR_25] = FUNC_2(VAR_24->lin_energy[VAR_25]) - VAR_6[VAR_25];


            VAR_24->energy[VAR_25] = FUNC_0(VAR_24->energy[VAR_25], VAR_0);
        }
    }
}
