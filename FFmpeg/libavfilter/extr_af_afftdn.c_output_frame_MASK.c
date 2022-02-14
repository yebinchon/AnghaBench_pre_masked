
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_31__ {TYPE_5__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_36__ {TYPE_1__* internal; TYPE_4__* priv; TYPE_6__** outputs; } ;
struct TYPE_35__ {int channels; TYPE_7__* dst; } ;
struct TYPE_34__ {int pts; scalar_t__* extended_data; } ;
struct TYPE_33__ {int window_length; scalar_t__ noise_floor; scalar_t__ last_noise_floor; int sample_noise; int sample_advance; int output_mode; int pts; int fifo; TYPE_3__* dnch; int block_count; scalar_t__ sample_noise_end; scalar_t__ sample_noise_start; scalar_t__ track_noise; } ;
struct TYPE_32__ {double* out_samples; } ;
struct TYPE_30__ {int (* execute ) (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ DeNoiseChannel ;
typedef TYPE_4__ AudioFFTDeNoiseContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;



 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,void**,int) ;
 int FUNC_4 (TYPE_5__**) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_7__*) ;
 TYPE_5__* FUNC_7 (TYPE_6__*,int) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,double*) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*,double*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (double*,double*,int) ;
 int FUNC_12 (double*,int ,int) ;
 int FUNC_13 (TYPE_4__*,TYPE_3__*,TYPE_5__*,int) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*,TYPE_3__*,double*,int) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_18(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    AudioFFTDeNoiseContext *VAR_6 = VAR_4->priv;
    AVFrame *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    ThreadData VAR_9;
    int VAR_10 = 0;

    VAR_8 = FUNC_7(VAR_5, VAR_6->window_length);
    if (!VAR_8)
        return FUNC_0(VAR_1);

    VAR_10 = FUNC_3(VAR_6->fifo, (void **)VAR_8->extended_data, VAR_6->window_length);
    if (VAR_10 < 0)
        goto end;

    if (VAR_6->track_noise) {
        for (int VAR_11 = 0; VAR_11 < VAR_3->channels; VAR_11++) {
            DeNoiseChannel *VAR_12 = &VAR_6->dnch[VAR_11];
            double VAR_13[15];

            FUNC_9(VAR_6, VAR_12, VAR_13);
            FUNC_15(VAR_6, VAR_12, VAR_13, 0);
        }

        if (VAR_6->noise_floor != VAR_6->last_noise_floor)
            FUNC_16(VAR_6);
    }

    if (VAR_6->sample_noise_start) {
        for (int VAR_14 = 0; VAR_14 < VAR_3->channels; VAR_14++) {
            DeNoiseChannel *VAR_15 = &VAR_6->dnch[VAR_14];

            FUNC_10(VAR_15);
        }
        VAR_6->sample_noise_start = 0;
        VAR_6->sample_noise = 1;
    }

    if (VAR_6->sample_noise) {
        for (int VAR_16 = 0; VAR_16 < VAR_3->channels; VAR_16++) {
            DeNoiseChannel *VAR_17 = &VAR_6->dnch[VAR_16];

            FUNC_13(VAR_6, VAR_17, VAR_8, VAR_16);
        }
    }

    if (VAR_6->sample_noise_end) {
        for (int VAR_18 = 0; VAR_18 < VAR_3->channels; VAR_18++) {
            DeNoiseChannel *VAR_19 = &VAR_6->dnch[VAR_18];
            double VAR_20[15];

            FUNC_8(VAR_6, VAR_19, VAR_20);
            FUNC_15(VAR_6, VAR_19, VAR_20, 1);
            FUNC_14(VAR_6, VAR_19);
        }
        VAR_6->sample_noise = 0;
        VAR_6->sample_noise_end = 0;
    }

    VAR_6->block_count++;
    VAR_9.in = VAR_8;
    VAR_4->internal->execute(VAR_4, VAR_2, &VAR_9, ((void*)0),
                           FUNC_1(VAR_5->channels, FUNC_6(VAR_4)));

    VAR_7 = FUNC_7(VAR_5, VAR_6->sample_advance);
    if (!VAR_7) {
        VAR_10 = FUNC_0(VAR_1);
        goto end;
    }

    for (int VAR_21 = 0; VAR_21 < VAR_3->channels; VAR_21++) {
        DeNoiseChannel *VAR_22 = &VAR_6->dnch[VAR_21];
        double *VAR_23 = VAR_22->out_samples;
        float *VAR_24 = (float *)VAR_8->extended_data[VAR_21];
        float *VAR_25 = (float *)VAR_7->extended_data[VAR_21];

        switch (VAR_6->output_mode) {
        case 130:
            for (int VAR_26 = 0; VAR_26 < VAR_6->sample_advance; VAR_26++)
                VAR_25[VAR_26] = VAR_24[VAR_26];
            break;
        case 128:
            for (int VAR_27 = 0; VAR_27 < VAR_6->sample_advance; VAR_27++)
                VAR_25[VAR_27] = VAR_23[VAR_27];
            break;
        case 129:
            for (int VAR_28 = 0; VAR_28 < VAR_6->sample_advance; VAR_28++)
                VAR_25[VAR_28] = VAR_24[VAR_28] - VAR_23[VAR_28];
            break;
        default:
            FUNC_4(&VAR_7);
            VAR_10 = VAR_0;
            goto end;
        }
        FUNC_11(VAR_23, VAR_23 + VAR_6->sample_advance, (VAR_6->window_length - VAR_6->sample_advance) * sizeof(*VAR_23));
        FUNC_12(VAR_23 + (VAR_6->window_length - VAR_6->sample_advance), 0, VAR_6->sample_advance * sizeof(*VAR_23));
    }

    FUNC_2(VAR_6->fifo, VAR_6->sample_advance);

    VAR_7->pts = VAR_6->pts;
    VAR_10 = FUNC_5(VAR_5, VAR_7);
    if (VAR_10 < 0)
        goto end;
    VAR_6->pts += VAR_6->sample_advance;
end:
    FUNC_4(&VAR_8);

    return VAR_10;
}
