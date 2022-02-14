
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {TYPE_2__* priv; TYPE_4__** outputs; } ;
struct TYPE_18__ {TYPE_5__* dst; } ;
struct TYPE_17__ {int nb_samples; int channels; scalar_t__ extended_data; } ;
struct TYPE_16__ {int clip; int mult; TYPE_1__* prev; int (* filter ) (void**,void**,void const**,int,int ,int ,int ) ;} ;
struct TYPE_15__ {scalar_t__ extended_data; } ;
typedef TYPE_2__ CrystalizerContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 void* FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (void**,void**,void const**,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    CrystalizerContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6;

    if (!VAR_5->prev) {
        VAR_5->prev = FUNC_5(VAR_1, 1);
        if (!VAR_5->prev) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
    }

    if (FUNC_3(VAR_2)) {
        VAR_6 = VAR_2;
    } else {
        VAR_6 = FUNC_5(VAR_4, VAR_2->nb_samples);
        if (!VAR_6) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_6, VAR_2);
    }

    VAR_5->filter((void **)VAR_6->extended_data, (void **)VAR_5->prev->extended_data, (const void **)VAR_2->extended_data,
              VAR_2->nb_samples, VAR_2->channels, VAR_5->mult, VAR_5->clip);

    if (VAR_6 != VAR_2)
        FUNC_2(&VAR_2);

    return FUNC_4(VAR_4, VAR_6);
}
