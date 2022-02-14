
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ passthrough; } ;
typedef TYPE_3__ TransContext ;
struct TYPE_23__ {TYPE_5__* out; TYPE_5__* in; } ;
typedef TYPE_4__ ThreadData ;
struct TYPE_26__ {TYPE_2__* internal; TYPE_6__** outputs; TYPE_3__* priv; } ;
struct TYPE_25__ {int h; int w; TYPE_7__* dst; } ;
struct TYPE_20__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_24__ {TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_21__ {int (* execute ) (TYPE_7__*,int ,TYPE_4__*,int *,int ) ;} ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__**) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_7__*) ;
 TYPE_5__* FUNC_6 (TYPE_6__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_7__*,int ,TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    TransContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    ThreadData VAR_7;
    AVFrame *VAR_8;

    if (VAR_5->passthrough)
        return FUNC_4(VAR_6, VAR_3);

    VAR_8 = FUNC_6(VAR_6, VAR_6->w, VAR_6->h);
    if (!VAR_8) {
        FUNC_3(&VAR_3);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_8, VAR_3);

    if (VAR_3->sample_aspect_ratio.num == 0) {
        VAR_8->sample_aspect_ratio = VAR_3->sample_aspect_ratio;
    } else {
        VAR_8->sample_aspect_ratio.num = VAR_3->sample_aspect_ratio.den;
        VAR_8->sample_aspect_ratio.den = VAR_3->sample_aspect_ratio.num;
    }

    VAR_7.in = VAR_3, VAR_7.out = VAR_8;
    VAR_4->internal->execute(VAR_4, VAR_1, &VAR_7, ((void*)0), FUNC_1(VAR_6->h, FUNC_5(VAR_4)));
    FUNC_3(&VAR_3);
    return FUNC_4(VAR_6, VAR_8);
}
