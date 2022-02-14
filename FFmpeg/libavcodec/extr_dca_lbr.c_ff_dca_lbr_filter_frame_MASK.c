
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t int8_t ;
struct TYPE_18__ {int channels; int channel_layout; int bit_rate; int profile; scalar_t__ bits_per_raw_sample; int sample_fmt; int sample_rate; } ;
struct TYPE_17__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_16__ {int ch_mask; int flags; int freq_range; int nchannels; int part_stereo_pres; int lfe_history; int lfe_data; TYPE_1__* dcadsp; int bit_rate_scaled; int sample_rate; TYPE_4__* avctx; } ;
struct TYPE_15__ {int (* lfe_iir ) (float*,int ,int ,int ,int) ;} ;
typedef TYPE_2__ DCALbrDecoder ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int * VAR_6 ;
 size_t** VAR_7 ;
 size_t** VAR_8 ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 size_t* VAR_10 ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 int FUNC_7 (float*,int ,int ,int ,int) ;
 int FUNC_8 (TYPE_2__*,int,float*) ;

int FUNC_9(DCALbrDecoder *VAR_11, AVFrame *VAR_12)
{
    AVCodecContext *VAR_13 = VAR_11->avctx;
    int VAR_14, VAR_15, VAR_16, VAR_17 = (VAR_11->ch_mask & 0x7) - 1;
    const int8_t *VAR_18;

    VAR_13->channel_layout = VAR_6[VAR_17];
    VAR_13->channels = VAR_16 = VAR_5[VAR_17];
    VAR_13->sample_rate = VAR_11->sample_rate;
    VAR_13->sample_fmt = VAR_2;
    VAR_13->bits_per_raw_sample = 0;
    VAR_13->profile = VAR_3;
    VAR_13->bit_rate = VAR_11->bit_rate_scaled;

    if (VAR_11->flags & VAR_4) {
        VAR_13->channel_layout |= VAR_0;
        VAR_13->channels++;
        VAR_18 = VAR_7[VAR_17];
    } else {
        VAR_18 = VAR_8[VAR_17];
    }

    VAR_12->nb_samples = 1024 << VAR_11->freq_range;
    if ((VAR_15 = FUNC_3(VAR_13, VAR_12, 0)) < 0)
        return VAR_15;


    for (VAR_14 = 0; VAR_14 < (VAR_11->nchannels + 1) / 2; VAR_14++) {
        int VAR_19 = VAR_14 * 2;
        int VAR_20 = FUNC_0(VAR_19 + 1, VAR_11->nchannels - 1);

        FUNC_1(VAR_11, VAR_19, VAR_20);

        FUNC_6(VAR_11, VAR_19, VAR_20);

        FUNC_5(VAR_11, VAR_19, VAR_20);

        if (VAR_19 != VAR_20 && (VAR_11->part_stereo_pres & (1 << VAR_19)))
            FUNC_2(VAR_11, VAR_19, VAR_20);

        if (VAR_19 < VAR_16)
            FUNC_8(VAR_11, VAR_19, (float *)VAR_12->extended_data[VAR_18[VAR_19]]);

        if (VAR_19 != VAR_20 && VAR_20 < VAR_16)
            FUNC_8(VAR_11, VAR_20, (float *)VAR_12->extended_data[VAR_18[VAR_20]]);
    }


    if (VAR_11->flags & VAR_4) {
        VAR_11->dcadsp->lfe_iir((float *)VAR_12->extended_data[VAR_10[VAR_17]],
                           VAR_11->lfe_data, VAR_9,
                           VAR_11->lfe_history, 16 << VAR_11->freq_range);
    }

    if ((VAR_15 = FUNC_4(VAR_12, VAR_1)) < 0)
        return VAR_15;

    return 0;
}
