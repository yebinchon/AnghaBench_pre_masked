
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_17__ {TYPE_4__* dst; } ;
struct TYPE_16__ {int channels; int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_15__ {int contrast; int (* filter ) (void**,void const**,int ,int ,int) ;} ;
typedef TYPE_1__ AudioContrastContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (void**,void const**,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    AudioContrastContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6;

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

    VAR_5->filter((void **)VAR_6->extended_data, (const void **)VAR_2->extended_data,
              VAR_2->nb_samples, VAR_2->channels, VAR_5->contrast / 750);

    if (VAR_6 != VAR_2)
        FUNC_2(&VAR_2);

    return FUNC_4(VAR_4, VAR_6);
}
