
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_19__ {double tempo; int stride; scalar_t__ start_pts; scalar_t__ dst; scalar_t__ dst_end; int nsamples_in; TYPE_10__* dst_buffer; } ;
struct TYPE_18__ {TYPE_2__** outputs; TYPE_4__* priv; } ;
struct TYPE_17__ {int time_base; TYPE_3__* dst; } ;
struct TYPE_16__ {int nb_samples; int pts; int ** data; } ;
struct TYPE_15__ {scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ ATempoContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_10__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 TYPE_10__* FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_4__*,int const**,int const*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    ATempoContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];

    int VAR_7 = 0;
    int VAR_8 = VAR_3->nb_samples;
    int VAR_9 = (int)(0.5 + ((double)VAR_8) / VAR_5->tempo);

    const uint8_t *VAR_10 = VAR_3->data[0];
    const uint8_t *VAR_11 = VAR_10 + VAR_8 * VAR_5->stride;

    if (VAR_5->start_pts == VAR_0)
        VAR_5->start_pts = FUNC_3(VAR_3->pts,
                                         VAR_2->time_base,
                                         VAR_6->time_base);

    while (VAR_10 < VAR_11) {
        if (!VAR_5->dst_buffer) {
            VAR_5->dst_buffer = FUNC_4(VAR_6, VAR_9);
            if (!VAR_5->dst_buffer) {
                FUNC_2(&VAR_3);
                return FUNC_0(VAR_1);
            }
            FUNC_1(VAR_5->dst_buffer, VAR_3);

            VAR_5->dst = VAR_5->dst_buffer->data[0];
            VAR_5->dst_end = VAR_5->dst + VAR_9 * VAR_5->stride;
        }

        FUNC_6(VAR_5, &VAR_10, VAR_11, &VAR_5->dst, VAR_5->dst_end);

        if (VAR_5->dst == VAR_5->dst_end) {
            int VAR_12 = ((VAR_5->dst - VAR_5->dst_buffer->data[0]) /
                             VAR_5->stride);
            VAR_7 = FUNC_5(VAR_5, VAR_6, VAR_12);
            if (VAR_7 < 0)
                goto end;
        }
    }

    VAR_5->nsamples_in += VAR_8;
end:
    FUNC_2(&VAR_3);
    return VAR_7;
}
