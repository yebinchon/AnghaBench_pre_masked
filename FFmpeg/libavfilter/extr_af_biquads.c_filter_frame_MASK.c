
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {TYPE_5__* out; TYPE_5__* in; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_28__ {TYPE_1__* internal; TYPE_6__** outputs; TYPE_4__* priv; } ;
struct TYPE_27__ {int channels; TYPE_7__* dst; } ;
struct TYPE_26__ {int nb_samples; } ;
struct TYPE_25__ {TYPE_2__* cache; } ;
struct TYPE_23__ {scalar_t__ clippings; } ;
struct TYPE_22__ {int (* execute ) (TYPE_7__*,int ,TYPE_3__*,int *,int ) ;} ;
typedef TYPE_4__ BiquadsContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__**) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_7__*,int ,char*,int,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_7__*) ;
 TYPE_5__* FUNC_8 (TYPE_6__*,int ) ;
 int VAR_2 ;
 int FUNC_9 (TYPE_7__*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    BiquadsContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->outputs[0];
    AVFrame *VAR_8;
    ThreadData VAR_9;
    int VAR_10;

    if (FUNC_4(VAR_4)) {
        VAR_8 = VAR_4;
    } else {
        VAR_8 = FUNC_8(VAR_7, VAR_4->nb_samples);
        if (!VAR_8) {
            FUNC_3(&VAR_4);
            return FUNC_0(VAR_1);
        }
        FUNC_2(VAR_8, VAR_4);
    }

    VAR_9.in = VAR_4;
    VAR_9.out = VAR_8;
    VAR_5->internal->execute(VAR_5, VAR_2, &VAR_9, ((void*)0), FUNC_1(VAR_7->channels, FUNC_7(VAR_5)));

    for (VAR_10 = 0; VAR_10 < VAR_7->channels; VAR_10++) {
        if (VAR_6->cache[VAR_10].clippings > 0)
            FUNC_5(VAR_5, VAR_0, "Channel %d clipping %d times. Please reduce gain.\n",
                   VAR_10, VAR_6->cache[VAR_10].clippings);
        VAR_6->cache[VAR_10].clippings = 0;
    }

    if (VAR_4 != VAR_8)
        FUNC_3(&VAR_4);

    return FUNC_6(VAR_7, VAR_8);
}
