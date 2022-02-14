
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int w; int h; int plane; TYPE_5__* inlink; int * param; TYPE_4__* dst; TYPE_4__ const* bottom; TYPE_4__* top; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_24__ {TYPE_1__* internal; TYPE_5__** outputs; TYPE_5__** inputs; TYPE_3__* priv; } ;
struct TYPE_23__ {int h; int w; } ;
struct TYPE_22__ {int height; int width; } ;
struct TYPE_21__ {int nb_planes; int hsub; int vsub; int tblend; int * params; } ;
struct TYPE_19__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef int FilterParams ;
typedef TYPE_3__ BlendContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static AVFrame *FUNC_7(AVFilterContext *VAR_1, AVFrame *VAR_2,
                            const AVFrame *VAR_3)
{
    BlendContext *VAR_4 = VAR_1->priv;
    AVFilterLink *VAR_5 = VAR_1->inputs[0];
    AVFilterLink *VAR_6 = VAR_1->outputs[0];
    AVFrame *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_5(VAR_6, VAR_6->w, VAR_6->h);
    if (!VAR_7)
        return VAR_2;
    FUNC_2(VAR_7, VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_4->nb_planes; VAR_8++) {
        int VAR_9 = VAR_8 == 1 || VAR_8 == 2 ? VAR_4->hsub : 0;
        int VAR_10 = VAR_8 == 1 || VAR_8 == 2 ? VAR_4->vsub : 0;
        int VAR_11 = FUNC_0(VAR_7->width, VAR_9);
        int VAR_12 = FUNC_0(VAR_7->height, VAR_10);
        FilterParams *VAR_13 = &VAR_4->params[VAR_8];
        ThreadData VAR_14 = { .top = VAR_2, .bottom = VAR_3, .dst = VAR_7,
                          .w = VAR_11, .h = VAR_12, .param = VAR_13, .plane = VAR_8,
                          .inlink = VAR_5 };

        VAR_1->internal->execute(VAR_1, VAR_0, &VAR_14, ((void*)0), FUNC_1(VAR_12, FUNC_4(VAR_1)));
    }

    if (!VAR_4->tblend)
        FUNC_3(&VAR_2);

    return VAR_7;
}
