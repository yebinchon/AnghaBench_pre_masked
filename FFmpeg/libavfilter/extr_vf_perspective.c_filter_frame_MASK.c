
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int hsub; int vsub; int h; int w; int src_linesize; int src; int dst_linesize; int dst; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_26__ {TYPE_1__* internal; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_25__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_24__ {int * linesize; int * data; } ;
struct TYPE_23__ {scalar_t__ eval_mode; int nb_planes; int hsub; int vsub; int perspective; int * height; int * linesize; } ;
struct TYPE_21__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ PerspectiveContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_6__*) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int ,int ) ;
 int FUNC_8 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    PerspectiveContext *VAR_6 = VAR_4->priv;
    AVFrame *VAR_7;
    int VAR_8;
    int VAR_9;

    VAR_7 = FUNC_7(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_7) {
        FUNC_3(&VAR_3);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_7, VAR_3);

    if (VAR_6->eval_mode == VAR_1) {
        if ((VAR_9 = FUNC_4(VAR_4, VAR_2)) < 0) {
            FUNC_3(&VAR_7);
            return VAR_9;
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_6->nb_planes; VAR_8++) {
        int VAR_10 = VAR_8 == 1 || VAR_8 == 2 ? VAR_6->hsub : 0;
        int VAR_11 = VAR_8 == 1 || VAR_8 == 2 ? VAR_6->vsub : 0;
        ThreadData VAR_12 = {.dst = VAR_7->data[VAR_8],
                         .dst_linesize = VAR_7->linesize[VAR_8],
                         .src = VAR_3->data[VAR_8],
                         .src_linesize = VAR_3->linesize[VAR_8],
                         .w = VAR_6->linesize[VAR_8],
                         .h = VAR_6->height[VAR_8],
                         .hsub = VAR_10,
                         .vsub = VAR_11 };
        VAR_4->internal->execute(VAR_4, VAR_6->perspective, &VAR_12, ((void*)0), FUNC_1(VAR_12.h, FUNC_6(VAR_4)));
    }

    FUNC_3(&VAR_3);
    return FUNC_5(VAR_5, VAR_7);
}
