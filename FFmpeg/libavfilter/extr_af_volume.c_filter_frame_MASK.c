
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef float uint32_t ;
typedef int int64_t ;
typedef float int32_t ;
struct TYPE_25__ {scalar_t__ replaygain; int volume; float replaygain_preamp; int volume_i; int* var_values; scalar_t__ eval_mode; scalar_t__ precision; int channels; int planes; TYPE_1__* fdsp; int sample_fmt; int (* scale_samples ) (scalar_t__,scalar_t__,int,int) ;int samples_align; scalar_t__ replaygain_noclip; } ;
typedef TYPE_2__ VolumeContext ;
struct TYPE_30__ {TYPE_6__** outputs; TYPE_2__* priv; } ;
struct TYPE_29__ {int frame_count_out; int time_base; TYPE_7__* dst; } ;
struct TYPE_28__ {int nb_samples; int pkt_pos; scalar_t__* extended_data; int format; int pts; } ;
struct TYPE_27__ {scalar_t__ data; } ;
struct TYPE_26__ {scalar_t__ track_gain; scalar_t__ track_peak; scalar_t__ album_gain; scalar_t__ album_peak; } ;
struct TYPE_24__ {int (* vector_dmul_scalar ) (double*,double const*,double,int) ;int (* vector_fmul_scalar ) (float*,float const*,double,int) ;} ;
typedef TYPE_3__ AVReplayGain ;
typedef TYPE_4__ AVFrameSideData ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,double) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_5__**) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_7__*,int ,char*,...) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (float) ;
 int FUNC_15 (TYPE_6__*,TYPE_5__*) ;
 TYPE_5__* FUNC_16 (TYPE_6__*,int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (scalar_t__,scalar_t__,int,int) ;
 int FUNC_20 (float*,float const*,double,int) ;
 int FUNC_21 (double*,double const*,double,int) ;
 int FUNC_22 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_23(AVFilterLink *VAR_19, AVFrame *VAR_20)
{
    AVFilterContext *VAR_21 = VAR_19->dst;
    VolumeContext *VAR_22 = VAR_19->dst->priv;
    AVFilterLink *VAR_23 = VAR_19->dst->outputs[0];
    int VAR_24 = VAR_20->nb_samples;
    AVFrame *VAR_25;
    int64_t VAR_26;
    AVFrameSideData *VAR_27 = FUNC_7(VAR_20, VAR_0);
    int VAR_28;

    if (VAR_27 && VAR_22->replaygain != VAR_10) {
        if (VAR_22->replaygain != VAR_9) {
            AVReplayGain *VAR_29 = (AVReplayGain*)VAR_27->data;
            int32_t VAR_30 = 100000;
            uint32_t VAR_31 = 100000;
            float VAR_32, VAR_33;

            if (VAR_22->replaygain == VAR_11 &&
                VAR_29->track_gain != VAR_6) {
                VAR_30 = VAR_29->track_gain;

                if (VAR_29->track_peak != 0)
                    VAR_31 = VAR_29->track_peak;
            } else if (VAR_29->album_gain != VAR_6) {
                VAR_30 = VAR_29->album_gain;

                if (VAR_29->album_peak != 0)
                    VAR_31 = VAR_29->album_peak;
            } else {
                FUNC_11(VAR_19->dst, VAR_2, "Both ReplayGain gain "
                       "values are unknown.\n");
            }
            VAR_32 = VAR_30 / 100000.0f;
            VAR_33 = VAR_31 / 100000.0f;

            FUNC_11(VAR_19->dst, VAR_1,
                   "Using gain %f dB from replaygain side data.\n", VAR_32);

            VAR_22->volume = FUNC_14((VAR_32 + VAR_22->replaygain_preamp) / 20);
            if (VAR_22->replaygain_noclip)
                VAR_22->volume = FUNC_2(VAR_22->volume, 1.0 / VAR_33);
            VAR_22->volume_i = (int)(VAR_22->volume * 256 + 0.5);

            FUNC_22(VAR_22);
        }
        FUNC_9(VAR_20, VAR_0);
    }

    if (FUNC_17(VAR_22->var_values[VAR_16])) {
        VAR_22->var_values[VAR_16] = FUNC_3(VAR_20->pts);
        VAR_22->var_values[VAR_17 ] = FUNC_4(VAR_20->pts, VAR_19->time_base);
    }
    VAR_22->var_values[VAR_15] = FUNC_3(VAR_20->pts);
    VAR_22->var_values[VAR_18 ] = FUNC_4(VAR_20->pts, VAR_19->time_base);
    VAR_22->var_values[VAR_12 ] = VAR_19->frame_count_out;

    VAR_26 = VAR_20->pkt_pos;
    VAR_22->var_values[VAR_14] = VAR_26 == -1 ? VAR_7 : VAR_26;
    if (VAR_22->eval_mode == VAR_5)
        FUNC_18(VAR_21);

    if (VAR_22->volume == 1.0 || VAR_22->volume_i == 256) {
        VAR_25 = VAR_20;
        goto end;
    }


    if (FUNC_8(VAR_20)
            && (VAR_22->precision != VAR_8 || VAR_22->volume_i > 0)) {
        VAR_25 = VAR_20;
    } else {
        VAR_25 = FUNC_16(VAR_23, VAR_24);
        if (!VAR_25) {
            FUNC_6(&VAR_20);
            return FUNC_0(VAR_4);
        }
        VAR_28 = FUNC_5(VAR_25, VAR_20);
        if (VAR_28 < 0) {
            FUNC_6(&VAR_25);
            FUNC_6(&VAR_20);
            return VAR_28;
        }
    }

    if (VAR_22->precision != VAR_8 || VAR_22->volume_i > 0) {
        int VAR_34, VAR_35;

        if (FUNC_12(VAR_20->format))
            VAR_35 = FUNC_1(VAR_24, VAR_22->samples_align);
        else
            VAR_35 = FUNC_1(VAR_24 * VAR_22->channels, VAR_22->samples_align);

        if (VAR_22->precision == VAR_8) {
            for (VAR_34 = 0; VAR_34 < VAR_22->planes; VAR_34++) {
                VAR_22->scale_samples(VAR_25->extended_data[VAR_34],
                                   VAR_20->extended_data[VAR_34], VAR_35,
                                   VAR_22->volume_i);
            }
        } else if (FUNC_10(VAR_22->sample_fmt) == VAR_3) {
            for (VAR_34 = 0; VAR_34 < VAR_22->planes; VAR_34++) {
                VAR_22->fdsp->vector_fmul_scalar((float *)VAR_25->extended_data[VAR_34],
                                             (const float *)VAR_20->extended_data[VAR_34],
                                             VAR_22->volume, VAR_35);
            }
        } else {
            for (VAR_34 = 0; VAR_34 < VAR_22->planes; VAR_34++) {
                VAR_22->fdsp->vector_dmul_scalar((double *)VAR_25->extended_data[VAR_34],
                                             (const double *)VAR_20->extended_data[VAR_34],
                                             VAR_22->volume, VAR_35);
            }
        }
    }

    FUNC_13();

    if (VAR_20 != VAR_25)
        FUNC_6(&VAR_20);

end:
    VAR_22->var_values[VAR_13] += VAR_25->nb_samples;
    return FUNC_15(VAR_23, VAR_25);
}
