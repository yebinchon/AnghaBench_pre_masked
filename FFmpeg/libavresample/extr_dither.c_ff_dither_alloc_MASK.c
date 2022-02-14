
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_13__ {scalar_t__ dither_method; int ch_map_info; } ;
struct TYPE_12__ {int apply_map; scalar_t__ method; int channels; int mute_dither_threshold; int mute_reset_threshold; TYPE_1__* state; void* ac_in; void* flt_data; void* ac_out; void* s16_data; int ns_coef_a; int ns_coef_b; int ddsp; int * ch_map_info; } ;
struct TYPE_11__ {int mute; int seed; } ;
typedef TYPE_1__ DitherState ;
typedef TYPE_2__ DitherContext ;
typedef int AVLFG ;
typedef TYPE_3__ AVAudioResampleContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,int ,char*,...) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int *,scalar_t__) ;
 void* FUNC_9 (TYPE_3__*,int,int,int,int,int) ;
 void* FUNC_10 (int,int,int,char*) ;
 int FUNC_11 (TYPE_2__**) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_13 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

DitherContext *FUNC_14(AVAudioResampleContext *VAR_12,
                               enum AVSampleFormat VAR_13,
                               enum AVSampleFormat VAR_14,
                               int VAR_15, int VAR_16, int VAR_17)
{
    AVLFG VAR_18;
    DitherContext *VAR_19;
    int VAR_20;

    if (FUNC_2(VAR_13) != VAR_5 ||
        FUNC_1(VAR_14) <= 2) {
        FUNC_6(VAR_12, VAR_0, "dithering %s to %s is not supported\n",
               FUNC_3(VAR_14), FUNC_3(VAR_13));
        return ((void*)0);
    }

    VAR_19 = FUNC_7(sizeof(*VAR_19));
    if (!VAR_19)
        return ((void*)0);

    VAR_19->apply_map = VAR_17;
    if (VAR_17)
        VAR_19->ch_map_info = &VAR_12->ch_map_info;

    if (VAR_12->dither_method == VAR_3 &&
        VAR_16 != 48000 && VAR_16 != 44100) {
        FUNC_6(VAR_12, VAR_1, "sample rate must be 48000 or 44100 Hz "
               "for triangular_ns dither. using triangular_hp instead.\n");
        VAR_12->dither_method = VAR_2;
    }
    VAR_19->method = VAR_12->dither_method;
    FUNC_8(&VAR_19->ddsp, VAR_19->method);

    if (VAR_19->method == VAR_3) {
        if (VAR_16 == 48000) {
            VAR_19->ns_coef_b = VAR_11;
            VAR_19->ns_coef_a = VAR_10;
        } else {
            VAR_19->ns_coef_b = VAR_9;
            VAR_19->ns_coef_a = VAR_8;
        }
    }




    if (VAR_13 != VAR_6) {
        VAR_19->s16_data = FUNC_10(VAR_15, 1024, VAR_6,
                                          "dither s16 buffer");
        if (!VAR_19->s16_data)
            goto fail;

        VAR_19->ac_out = FUNC_9(VAR_12, VAR_13, VAR_6,
                                           VAR_15, VAR_16, 0);
        if (!VAR_19->ac_out)
            goto fail;
    }

    if (VAR_14 != VAR_4 || VAR_19->apply_map) {
        VAR_19->flt_data = FUNC_10(VAR_15, 1024, VAR_4,
                                          "dither flt buffer");
        if (!VAR_19->flt_data)
            goto fail;
    }
    if (VAR_14 != VAR_4) {
        VAR_19->ac_in = FUNC_9(VAR_12, VAR_4, VAR_14,
                                          VAR_15, VAR_16, VAR_19->apply_map);
        if (!VAR_19->ac_in)
            goto fail;
    }

    VAR_19->state = FUNC_7(VAR_15 * sizeof(*VAR_19->state));
    if (!VAR_19->state)
        goto fail;
    VAR_19->channels = VAR_15;



    VAR_19->mute_dither_threshold = FUNC_13(VAR_16 * VAR_7);
    VAR_19->mute_reset_threshold = VAR_19->mute_dither_threshold * 4;


    FUNC_5(&VAR_18, 0xC0FFEE);
    for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
        DitherState *VAR_21 = &VAR_19->state[VAR_20];
        VAR_21->mute = VAR_19->mute_reset_threshold + 1;
        VAR_21->seed = FUNC_4(&VAR_18);
        FUNC_12(VAR_19, VAR_21, FUNC_0(32768, VAR_16 / 2));
    }

    return VAR_19;

fail:
    FUNC_11(&VAR_19);
    return ((void*)0);
}
