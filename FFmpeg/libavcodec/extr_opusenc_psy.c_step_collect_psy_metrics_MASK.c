
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int (* mdct ) (TYPE_7__*,float*,int *,int) ;} ;
struct TYPE_15__ {int nb_samples; int * extended_data; } ;
struct TYPE_14__ {float excitation; float excitation_init; float excitation_dist; } ;
struct TYPE_13__ {int bsize_analysis; int ** bfilter_hi; int ** bfilter_lo; TYPE_5__** ex; TYPE_2__* avctx; int * scratch; TYPE_7__** mdct; int * window; TYPE_1__* dsp; int bufqueue; TYPE_3__** steps; } ;
struct TYPE_12__ {int index; float** coeffs; float*** bands; float** energy; int silence; float* stereo; float** change_amp; float total_change; int ** tone; } ;
struct TYPE_11__ {int channels; } ;
struct TYPE_10__ {int (* vector_fmul ) (int *,int *,int ,int) ;} ;
typedef TYPE_3__ OpusPsyStep ;
typedef TYPE_4__ OpusPsyContext ;
typedef TYPE_5__ OpusBandExcitation ;
typedef TYPE_6__ AVFrame ;


 int VAR_0 ;
 float FUNC_0 (float,float) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int,int,double) ;
 float FUNC_4 (int *,float) ;
 int FUNC_5 (float) ;
 TYPE_6__* FUNC_6 (int ,int) ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 int FUNC_7 (int *,int ,int) ;
 float FUNC_8 (float) ;
 int FUNC_9 (int *,int *,int ,int) ;
 int FUNC_10 (TYPE_7__*,float*,int *,int) ;

__attribute__((used)) static void FUNC_11(OpusPsyContext *VAR_3, int VAR_4)
{
    int VAR_5 = 0, VAR_6, VAR_7, VAR_8;
    OpusPsyStep *VAR_9 = VAR_3->steps[VAR_4];

    VAR_9->index = VAR_4;

    for (VAR_6 = 0; VAR_6 < VAR_3->avctx->channels; VAR_6++) {
        const int VAR_10 = (1 << VAR_3->bsize_analysis);
        for (VAR_7 = 1; VAR_7 <= FUNC_1(VAR_10, VAR_4); VAR_7++) {
            const int VAR_11 = VAR_7*120;
            AVFrame *VAR_12 = FUNC_6(VAR_3->bufqueue, VAR_4 - VAR_7);
            FUNC_7(&VAR_3->scratch[VAR_11], VAR_12->extended_data[VAR_6], VAR_12->nb_samples*sizeof(float));
        }
        for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
            const int VAR_13 = VAR_7*120 + VAR_10;
            AVFrame *VAR_14 = FUNC_6(VAR_3->bufqueue, VAR_4 + VAR_7);
            FUNC_7(&VAR_3->scratch[VAR_13], VAR_14->extended_data[VAR_6], VAR_14->nb_samples*sizeof(float));
        }

        VAR_3->dsp->vector_fmul(VAR_3->scratch, VAR_3->scratch, VAR_3->window[VAR_3->bsize_analysis],
                            (FUNC_2(VAR_3->bsize_analysis) << 1));

        VAR_3->mdct[VAR_3->bsize_analysis]->mdct(VAR_3->mdct[VAR_3->bsize_analysis], VAR_9->coeffs[VAR_6], VAR_3->scratch, 1);

        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
            VAR_9->bands[VAR_6][VAR_7] = &VAR_9->coeffs[VAR_6][VAR_1[VAR_7] << VAR_3->bsize_analysis];
    }

    for (VAR_6 = 0; VAR_6 < VAR_3->avctx->channels; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            float VAR_15, VAR_16 = 0.0f, VAR_17 = 0.0f;
            const int VAR_18 = VAR_2[VAR_7] << VAR_3->bsize_analysis;
            const float *VAR_19 = VAR_9->bands[VAR_6][VAR_7];
            for (VAR_8 = 0; VAR_8 < VAR_18; VAR_8++)
                VAR_16 += VAR_19[VAR_8]*VAR_19[VAR_8];

            VAR_9->energy[VAR_6][VAR_7] += FUNC_8(VAR_16);
            VAR_5 |= !!VAR_9->energy[VAR_6][VAR_7];
            VAR_15 = VAR_16 / VAR_18;

            for (VAR_8 = 0; VAR_8 < VAR_18; VAR_8++) {
                const float VAR_20 = VAR_19[VAR_8]*VAR_19[VAR_8];
                VAR_17 += (VAR_15 - VAR_20)*(VAR_15 - VAR_20);
            }

            VAR_9->tone[VAR_6][VAR_7] += FUNC_8(VAR_17);
        }
    }

    VAR_9->silence = !VAR_5;

    if (VAR_3->avctx->channels > 1) {
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            float VAR_21 = 0.0f;
            const float *VAR_22 = VAR_9->bands[0][VAR_7];
            const float *VAR_23 = VAR_9->bands[1][VAR_7];
            const int VAR_24 = VAR_2[VAR_7] << VAR_3->bsize_analysis;
            for (VAR_8 = 0; VAR_8 < VAR_24; VAR_8++)
                VAR_21 += (VAR_22[VAR_8] - VAR_23[VAR_8])*(VAR_22[VAR_8] - VAR_23[VAR_8]);
            VAR_9->stereo[VAR_7] = FUNC_8(VAR_21);
        }
    }

    for (VAR_6 = 0; VAR_6 < VAR_3->avctx->channels; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            OpusBandExcitation *VAR_25 = &VAR_3->ex[VAR_6][VAR_7];
            float VAR_26 = FUNC_4(&VAR_3->bfilter_lo[VAR_6][VAR_7], VAR_9->energy[VAR_6][VAR_7]);
            VAR_26 = FUNC_4(&VAR_3->bfilter_hi[VAR_6][VAR_7], VAR_26);
            VAR_26 *= VAR_26;
            if (VAR_26 > VAR_25->excitation) {
                VAR_9->change_amp[VAR_6][VAR_7] = VAR_26 - VAR_25->excitation;
                VAR_9->total_change += VAR_9->change_amp[VAR_6][VAR_7];
                VAR_25->excitation = VAR_25->excitation_init = VAR_26;
                VAR_25->excitation_dist = 0.0f;
            }
            if (VAR_25->excitation > 0.0f) {
                VAR_25->excitation -= FUNC_3((1/FUNC_5(VAR_25->excitation_dist)), VAR_25->excitation_init/20, VAR_25->excitation_init/1.09);
                VAR_25->excitation = FUNC_0(VAR_25->excitation, 0.0f);
                VAR_25->excitation_dist += 1.0f;
            }
        }
    }
}
