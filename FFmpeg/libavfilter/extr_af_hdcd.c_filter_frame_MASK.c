
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_19__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {int format; TYPE_4__* dst; } ;
struct TYPE_17__ {int nb_samples; int format; int channels; scalar_t__* data; scalar_t__* extended_data; } ;
struct TYPE_16__ {int bits_per_sample; int sample_count; int detect; int * state; scalar_t__ process_stereo; } ;
typedef TYPE_1__ HDCDContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *,int*,int,int) ;
 int FUNC_9 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    HDCDContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;
    const int16_t *VAR_7;
    const int32_t *VAR_8;
    int32_t *VAR_9;
    int VAR_10, VAR_11, VAR_12;
    int VAR_13 = 32 - VAR_4->bits_per_sample;

    VAR_6 = FUNC_4(VAR_5, VAR_2->nb_samples);
    if (!VAR_6) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    VAR_12 = FUNC_1(VAR_6, VAR_2);
    if (VAR_12) {
        FUNC_2(&VAR_6);
        FUNC_2(&VAR_2);
        return VAR_12;
    }
    VAR_6->format = VAR_5->format;

    VAR_9 = (int32_t*)VAR_6->data[0];
    switch (VAR_1->format) {
        case 130:
            for (VAR_10 = 0; VAR_10 < VAR_2->nb_samples; VAR_10++)
                for (VAR_11 = 0; VAR_11 < VAR_2->channels; VAR_11++) {
                    VAR_7 = (int16_t*)VAR_2->extended_data[VAR_11];
                    VAR_9[(VAR_10 * VAR_2->channels) + VAR_11] = VAR_7[VAR_10];
                }
            break;
        case 131:
            VAR_7 = (int16_t*)VAR_2->data[0];
            for (VAR_10 = 0; VAR_10 < VAR_2->nb_samples * VAR_2->channels; VAR_10++)
                VAR_9[VAR_10] = VAR_7[VAR_10];
            break;

        case 128:
            for (VAR_10 = 0; VAR_10 < VAR_2->nb_samples; VAR_10++)
                for (VAR_11 = 0; VAR_11 < VAR_2->channels; VAR_11++) {
                    VAR_8 = (int32_t*)VAR_2->extended_data[VAR_11];
                    VAR_9[(VAR_10 * VAR_2->channels) + VAR_11] = VAR_8[VAR_10] >> VAR_13;
                }
            break;
        case 129:
            VAR_8 = (int32_t*)VAR_2->data[0];
            for (VAR_10 = 0; VAR_10 < VAR_2->nb_samples * VAR_2->channels; VAR_10++)
                VAR_9[VAR_10] = VAR_8[VAR_10] >> VAR_13;
            break;
    }

    if (VAR_4->process_stereo) {
        FUNC_7(&VAR_4->detect);
        FUNC_9(VAR_4, VAR_9, VAR_2->nb_samples);
        FUNC_6(&VAR_4->state[0], &VAR_4->detect);
        FUNC_6(&VAR_4->state[1], &VAR_4->detect);
        FUNC_5(&VAR_4->detect, 2);
    } else {
        FUNC_7(&VAR_4->detect);
        for (VAR_11 = 0; VAR_11 < VAR_2->channels; VAR_11++) {
            FUNC_8(VAR_4, &VAR_4->state[VAR_11], VAR_9 + VAR_11, VAR_2->nb_samples, VAR_2->channels);
            FUNC_6(&VAR_4->state[VAR_11], &VAR_4->detect);
        }
        FUNC_5(&VAR_4->detect, VAR_2->channels);
    }

    VAR_4->sample_count += VAR_2->nb_samples * VAR_2->channels;

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_5, VAR_6);
}
