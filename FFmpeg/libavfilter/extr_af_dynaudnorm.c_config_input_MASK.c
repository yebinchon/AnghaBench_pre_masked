
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {int channels; int sample_rate; TYPE_3__* dst; } ;
struct TYPE_8__ {int frame_len; double* prev_amplification_factor; int filter_size; int channels; int delay; void** fade_factors; void** gain_history_smoothed; void** gain_history_minimum; void** gain_history_original; void* weights; void* is_enabled; void* compress_threshold; void* dc_correction_value; int frame_len_msec; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int) ;
 void* FUNC_3 (int,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (void**,int) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    DynamicAudioNormalizerContext *VAR_4 = VAR_3->priv;
    int VAR_5;

    FUNC_8(VAR_3);

    VAR_4->frame_len = FUNC_5(VAR_2->sample_rate, VAR_4->frame_len_msec);
    FUNC_2(VAR_3, VAR_0, "frame len %d\n", VAR_4->frame_len);

    VAR_4->fade_factors[0] = FUNC_3(VAR_4->frame_len, sizeof(*VAR_4->fade_factors[0]));
    VAR_4->fade_factors[1] = FUNC_3(VAR_4->frame_len, sizeof(*VAR_4->fade_factors[1]));

    VAR_4->prev_amplification_factor = FUNC_3(VAR_2->channels, sizeof(*VAR_4->prev_amplification_factor));
    VAR_4->dc_correction_value = FUNC_1(VAR_2->channels, sizeof(*VAR_4->dc_correction_value));
    VAR_4->compress_threshold = FUNC_1(VAR_2->channels, sizeof(*VAR_4->compress_threshold));
    VAR_4->gain_history_original = FUNC_1(VAR_2->channels, sizeof(*VAR_4->gain_history_original));
    VAR_4->gain_history_minimum = FUNC_1(VAR_2->channels, sizeof(*VAR_4->gain_history_minimum));
    VAR_4->gain_history_smoothed = FUNC_1(VAR_2->channels, sizeof(*VAR_4->gain_history_smoothed));
    VAR_4->weights = FUNC_3(VAR_4->filter_size, sizeof(*VAR_4->weights));
    VAR_4->is_enabled = FUNC_4(VAR_4->filter_size);
    if (!VAR_4->prev_amplification_factor || !VAR_4->dc_correction_value ||
        !VAR_4->compress_threshold || !VAR_4->fade_factors[0] || !VAR_4->fade_factors[1] ||
        !VAR_4->gain_history_original || !VAR_4->gain_history_minimum ||
        !VAR_4->gain_history_smoothed || !VAR_4->is_enabled || !VAR_4->weights)
        return FUNC_0(VAR_1);

    for (VAR_5 = 0; VAR_5 < VAR_2->channels; VAR_5++) {
        VAR_4->prev_amplification_factor[VAR_5] = 1.0;

        VAR_4->gain_history_original[VAR_5] = FUNC_4(VAR_4->filter_size);
        VAR_4->gain_history_minimum[VAR_5] = FUNC_4(VAR_4->filter_size);
        VAR_4->gain_history_smoothed[VAR_5] = FUNC_4(VAR_4->filter_size);

        if (!VAR_4->gain_history_original[VAR_5] || !VAR_4->gain_history_minimum[VAR_5] ||
            !VAR_4->gain_history_smoothed[VAR_5])
            return FUNC_0(VAR_1);
    }

    FUNC_7(VAR_4->fade_factors, VAR_4->frame_len);
    FUNC_6(VAR_4);

    VAR_4->channels = VAR_2->channels;
    VAR_4->delay = VAR_4->filter_size;

    return 0;
}
