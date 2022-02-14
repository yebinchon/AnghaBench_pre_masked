
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_15__ {scalar_t__ sample_fmt; int nb_samples; int channels; scalar_t__ data; int samples_align; int ptr_align; } ;
struct TYPE_13__ {int samples_align; int ptr_align; int quantize; } ;
struct TYPE_14__ {scalar_t__ method; int samples_align; TYPE_3__* s16_data; int ac_out; int quantize; TYPE_1__ ddsp; int ch_map_info; scalar_t__ apply_map; int ac_in; TYPE_3__* flt_data; } ;
typedef TYPE_2__ DitherContext ;
typedef TYPE_3__ AudioData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int **,float* const*,int ,int ) ;
 int FUNC_3 (int ,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int VAR_4 ;

int FUNC_6(DitherContext *VAR_5, AudioData *VAR_6, AudioData *VAR_7)
{
    int VAR_8;
    AudioData *VAR_9;


    if (VAR_6->sample_fmt == VAR_3)
        VAR_5->s16_data = VAR_6;
    else {

        VAR_8 = FUNC_5(VAR_5->s16_data, VAR_7->nb_samples);
        if (VAR_8 < 0)
            return VAR_8;
    }

    if (VAR_7->sample_fmt != VAR_1 || VAR_5->apply_map) {

        VAR_8 = FUNC_5(VAR_5->flt_data, VAR_7->nb_samples);
        if (VAR_8 < 0)
            return VAR_8;
        VAR_9 = VAR_5->flt_data;
    }

    if (VAR_7->sample_fmt != VAR_1) {

        VAR_8 = FUNC_3(VAR_5->ac_in, VAR_9, VAR_7);
        if (VAR_8 < 0)
            return VAR_8;
    } else if (VAR_5->apply_map) {
        VAR_8 = FUNC_4(VAR_9, VAR_7, VAR_5->ch_map_info);
        if (VAR_8 < 0)
            return VAR_8;
    } else {
        VAR_9 = VAR_7;
    }


    if (VAR_5->method != VAR_0) {
        int VAR_10 = FUNC_1(VAR_9->ptr_align, VAR_5->s16_data->ptr_align);
        int VAR_11 = FUNC_1(VAR_9->samples_align, VAR_5->s16_data->samples_align);
        int VAR_12 = FUNC_0(VAR_7->nb_samples, VAR_5->ddsp.samples_align);

        if (!(VAR_10 % VAR_5->ddsp.ptr_align) && VAR_11 >= VAR_12) {
            VAR_5->quantize = VAR_5->ddsp.quantize;
            VAR_5->samples_align = VAR_5->ddsp.samples_align;
        } else {
            VAR_5->quantize = VAR_4;
            VAR_5->samples_align = 1;
        }
    }

    VAR_8 = FUNC_2(VAR_5, (int16_t **)VAR_5->s16_data->data,
                          (float * const *)VAR_9->data, VAR_7->channels,
                          VAR_7->nb_samples);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_5->s16_data->nb_samples = VAR_7->nb_samples;


    if (VAR_6->sample_fmt == VAR_2) {
        VAR_8 = FUNC_3(VAR_5->ac_out, VAR_6, VAR_5->s16_data);
        if (VAR_8 < 0)
            return VAR_8;
    } else
        VAR_5->s16_data = ((void*)0);

    return 0;
}
