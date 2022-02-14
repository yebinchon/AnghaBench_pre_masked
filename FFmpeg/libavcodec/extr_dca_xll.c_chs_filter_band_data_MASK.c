
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef unsigned int int32_t ;
struct TYPE_10__ {unsigned int** msb_sample_buffer; int* adapt_pred_order; int** adapt_refl_coeff; int* fixed_pred_order; int* decor_coeff; size_t* orig_order; scalar_t__ decor_enabled; } ;
struct TYPE_9__ {int nchannels; int nfreqbands; size_t* ch_remap; TYPE_4__* bands; } ;
struct TYPE_8__ {int nframesamples; unsigned int** output_samples; TYPE_1__* dcadsp; } ;
struct TYPE_7__ {int (* decor ) (unsigned int*,unsigned int*,int,int) ;} ;
typedef unsigned int SUINT ;
typedef TYPE_2__ DCAXllDecoder ;
typedef TYPE_3__ DCAXllChSet ;
typedef TYPE_4__ DCAXllBand ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int*,unsigned int*,int,int) ;

__attribute__((used)) static void FUNC_4(DCAXllDecoder *VAR_2, DCAXllChSet *VAR_3, int VAR_4)
{
    DCAXllBand *VAR_5 = &VAR_3->bands[VAR_4];
    int VAR_6 = VAR_2->nframesamples;
    int VAR_7, VAR_8, VAR_9;


    for (VAR_7 = 0; VAR_7 < VAR_3->nchannels; VAR_7++) {
        int32_t *VAR_10 = VAR_5->msb_sample_buffer[VAR_7];
        int VAR_11 = VAR_5->adapt_pred_order[VAR_7];
        if (VAR_11 > 0) {
            int VAR_12[VAR_0];

            for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
                int VAR_13 = VAR_5->adapt_refl_coeff[VAR_7][VAR_8];
                for (VAR_9 = 0; VAR_9 < (VAR_8 + 1) / 2; VAR_9++) {
                    int VAR_14 = VAR_12[ VAR_9 ];
                    int VAR_15 = VAR_12[VAR_8 - VAR_9 - 1];
                    VAR_12[ VAR_9 ] = VAR_14 + FUNC_1(VAR_13, VAR_15);
                    VAR_12[VAR_8 - VAR_9 - 1] = VAR_15 + FUNC_1(VAR_13, VAR_14);
                }
                VAR_12[VAR_8] = VAR_13;
            }

            for (VAR_8 = 0; VAR_8 < VAR_6 - VAR_11; VAR_8++) {
                int64_t VAR_16 = 0;
                for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
                    VAR_16 += (int64_t)VAR_10[VAR_8 + VAR_9] * VAR_12[VAR_11 - VAR_9 - 1];
                VAR_10[VAR_8 + VAR_9] -= (SUINT)FUNC_0(FUNC_2(VAR_16));
            }
        } else {

            for (VAR_8 = 0; VAR_8 < VAR_5->fixed_pred_order[VAR_7]; VAR_8++)
                for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++)
                    VAR_10[VAR_9] += (unsigned)VAR_10[VAR_9 - 1];
        }
    }


    if (VAR_5->decor_enabled) {
        int32_t *VAR_17[VAR_1];

        for (VAR_7 = 0; VAR_7 < VAR_3->nchannels / 2; VAR_7++) {
            int VAR_18 = VAR_5->decor_coeff[VAR_7];
            if (VAR_18) {
                VAR_2->dcadsp->decor(VAR_5->msb_sample_buffer[VAR_7 * 2 + 1],
                                 VAR_5->msb_sample_buffer[VAR_7 * 2 ],
                                 VAR_18, VAR_6);
            }
        }


        for (VAR_7 = 0; VAR_7 < VAR_3->nchannels; VAR_7++)
            VAR_17[VAR_7] = VAR_5->msb_sample_buffer[VAR_7];

        for (VAR_7 = 0; VAR_7 < VAR_3->nchannels; VAR_7++)
            VAR_5->msb_sample_buffer[VAR_5->orig_order[VAR_7]] = VAR_17[VAR_7];
    }


    if (VAR_3->nfreqbands == 1)
        for (VAR_7 = 0; VAR_7 < VAR_3->nchannels; VAR_7++)
            VAR_2->output_samples[VAR_3->ch_remap[VAR_7]] = VAR_5->msb_sample_buffer[VAR_7];
}
