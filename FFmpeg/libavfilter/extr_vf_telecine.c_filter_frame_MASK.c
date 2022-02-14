
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_18__ {int den; int num; } ;
struct TYPE_20__ {scalar_t__ start_time; int* pattern; size_t pattern_pos; int occupied; int nb_planes; int first_field; int* planeheight; TYPE_1__ ts_unit; TYPE_11__** frame; int * stride; TYPE_2__* temp; } ;
typedef TYPE_3__ TelecineContext ;
struct TYPE_23__ {TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_22__ {int frame_count_in; TYPE_6__* dst; } ;
struct TYPE_21__ {scalar_t__ pts; int* linesize; scalar_t__* data; } ;
struct TYPE_19__ {int* linesize; scalar_t__* data; } ;
struct TYPE_17__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (scalar_t__,int,scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    TelecineContext *VAR_6 = VAR_4->priv;
    int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;

    if (VAR_6->start_time == VAR_0)
        VAR_6->start_time = VAR_3->pts;

    VAR_8 = VAR_6->pattern[VAR_6->pattern_pos] - '0';

    VAR_6->pattern_pos++;
    if (!VAR_6->pattern[VAR_6->pattern_pos])
        VAR_6->pattern_pos = 0;

    if (!VAR_8) {
        FUNC_3(&VAR_3);
        return 0;
    }

    if (VAR_6->occupied) {
        FUNC_4(VAR_6->frame[VAR_10]);
        for (VAR_7 = 0; VAR_7 < VAR_6->nb_planes; VAR_7++) {

            FUNC_5(VAR_6->frame[VAR_10]->data[VAR_7] + VAR_6->frame[VAR_10]->linesize[VAR_7] * VAR_6->first_field,
                                VAR_6->frame[VAR_10]->linesize[VAR_7] * 2,
                                VAR_6->temp->data[VAR_7] + VAR_6->temp->linesize[VAR_7] * VAR_6->first_field,
                                VAR_6->temp->linesize[VAR_7] * 2,
                                VAR_6->stride[VAR_7],
                                (VAR_6->planeheight[VAR_7] - VAR_6->first_field + 1) / 2);

            FUNC_5(VAR_6->frame[VAR_10]->data[VAR_7] + VAR_6->frame[VAR_10]->linesize[VAR_7] * !VAR_6->first_field,
                                VAR_6->frame[VAR_10]->linesize[VAR_7] * 2,
                                VAR_3->data[VAR_7] + VAR_3->linesize[VAR_7] * !VAR_6->first_field,
                                VAR_3->linesize[VAR_7] * 2,
                                VAR_6->stride[VAR_7],
                                (VAR_6->planeheight[VAR_7] - !VAR_6->first_field + 1) / 2);
        }
        VAR_10++;
        VAR_8--;
        VAR_6->occupied = 0;
    }

    while (VAR_8 >= 2) {

        FUNC_4(VAR_6->frame[VAR_10]);
        for (VAR_7 = 0; VAR_7 < VAR_6->nb_planes; VAR_7++)
            FUNC_5(VAR_6->frame[VAR_10]->data[VAR_7], VAR_6->frame[VAR_10]->linesize[VAR_7],
                                VAR_3->data[VAR_7], VAR_3->linesize[VAR_7],
                                VAR_6->stride[VAR_7],
                                VAR_6->planeheight[VAR_7]);
        VAR_10++;
        VAR_8 -= 2;
    }

    if (VAR_8 >= 1) {

        for (VAR_7 = 0; VAR_7 < VAR_6->nb_planes; VAR_7++)
            FUNC_5(VAR_6->temp->data[VAR_7], VAR_6->temp->linesize[VAR_7],
                                VAR_3->data[VAR_7], VAR_3->linesize[VAR_7],
                                VAR_6->stride[VAR_7],
                                VAR_6->planeheight[VAR_7]);
        VAR_6->occupied = 1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
        AVFrame *VAR_11 = FUNC_1(VAR_6->frame[VAR_7]);

        if (!VAR_11) {
            FUNC_3(&VAR_3);
            return FUNC_0(VAR_1);
        }

        FUNC_2(VAR_11, VAR_3);
        VAR_11->pts = ((VAR_6->start_time == VAR_0) ? 0 : VAR_6->start_time) +
                     FUNC_6(VAR_5->frame_count_in, VAR_6->ts_unit.num,
                                VAR_6->ts_unit.den);
        VAR_9 = FUNC_7(VAR_5, VAR_11);
    }
    FUNC_3(&VAR_3);

    return VAR_9;
}
