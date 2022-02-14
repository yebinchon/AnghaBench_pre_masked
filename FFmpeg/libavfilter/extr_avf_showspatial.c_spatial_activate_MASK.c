
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* internal; TYPE_2__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_15__ {scalar_t__ nb_samples; scalar_t__ extended_data; scalar_t__ pts; } ;
struct TYPE_14__ {scalar_t__ win_size; int fifo; scalar_t__ hop_size; scalar_t__ consumed; scalar_t__ pts; } ;
struct TYPE_13__ {int (* execute ) (TYPE_4__*,int ,TYPE_3__*,int *,int) ;} ;
typedef TYPE_2__ ShowSpatialContext ;
typedef TYPE_3__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,void**,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,void**,scalar_t__) ;
 int FUNC_9 (TYPE_3__**) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,TYPE_3__**) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int VAR_2 ;
 int FUNC_16 (TYPE_4__*,int ,TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_17(AVFilterContext *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_3->inputs[0];
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    ShowSpatialContext *VAR_6 = VAR_3->priv;
    int VAR_7;

    FUNC_3(VAR_5, VAR_4);

    if (FUNC_7(VAR_6->fifo) < VAR_6->win_size) {
        AVFrame *VAR_8 = ((void*)0);

        VAR_7 = FUNC_13(VAR_4, &VAR_8);
        if (VAR_7 < 0)
            return VAR_7;
        if (VAR_7 > 0) {
            VAR_6->pts = VAR_8->pts;
            VAR_6->consumed = 0;

            FUNC_8(VAR_6->fifo, (void **)VAR_8->extended_data, VAR_8->nb_samples);
            FUNC_9(&VAR_8);
        }
    }

    if (FUNC_7(VAR_6->fifo) >= VAR_6->win_size) {
        AVFrame *VAR_9 = FUNC_12(VAR_4, VAR_6->win_size);
        if (!VAR_9)
            return FUNC_0(VAR_0);

        VAR_9->pts = VAR_6->pts + VAR_6->consumed;
        VAR_6->consumed += VAR_6->hop_size;
        VAR_7 = FUNC_6(VAR_6->fifo, (void **)VAR_9->extended_data,
                                 FUNC_1(VAR_6->win_size, FUNC_7(VAR_6->fifo)));
        if (VAR_7 < 0) {
            FUNC_9(&VAR_9);
            return VAR_7;
        }

        FUNC_4(VAR_9->nb_samples == VAR_6->win_size);

        VAR_3->internal->execute(VAR_3, VAR_2, VAR_9, ((void*)0), 2);

        VAR_7 = FUNC_10(VAR_4, VAR_9);

        FUNC_9(&VAR_9);
        FUNC_5(VAR_6->fifo, VAR_6->hop_size);
        if (VAR_7 <= 0)
            return VAR_7;
    }

    FUNC_2(VAR_4, VAR_5);
    if (FUNC_15(VAR_5) && FUNC_7(VAR_6->fifo) < VAR_6->win_size) {
        FUNC_14(VAR_4);
        return 0;
    }

    if (FUNC_7(VAR_6->fifo) >= VAR_6->win_size) {
        FUNC_11(VAR_3, 10);
        return 0;
    }
    return VAR_1;
}
