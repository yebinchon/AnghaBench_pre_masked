
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_1__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_10__ {scalar_t__ pts; scalar_t__ interlaced_frame; } ;
struct TYPE_9__ {scalar_t__ pts1; scalar_t__ pts0; scalar_t__ delta; double score; scalar_t__ start_pts; int flush; TYPE_2__* f0; scalar_t__ n; TYPE_2__* f1; int dest_time_base; int srce_time_base; int work; } ;
typedef TYPE_1__ FrameRateContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int*,scalar_t__*) ;
 int FUNC_7 (int *,TYPE_2__**) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_3)
{
    int VAR_4, VAR_5;
    AVFilterLink *VAR_6 = VAR_3->inputs[0];
    AVFilterLink *VAR_7 = VAR_3->outputs[0];
    FrameRateContext *VAR_8 = VAR_3->priv;
    AVFrame *VAR_9;
    int64_t VAR_10;

    FUNC_0(VAR_7, VAR_6);

retry:
    VAR_4 = FUNC_9(VAR_3);
    if (VAR_4 < 0)
        return VAR_4;
    else if (VAR_4 == 1)
        return FUNC_5(VAR_7, VAR_8->work);

    VAR_4 = FUNC_7(VAR_6, &VAR_9);
    if (VAR_4 < 0)
        return VAR_4;

    if (VAR_9) {
        if (VAR_9->interlaced_frame)
            FUNC_3(VAR_3, VAR_0, "Interlaced frame found - the output will not be correct.\n");

        if (VAR_9->pts == VAR_1) {
            FUNC_3(VAR_3, VAR_0, "Ignoring frame without PTS.\n");
            FUNC_2(&VAR_9);
        }
    }

    if (VAR_9) {
        VAR_10 = FUNC_4(VAR_9->pts, VAR_8->srce_time_base, VAR_8->dest_time_base);

        if (VAR_8->f1 && VAR_10 == VAR_8->pts1) {
            FUNC_3(VAR_3, VAR_0, "Ignoring frame with same PTS.\n");
            FUNC_2(&VAR_9);
        }
    }

    if (VAR_9) {
        FUNC_2(&VAR_8->f0);
        VAR_8->f0 = VAR_8->f1;
        VAR_8->pts0 = VAR_8->pts1;
        VAR_8->f1 = VAR_9;
        VAR_8->pts1 = VAR_10;
        VAR_8->delta = VAR_8->pts1 - VAR_8->pts0;
        VAR_8->score = -1.0;

        if (VAR_8->delta < 0) {
            FUNC_3(VAR_3, VAR_0, "PTS discontinuity.\n");
            VAR_8->start_pts = VAR_8->pts1;
            VAR_8->n = 0;
            FUNC_2(&VAR_8->f0);
        }

        if (VAR_8->start_pts == VAR_1)
            VAR_8->start_pts = VAR_8->pts1;

        goto retry;
    }

    if (FUNC_6(VAR_6, &VAR_5, &VAR_10)) {
        if (!VAR_8->flush) {
            VAR_8->flush = 1;
            goto retry;
        }
        FUNC_8(VAR_7, VAR_5, VAR_10);
        return 0;
    }

    FUNC_1(VAR_7, VAR_6);

    return VAR_2;
}
