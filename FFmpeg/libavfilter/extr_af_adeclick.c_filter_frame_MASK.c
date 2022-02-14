
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {TYPE_6__* out; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_24__ {TYPE_1__* internal; TYPE_5__* priv; TYPE_7__** outputs; } ;
struct TYPE_23__ {int channels; TYPE_8__* dst; } ;
struct TYPE_22__ {int nb_samples; int pts; } ;
struct TYPE_21__ {int hop_size; scalar_t__ samples_left; int pts; int detected_errors; int nb_samples; int fifo; TYPE_3__* is; TYPE_2__* in; int window_size; } ;
struct TYPE_19__ {scalar_t__* extended_data; } ;
struct TYPE_18__ {int channels; scalar_t__ extended_data; } ;
struct TYPE_17__ {int (* execute ) (TYPE_8__*,int ,TYPE_4__*,int *,int) ;} ;
typedef TYPE_5__ AudioDeclickContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;
typedef TYPE_8__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,void**,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__**) ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*) ;
 TYPE_6__* FUNC_7 (TYPE_7__*,int) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_8__*,int ,TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    AudioDeclickContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6 = ((void*)0);
    int VAR_7 = 0, VAR_8, VAR_9, VAR_10 = 0;
    ThreadData VAR_11;

    VAR_6 = FUNC_7(VAR_4, VAR_5->hop_size);
    if (!VAR_6)
        return FUNC_0(VAR_0);

    VAR_7 = FUNC_3(VAR_5->fifo, (void **)VAR_5->in->extended_data,
                             VAR_5->window_size);
    if (VAR_7 < 0)
        goto fail;

    VAR_11.out = VAR_6;
    VAR_7 = VAR_3->internal->execute(VAR_3, VAR_1, &VAR_11, ((void*)0), VAR_2->channels);
    if (VAR_7 < 0)
        goto fail;

    for (VAR_9 = 0; VAR_9 < VAR_5->in->channels; VAR_9++) {
        double *VAR_12 = (double *)VAR_5->is->extended_data[VAR_9];

        for (VAR_8 = 0; VAR_8 < VAR_5->hop_size; VAR_8++) {
            if (VAR_12[VAR_8])
                VAR_10++;
        }
    }

    FUNC_2(VAR_5->fifo, VAR_5->hop_size);

    if (VAR_5->samples_left > 0)
        VAR_6->nb_samples = FUNC_1(VAR_5->hop_size, VAR_5->samples_left);

    VAR_6->pts = VAR_5->pts;
    VAR_5->pts += VAR_5->hop_size;

    VAR_5->detected_errors += VAR_10;
    VAR_5->nb_samples += VAR_6->nb_samples * VAR_2->channels;

    VAR_7 = FUNC_6(VAR_4, VAR_6);
    if (VAR_7 < 0)
        return VAR_7;

    if (VAR_5->samples_left > 0) {
        VAR_5->samples_left -= VAR_5->hop_size;
        if (VAR_5->samples_left <= 0)
            FUNC_2(VAR_5->fifo, FUNC_4(VAR_5->fifo));
    }

fail:
    if (VAR_7 < 0)
        FUNC_5(&VAR_6);
    return VAR_7;
}
