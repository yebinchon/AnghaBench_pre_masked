
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
typedef enum AVMatrixEncoding { ____Placeholder_AVMatrixEncoding } AVMatrixEncoding ;
struct TYPE_37__ {int sample_rate; int bits_per_raw_sample; int channels; scalar_t__ bit_rate; int profile; scalar_t__ sample_fmt; TYPE_6__* priv_data; } ;
struct TYPE_36__ {int nb_samples; scalar_t__ format; scalar_t__* extended_data; } ;
struct TYPE_30__ {TYPE_5__* assets; } ;
struct TYPE_35__ {int packet; int request_channel_layout; TYPE_1__ exss; } ;
struct TYPE_34__ {scalar_t__ representation_type; int one_to_one_map_ch_to_spkr; } ;
struct TYPE_33__ {int residual_encode; int nchannels; int nfreqbands; int ch_mask; scalar_t__ dmix_type; int freq; int storage_bit_res; int dmix_coeff; int pcm_bit_res; scalar_t__ dmix_embedded; TYPE_2__* bands; int primary_chset; } ;
struct TYPE_32__ {int nchsets; int nactivechsets; int output_mask; int nfreqbands; int** output_samples; int nframesamples; int dcadsp; TYPE_4__* chset; scalar_t__ scalable_lsbs; scalar_t__ fixed_lsb_width; TYPE_8__* avctx; } ;
struct TYPE_31__ {scalar_t__ dmix_embedded; } ;
typedef int SUINT ;
typedef TYPE_3__ DCAXllDecoder ;
typedef TYPE_4__ DCAXllChSet ;
typedef TYPE_5__ DCAExssAsset ;
typedef TYPE_6__ DCAContext ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_8 (int ,int**,int ,int,int) ;
 int FUNC_9 (TYPE_8__*,int*,int) ;
 int FUNC_10 (TYPE_8__*,TYPE_7__*,int ) ;
 int FUNC_11 (TYPE_7__*,int) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_15 (TYPE_3__*,TYPE_4__*,int) ;

int FUNC_16(DCAXllDecoder *VAR_22, AVFrame *VAR_23)
{
    AVCodecContext *VAR_24 = VAR_22->avctx;
    DCAContext *VAR_25 = VAR_24->priv_data;
    DCAExssAsset *VAR_26 = &VAR_25->exss.assets[0];
    DCAXllChSet *VAR_27 = &VAR_22->chset[0], *VAR_28;
    enum AVMatrixEncoding VAR_29 = VAR_2;
    int VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
    int VAR_37[VAR_10];


    if (VAR_25->packet & VAR_7) {
        for (VAR_30 = 0, VAR_28 = VAR_22->chset; VAR_30 < VAR_22->nchsets; VAR_30++, VAR_28++) {
            if (VAR_30 < VAR_22->nactivechsets)
                FUNC_12(VAR_22, VAR_28);

            if (!VAR_28->primary_chset)
                VAR_28->dmix_embedded = 0;
        }

        VAR_22->scalable_lsbs = 0;
        VAR_22->fixed_lsb_width = 0;
    }


    VAR_22->output_mask = 0;
    for (VAR_30 = 0, VAR_28 = VAR_22->chset; VAR_30 < VAR_22->nactivechsets; VAR_30++, VAR_28++) {
        FUNC_5(VAR_22, VAR_28, 0);

        if (VAR_28->residual_encode != (1 << VAR_28->nchannels) - 1
            && (VAR_33 = FUNC_7(VAR_22, VAR_28)) < 0)
            return VAR_33;

        if (VAR_22->scalable_lsbs)
            FUNC_4(VAR_22, VAR_28, 0);

        if (VAR_28->nfreqbands > 1) {
            FUNC_5(VAR_22, VAR_28, 1);
            FUNC_4(VAR_22, VAR_28, 1);
        }

        VAR_22->output_mask |= VAR_28->ch_mask;
    }


    for (VAR_30 = 1, VAR_28 = &VAR_22->chset[1]; VAR_30 < VAR_22->nchsets; VAR_30++, VAR_28++) {
        if (!FUNC_13(VAR_28))
            continue;

        if (VAR_30 >= VAR_22->nactivechsets) {
            for (VAR_31 = 0; VAR_31 < VAR_28->nfreqbands; VAR_31++)
                if (VAR_28->bands[VAR_31].dmix_embedded)
                    FUNC_14(VAR_22, VAR_28, VAR_31);
            break;
        }

        for (VAR_31 = 0; VAR_31 < VAR_28->nfreqbands; VAR_31++)
            if (VAR_28->bands[VAR_31].dmix_embedded)
                FUNC_15(VAR_22, VAR_28, VAR_31);
    }


    if (VAR_22->nfreqbands > 1) {
        for (VAR_30 = 0; VAR_30 < VAR_22->nactivechsets; VAR_30++)
            if ((VAR_33 = FUNC_3(VAR_22, &VAR_22->chset[VAR_30])) < 0)
                return VAR_33;
    }


    if (VAR_25->request_channel_layout) {
        if (VAR_22->output_mask & VAR_15) {
            VAR_22->output_samples[VAR_12] = VAR_22->output_samples[VAR_13];
            VAR_22->output_mask = (VAR_22->output_mask & ~VAR_15) | VAR_14;
        }
        if (VAR_22->output_mask & VAR_17) {
            VAR_22->output_samples[VAR_18] = VAR_22->output_samples[VAR_19];
            VAR_22->output_mask = (VAR_22->output_mask & ~VAR_17) | VAR_16;
        }
    }


    if (VAR_25->request_channel_layout == VAR_11
        && FUNC_1(VAR_22->output_mask) && VAR_27->dmix_embedded
        && (VAR_27->dmix_type == VAR_5 ||
            VAR_27->dmix_type == VAR_6))
        VAR_36 = VAR_11;
    else
        VAR_36 = VAR_22->output_mask;
    if (!FUNC_9(VAR_24, VAR_37, VAR_36))
        return FUNC_0(VAR_20);

    VAR_24->sample_rate = VAR_27->freq << (VAR_22->nfreqbands - 1);

    switch (VAR_27->storage_bit_res) {
    case 16:
        VAR_24->sample_fmt = VAR_3;
        VAR_34 = 16 - VAR_27->pcm_bit_res;
        break;
    case 20:
    case 24:
        VAR_24->sample_fmt = VAR_4;
        VAR_34 = 24 - VAR_27->pcm_bit_res;
        break;
    default:
        return FUNC_0(VAR_20);
    }

    VAR_24->bits_per_raw_sample = VAR_27->storage_bit_res;
    VAR_24->profile = VAR_21;
    VAR_24->bit_rate = 0;

    VAR_23->nb_samples = VAR_35 = VAR_22->nframesamples << (VAR_22->nfreqbands - 1);
    if ((VAR_33 = FUNC_10(VAR_24, VAR_23, 0)) < 0)
        return VAR_33;


    if (VAR_36 != VAR_22->output_mask) {
        FUNC_8(VAR_22->dcadsp, VAR_22->output_samples,
                                       VAR_27->dmix_coeff, VAR_35,
                                       VAR_22->output_mask);
    }

    for (VAR_30 = 0; VAR_30 < VAR_24->channels; VAR_30++) {
        int32_t *VAR_38 = VAR_22->output_samples[VAR_37[VAR_30]];
        if (VAR_23->format == VAR_3) {
            int16_t *VAR_39 = (int16_t *)VAR_23->extended_data[VAR_30];
            for (VAR_32 = 0; VAR_32 < VAR_35; VAR_32++)
                VAR_39[VAR_32] = FUNC_2(VAR_38[VAR_32] * (SUINT)(1 << VAR_34));
        } else {
            int32_t *VAR_40 = (int32_t *)VAR_23->extended_data[VAR_30];
            for (VAR_32 = 0; VAR_32 < VAR_35; VAR_32++)
                VAR_40[VAR_32] = FUNC_6(VAR_38[VAR_32] * (SUINT)(1 << VAR_34)) * (1 << 8);
        }
    }

    if (!VAR_26->one_to_one_map_ch_to_spkr) {
        if (VAR_26->representation_type == VAR_9)
            VAR_29 = VAR_0;
        else if (VAR_26->representation_type == VAR_8)
            VAR_29 = VAR_1;
    } else if (VAR_36 != VAR_22->output_mask && VAR_27->dmix_type == VAR_6) {
        VAR_29 = VAR_0;
    }
    if ((VAR_33 = FUNC_11(VAR_23, VAR_29)) < 0)
        return VAR_33;

    return 0;
}
