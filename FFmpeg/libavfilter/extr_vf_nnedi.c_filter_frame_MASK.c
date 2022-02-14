
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ is_disabled; TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_15__ {TYPE_4__* dst; } ;
struct TYPE_14__ {scalar_t__ pts; scalar_t__ interlaced_frame; } ;
struct TYPE_13__ {int field; int cur_pts; TYPE_2__* dst; TYPE_2__* src; TYPE_2__* second; scalar_t__ deint; scalar_t__ eof; } ;
typedef TYPE_1__ NNEDIContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    NNEDIContext *VAR_6 = VAR_4->priv;
    int VAR_7;

    if ((VAR_6->field > 1 ||
         VAR_6->field == -2) && !VAR_6->second) {
        goto second;
    } else if (VAR_6->field > 1 ||
               VAR_6->field == -2) {
        AVFrame *VAR_8;

        VAR_6->src = VAR_6->second;
        VAR_7 = FUNC_4(VAR_4, 1);
        if (VAR_7 < 0) {
            FUNC_2(&VAR_6->dst);
            FUNC_2(&VAR_6->second);
            VAR_6->src = ((void*)0);
            return VAR_7;
        }
        VAR_8 = VAR_6->dst;

        if (VAR_3->pts != VAR_0 &&
            VAR_8->pts != VAR_0)
            VAR_8->pts += VAR_3->pts;
        else
            VAR_8->pts = VAR_0;

        VAR_7 = FUNC_3(VAR_5, VAR_8);
        if (VAR_7 < 0)
            return VAR_7;
        if (VAR_6->eof)
            return 0;
        VAR_6->cur_pts = VAR_6->second->pts;
        FUNC_2(&VAR_6->second);
second:
        if ((VAR_6->deint && VAR_3->interlaced_frame &&
             !VAR_4->is_disabled) ||
            (!VAR_6->deint && !VAR_4->is_disabled)) {
            VAR_6->second = VAR_3;
        }
    }

    if ((VAR_6->deint && !VAR_3->interlaced_frame) || VAR_4->is_disabled) {
        AVFrame *VAR_9 = FUNC_1(VAR_3);
        if (!VAR_9) {
            FUNC_2(&VAR_3);
            FUNC_2(&VAR_6->second);
            return FUNC_0(VAR_1);
        }

        if (VAR_6->field > 1 || VAR_6->field == -2) {
            FUNC_2(&VAR_6->second);
            if ((VAR_6->deint && VAR_3->interlaced_frame) ||
                (!VAR_6->deint))
                VAR_6->second = VAR_3;
        } else {
            FUNC_2(&VAR_3);
        }
        if (VAR_9->pts != VAR_0)
            VAR_9->pts *= 2;
        return FUNC_3(VAR_5, VAR_9);
    }

    VAR_6->src = VAR_3;
    VAR_7 = FUNC_4(VAR_4, 0);
    if (VAR_7 < 0) {
        FUNC_2(&VAR_6->dst);
        FUNC_2(&VAR_6->src);
        FUNC_2(&VAR_6->second);
        return VAR_7;
    }

    if (VAR_3->pts != VAR_0)
        VAR_6->dst->pts = VAR_3->pts * 2;
    if (VAR_6->field <= 1 && VAR_6->field > -2) {
        FUNC_2(&VAR_3);
        VAR_6->src = ((void*)0);
    }

    return FUNC_3(VAR_5, VAR_6->dst);
}
