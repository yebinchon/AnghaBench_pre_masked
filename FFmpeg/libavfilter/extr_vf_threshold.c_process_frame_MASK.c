
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


struct TYPE_22__ {int time_base; int pts; } ;
struct TYPE_24__ {TYPE_13__ fs; int * height; } ;
typedef TYPE_2__ ThresholdContext ;
struct TYPE_25__ {TYPE_5__* max; TYPE_5__* min; TYPE_5__* threshold; TYPE_5__* in; TYPE_5__* out; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_29__ {TYPE_1__* internal; scalar_t__ is_disabled; TYPE_6__** outputs; } ;
struct TYPE_28__ {int time_base; int h; int w; } ;
struct TYPE_27__ {int pts; } ;
struct TYPE_26__ {TYPE_2__* opaque; TYPE_7__* parent; } ;
struct TYPE_23__ {int (* execute ) (TYPE_7__*,int ,TYPE_3__*,int *,int ) ;} ;
typedef TYPE_4__ FFFrameSync ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_13__*,int,TYPE_5__**,int ) ;
 TYPE_5__* FUNC_8 (TYPE_6__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_7__*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(FFFrameSync *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->parent;
    ThresholdContext *VAR_4 = VAR_2->opaque;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    ThreadData VAR_11;
    int VAR_12;

    if ((VAR_12 = FUNC_7(&VAR_4->fs, 0, &VAR_7, 0)) < 0 ||
        (VAR_12 = FUNC_7(&VAR_4->fs, 1, &VAR_8, 0)) < 0 ||
        (VAR_12 = FUNC_7(&VAR_4->fs, 2, &VAR_9, 0)) < 0 ||
        (VAR_12 = FUNC_7(&VAR_4->fs, 3, &VAR_10, 0)) < 0)
        return VAR_12;

    if (VAR_3->is_disabled) {
        VAR_6 = FUNC_2(VAR_7);
        if (!VAR_6)
            return FUNC_0(VAR_0);
    } else {
        VAR_6 = FUNC_8(VAR_5, VAR_5->w, VAR_5->h);
        if (!VAR_6)
            return FUNC_0(VAR_0);
        FUNC_3(VAR_6, VAR_7);

        VAR_11.out = VAR_6;
        VAR_11.in = VAR_7;
        VAR_11.threshold = VAR_8;
        VAR_11.min = VAR_9;
        VAR_11.max = VAR_10;
        VAR_3->internal->execute(VAR_3, VAR_1, &VAR_11, ((void*)0),
                               FUNC_1(VAR_4->height[2], FUNC_6(VAR_3)));
    }

    VAR_6->pts = FUNC_4(VAR_4->fs.pts, VAR_4->fs.time_base, VAR_5->time_base);

    return FUNC_5(VAR_5, VAR_6);
}
