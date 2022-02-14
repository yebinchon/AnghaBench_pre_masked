
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_24__ {scalar_t__ nb_frames; } ;
struct TYPE_23__ {TYPE_3__** inputs; TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_22__ {int time_base; } ;
struct TYPE_21__ {int nb_samples; scalar_t__ extended_data; int pts; } ;
struct TYPE_20__ {int nb_inputs; int* input_state; TYPE_7__* frame_list; int next_pts; int * fifos; } ;
typedef TYPE_1__ MixContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,void**,int ) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int*,int *) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__**) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int,int ) ;
 int FUNC_12 (TYPE_7__*,int ,int ) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_16(AVFilterContext *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    MixContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6 = ((void*)0);
    int VAR_7, VAR_8;

    FUNC_0(VAR_4, VAR_3);

    for (VAR_7 = 0; VAR_7 < VAR_5->nb_inputs; VAR_7++) {
        AVFilterLink *VAR_9 = VAR_3->inputs[VAR_7];

        if ((VAR_8 = FUNC_8(VAR_3->inputs[VAR_7], &VAR_6)) > 0) {
            if (VAR_7 == 0) {
                int64_t VAR_10 = FUNC_5(VAR_6->pts, VAR_9->time_base,
                                           VAR_4->time_base);
                VAR_8 = FUNC_12(VAR_5->frame_list, VAR_6->nb_samples, VAR_10);
                if (VAR_8 < 0) {
                    FUNC_4(&VAR_6);
                    return VAR_8;
                }
            }

            VAR_8 = FUNC_3(VAR_5->fifos[VAR_7], (void **)VAR_6->extended_data,
                                      VAR_6->nb_samples);
            if (VAR_8 < 0) {
                FUNC_4(&VAR_6);
                return VAR_8;
            }

            FUNC_4(&VAR_6);

            VAR_8 = FUNC_14(VAR_4);
            if (VAR_8 < 0)
                return VAR_8;
        }
    }

    for (VAR_7 = 0; VAR_7 < VAR_5->nb_inputs; VAR_7++) {
        int64_t VAR_11;
        int VAR_12;

        if (FUNC_7(VAR_3->inputs[VAR_7], &VAR_12, &VAR_11)) {
            if (VAR_12 == VAR_0) {
                if (VAR_7 == 0) {
                    VAR_5->input_state[VAR_7] = 0;
                    if (VAR_5->nb_inputs == 1) {
                        FUNC_11(VAR_4, VAR_12, VAR_11);
                        return 0;
                    }
                } else {
                    VAR_5->input_state[VAR_7] |= VAR_1;
                    if (FUNC_2(VAR_5->fifos[VAR_7]) == 0) {
                        VAR_5->input_state[VAR_7] = 0;
                    }
                }
            }
        }
    }

    if (FUNC_6(VAR_5)) {
        FUNC_11(VAR_4, VAR_0, VAR_5->next_pts);
        return 0;
    }

    if (FUNC_10(VAR_4)) {
        int VAR_13;

        if (!(VAR_5->input_state[0] & VAR_2))
            return FUNC_15(VAR_3, 1);

        if (VAR_5->frame_list->nb_frames == 0) {
            FUNC_9(VAR_3->inputs[0]);
            return 0;
        }
        FUNC_1(VAR_5->frame_list->nb_frames > 0);

        VAR_13 = FUNC_13(VAR_5->frame_list);

        return FUNC_15(VAR_3, VAR_13);
    }

    return 0;
}
