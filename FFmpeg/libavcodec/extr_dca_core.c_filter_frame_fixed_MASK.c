
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int int32_t ;
struct TYPE_18__ {int bits_per_raw_sample; int channels; int sample_fmt; int sample_rate; TYPE_3__* priv_data; } ;
struct TYPE_17__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_16__ {int packet; } ;
struct TYPE_15__ {int npcmsamples; int ext_audio_mask; size_t audio_mode; int** output_samples; int xxch_dmix_scale_inv; int* xxch_dmix_coeff; int nchannels; int xxch_mask_nbits; unsigned int xxch_core_mask; unsigned int* xxch_dmix_mask; size_t* ch_remap; int ch_mask; int prim_dmix_coeff; TYPE_11__* dcadsp; int request_mask; TYPE_1__* fixed_dsp; scalar_t__ sumdiff_surround; scalar_t__ sumdiff_front; scalar_t__ xxch_dmix_embedded; scalar_t__ es_format; int output_rate; TYPE_5__* avctx; } ;
struct TYPE_14__ {int (* butterflies_fixed ) (int*,int*,int) ;} ;
struct TYPE_13__ {int (* dmix_sub ) (int*,int*,int,int) ;int (* dmix_scale_inv ) (int*,int,int) ;int (* dmix_sub_xch ) (int*,int*,int*,int) ;} ;
typedef TYPE_2__ DCACoreDecoder ;
typedef TYPE_3__ DCAContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_15 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_11__*,int**,int ,int,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int*,int*,int*,int) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (int*,int*,int,int) ;
 int FUNC_11 (int*,int*,int) ;
 int FUNC_12 (int*,int*,int) ;

__attribute__((used)) static int FUNC_13(DCACoreDecoder *VAR_16, AVFrame *VAR_17)
{
    AVCodecContext *VAR_18 = VAR_16->avctx;
    DCAContext *VAR_19 = VAR_18->priv_data;
    int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;


    if (!(VAR_19->packet & VAR_7) && (VAR_23 = FUNC_3(VAR_16, 0)) < 0)
        return VAR_23;

    VAR_18->sample_rate = VAR_16->output_rate;
    VAR_18->sample_fmt = VAR_0;
    VAR_18->bits_per_raw_sample = 24;

    VAR_17->nb_samples = VAR_25 = VAR_16->npcmsamples;
    if ((VAR_23 = FUNC_5(VAR_18, VAR_17, 0)) < 0)
        return VAR_23;


    if (VAR_16->es_format && (VAR_16->ext_audio_mask & VAR_4)
        && VAR_16->audio_mode >= VAR_1) {
        VAR_16->dcadsp->dmix_sub_xch(VAR_16->output_samples[VAR_10],
                                VAR_16->output_samples[VAR_12],
                                VAR_16->output_samples[VAR_8],
                                VAR_25);

    }


    if ((VAR_16->ext_audio_mask & (VAR_5 | VAR_6))
        && VAR_16->xxch_dmix_embedded) {
        int VAR_26 = VAR_16->xxch_dmix_scale_inv;
        int *VAR_27 = VAR_16->xxch_dmix_coeff;
        int VAR_28 = VAR_15[VAR_16->audio_mode];
        FUNC_1(VAR_16->nchannels - VAR_28 <= VAR_13);


        for (VAR_24 = 0; VAR_24 < VAR_16->xxch_mask_nbits; VAR_24++) {
            if (VAR_16->xxch_core_mask & (1U << VAR_24)) {
                VAR_16->dcadsp->dmix_scale_inv(VAR_16->output_samples[VAR_24],
                                          VAR_26, VAR_25);
            }
        }


        for (VAR_22 = VAR_28; VAR_22 < VAR_16->nchannels; VAR_22++) {
            int VAR_29 = FUNC_6(VAR_16, VAR_22);
            if (VAR_29 < 0)
                return FUNC_0(VAR_14);
            for (VAR_24 = 0; VAR_24 < VAR_16->xxch_mask_nbits; VAR_24++) {
                if (VAR_16->xxch_dmix_mask[VAR_22 - VAR_28] & (1U << VAR_24)) {
                    int VAR_30 = FUNC_7(*VAR_27++, VAR_26);
                    if (VAR_30) {
                        VAR_16->dcadsp->dmix_sub(VAR_16->output_samples[VAR_24 ],
                                            VAR_16->output_samples[VAR_29],
                                            VAR_30, VAR_25);
                    }
                }
            }
        }
    }

    if (!(VAR_16->ext_audio_mask & (VAR_5 | VAR_4 | VAR_6))) {

        if ((VAR_16->sumdiff_front && VAR_16->audio_mode > VAR_2)
            || VAR_16->audio_mode == VAR_3) {
            VAR_16->fixed_dsp->butterflies_fixed(VAR_16->output_samples[VAR_9],
                                            VAR_16->output_samples[VAR_11],
                                            VAR_25);
        }


        if (VAR_16->sumdiff_surround && VAR_16->audio_mode >= VAR_1) {
            VAR_16->fixed_dsp->butterflies_fixed(VAR_16->output_samples[VAR_10],
                                            VAR_16->output_samples[VAR_12],
                                            VAR_25);
        }
    }


    if (VAR_16->request_mask != VAR_16->ch_mask) {
        FUNC_4(VAR_16->dcadsp,
                                       VAR_16->output_samples,
                                       VAR_16->prim_dmix_coeff,
                                       VAR_25, VAR_16->ch_mask);
    }

    for (VAR_20 = 0; VAR_20 < VAR_18->channels; VAR_20++) {
        int32_t *VAR_31 = VAR_16->output_samples[VAR_16->ch_remap[VAR_20]];
        int32_t *VAR_32 = (int32_t *)VAR_17->extended_data[VAR_20];
        for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++)
            VAR_32[VAR_21] = FUNC_2(VAR_31[VAR_21]) * (1 << 8);
    }

    return 0;
}
