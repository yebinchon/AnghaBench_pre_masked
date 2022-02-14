
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* prev; int (* filter ) (void**,void**,void const**,int,int ) ;} ;
struct TYPE_17__ {TYPE_3__** outputs; TYPE_5__* priv; } ;
struct TYPE_16__ {TYPE_4__* dst; } ;
struct TYPE_15__ {int nb_samples; int channels; scalar_t__ extended_data; } ;
struct TYPE_14__ {scalar_t__ extended_data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef TYPE_5__ ADerivativeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 void* FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (void**,void**,void const**,int,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    ADerivativeContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6 = FUNC_4(VAR_5, VAR_2->nb_samples);

    if (!VAR_6) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_6, VAR_2);

    if (!VAR_4->prev) {
        VAR_4->prev = FUNC_4(VAR_1, 1);
        if (!VAR_4->prev) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
    }

    VAR_4->filter((void **)VAR_6->extended_data, (void **)VAR_4->prev->extended_data, (const void **)VAR_2->extended_data,
              VAR_2->nb_samples, VAR_2->channels);

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_5, VAR_6);
}
