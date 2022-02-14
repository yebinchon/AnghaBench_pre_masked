
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


struct TYPE_20__ {TYPE_4__** in; TYPE_4__* out; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_24__ {TYPE_1__* internal; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_23__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_22__ {int pts; } ;
struct TYPE_21__ {size_t nb_frames; size_t nb_inputs; int * height; TYPE_4__** frames; } ;
struct TYPE_19__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ AmplifyContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_4__**,TYPE_4__**,int) ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    AmplifyContext *VAR_6 = VAR_4->priv;
    ThreadData VAR_7;
    AVFrame *VAR_8;

    if (VAR_6->nb_frames < VAR_6->nb_inputs) {
        VAR_6->frames[VAR_6->nb_frames] = VAR_3;
        VAR_6->nb_frames++;
        return 0;
    } else {
        FUNC_2(&VAR_6->frames[0]);
        FUNC_6(&VAR_6->frames[0], &VAR_6->frames[1], sizeof(*VAR_6->frames) * (VAR_6->nb_inputs - 1));
        VAR_6->frames[VAR_6->nb_inputs - 1] = VAR_3;
    }

    VAR_8 = FUNC_5(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_8)
        return FUNC_0(VAR_0);
    VAR_8->pts = VAR_6->frames[0]->pts;

    VAR_7.out = VAR_8;
    VAR_7.in = VAR_6->frames;
    VAR_4->internal->execute(VAR_4, VAR_1, &VAR_7, ((void*)0), FUNC_1(VAR_6->height[1], FUNC_4(VAR_4)));

    return FUNC_3(VAR_5, VAR_8);
}
