
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int * outputs; TYPE_2__* priv; } ;
struct TYPE_16__ {int channels; TYPE_5__* dst; } ;
struct TYPE_15__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_14__ {int buf_size; unsigned int delay; double dry; double wet; unsigned int w_ptr; TYPE_1__* delay_frame; } ;
struct TYPE_13__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ CompensationDelayContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    CompensationDelayContext *VAR_4 = VAR_3->priv;
    const unsigned VAR_5 = VAR_4->buf_size - 1;
    const unsigned VAR_6 = VAR_4->buf_size;
    const unsigned VAR_7 = VAR_4->delay;
    const double VAR_8 = VAR_4->dry;
    const double VAR_9 = VAR_4->wet;
    unsigned VAR_10, VAR_11;
    AVFrame *VAR_12;
    int VAR_13, VAR_14;

    VAR_12 = FUNC_4(VAR_3->outputs[0], VAR_2->nb_samples);
    if (!VAR_12) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_12, VAR_2);

    for (VAR_14 = 0; VAR_14 < VAR_1->channels; VAR_14++) {
        const double *VAR_15 = (const double *)VAR_2->extended_data[VAR_14];
        double *VAR_16 = (double *)VAR_12->extended_data[VAR_14];
        double *VAR_17 = (double *)VAR_4->delay_frame->extended_data[VAR_14];

        VAR_11 = VAR_4->w_ptr;
        VAR_10 = (VAR_11 + VAR_6 - VAR_7) & VAR_5;

        for (VAR_13 = 0; VAR_13 < VAR_2->nb_samples; VAR_13++) {
            const double VAR_18 = VAR_15[VAR_13];

            VAR_17[VAR_11] = VAR_18;
            VAR_16[VAR_13] = VAR_8 * VAR_18 + VAR_9 * VAR_17[VAR_10];
            VAR_11 = (VAR_11 + 1) & VAR_5;
            VAR_10 = (VAR_10 + 1) & VAR_5;
        }
    }
    VAR_4->w_ptr = VAR_11;

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_3->outputs[0], VAR_12);
}
