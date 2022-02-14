
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {int nb_samples; } ;
struct TYPE_15__ {int out_sample_rate; int in_sample_rate; int cutoff; int phase_shift; int internal_sample_fmt; double filter_size; int resample_channels; int kaiser_beta; int filter_type; int linear_interp; } ;
struct TYPE_14__ {int phase_shift; int phase_mask; int filter_length; int padding_size; int initial_padding_samples; struct TYPE_14__* filter_bank; TYPE_9__* buffer; scalar_t__ frac; scalar_t__ index; scalar_t__ initial_padding_filled; int dst_incr; int ideal_dst_incr; int src_incr; scalar_t__ compensation_distance; int set_filter; int resample_nearest; int linear; int resample_one; int kaiser_beta; int filter_type; TYPE_2__* avr; } ;
typedef TYPE_1__ ResampleContext ;
typedef TYPE_2__ AVAudioResampleContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int,int) ;
 double FUNC_1 (int,double) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,char*,int ,...) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int *,int *,int,int,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,double) ;
 scalar_t__ FUNC_9 (double) ;
 TYPE_9__* FUNC_10 (int ,int,int,char*) ;
 int FUNC_11 (TYPE_9__**) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

ResampleContext *FUNC_15(AVAudioResampleContext *VAR_21)
{
    ResampleContext *VAR_22;
    int VAR_23 = VAR_21->out_sample_rate;
    int VAR_24 = VAR_21->in_sample_rate;
    double VAR_25 = FUNC_1(VAR_23 * VAR_21->cutoff / VAR_24, 1.0);
    int VAR_26 = 1 << VAR_21->phase_shift;
    int VAR_27;

    if (VAR_21->internal_sample_fmt != 129 &&
        VAR_21->internal_sample_fmt != 128 &&
        VAR_21->internal_sample_fmt != 130 &&
        VAR_21->internal_sample_fmt != 131) {
        FUNC_5(VAR_21, VAR_3, "Unsupported internal format for "
               "resampling: %s\n",
               FUNC_4(VAR_21->internal_sample_fmt));
        return ((void*)0);
    }
    VAR_22 = FUNC_6(sizeof(*VAR_22));
    if (!VAR_22)
        return ((void*)0);

    VAR_22->avr = VAR_21;
    VAR_22->phase_shift = VAR_21->phase_shift;
    VAR_22->phase_mask = VAR_26 - 1;
    VAR_22->linear = VAR_21->linear_interp;
    VAR_22->filter_length = FUNC_0((int)FUNC_9(VAR_21->filter_size / VAR_25), 1);
    VAR_22->filter_type = VAR_21->filter_type;
    VAR_22->kaiser_beta = VAR_21->kaiser_beta;

    switch (VAR_21->internal_sample_fmt) {
    case 131:
        VAR_22->resample_one = VAR_22->linear ? VAR_5 : VAR_13;
        VAR_22->resample_nearest = VAR_9;
        VAR_22->set_filter = VAR_17;
        break;
    case 130:
        VAR_22->resample_one = VAR_22->linear ? VAR_6 : VAR_14;
        VAR_22->resample_nearest = VAR_10;
        VAR_22->set_filter = VAR_18;
        break;
    case 128:
        VAR_22->resample_one = VAR_22->linear ? VAR_8 : VAR_16;
        VAR_22->resample_nearest = VAR_12;
        VAR_22->set_filter = VAR_20;
        break;
    case 129:
        VAR_22->resample_one = VAR_22->linear ? VAR_7 : VAR_15;
        VAR_22->resample_nearest = VAR_11;
        VAR_22->set_filter = VAR_19;
        break;
    }

    if (VAR_0)
        FUNC_12(VAR_22, VAR_21->internal_sample_fmt);
    if (VAR_1)
        FUNC_13(VAR_22, VAR_21->internal_sample_fmt);

    VAR_27 = FUNC_3(VAR_21->internal_sample_fmt);
    VAR_22->filter_bank = FUNC_6(VAR_22->filter_length * (VAR_26 + 1) * VAR_27);
    if (!VAR_22->filter_bank)
        goto error;

    if (FUNC_8(VAR_22, VAR_25) < 0)
        goto error;

    FUNC_14(&VAR_22->filter_bank[(VAR_22->filter_length * VAR_26 + 1) * VAR_27],
           VAR_22->filter_bank, (VAR_22->filter_length - 1) * VAR_27);
    FUNC_14(&VAR_22->filter_bank[VAR_22->filter_length * VAR_26 * VAR_27],
           &VAR_22->filter_bank[(VAR_22->filter_length - 1) * VAR_27], VAR_27);

    VAR_22->compensation_distance = 0;
    if (!FUNC_7(&VAR_22->src_incr, &VAR_22->dst_incr, VAR_23,
                   VAR_24 * (int64_t)VAR_26, VAR_4 / 2))
        goto error;
    VAR_22->ideal_dst_incr = VAR_22->dst_incr;

    VAR_22->padding_size = (VAR_22->filter_length - 1) / 2;
    VAR_22->initial_padding_filled = 0;
    VAR_22->index = 0;
    VAR_22->frac = 0;


    VAR_22->buffer = FUNC_10(VAR_21->resample_channels, VAR_22->padding_size,
                                    VAR_21->internal_sample_fmt,
                                    "resample buffer");
    if (!VAR_22->buffer)
        goto error;
    VAR_22->buffer->nb_samples = VAR_22->padding_size;
    VAR_22->initial_padding_samples = VAR_22->padding_size;

    FUNC_5(VAR_21, VAR_2, "resample: %s from %d Hz to %d Hz\n",
           FUNC_4(VAR_21->internal_sample_fmt),
           VAR_21->in_sample_rate, VAR_21->out_sample_rate);

    return VAR_22;

error:
    FUNC_11(&VAR_22->buffer);
    FUNC_2(VAR_22->filter_bank);
    FUNC_2(VAR_22);
    return ((void*)0);
}
