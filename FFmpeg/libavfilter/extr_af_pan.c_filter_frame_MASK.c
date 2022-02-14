
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int channels; int channel_layout; TYPE_1__* dst; } ;
struct TYPE_16__ {int nb_samples; int channels; int channel_layout; scalar_t__ extended_data; } ;
struct TYPE_15__ {int swr; } ;
struct TYPE_14__ {TYPE_2__* priv; TYPE_4__** outputs; } ;
typedef TYPE_2__ PanContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_4__* const,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__* const,int) ;
 int FUNC_5 (int ,scalar_t__,int,void*,int) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    int VAR_3;
    int VAR_4 = VAR_2->nb_samples;
    AVFilterLink *const VAR_5 = VAR_1->dst->outputs[0];
    AVFrame *VAR_6 = FUNC_4(VAR_5, VAR_4);
    PanContext *VAR_7 = VAR_1->dst->priv;

    if (!VAR_6) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_5(VAR_7->swr, VAR_6->extended_data, VAR_4,
                (void *)VAR_2->extended_data, VAR_4);
    FUNC_1(VAR_6, VAR_2);
    VAR_6->channel_layout = VAR_5->channel_layout;
    VAR_6->channels = VAR_5->channels;

    VAR_3 = FUNC_3(VAR_5, VAR_6);
    FUNC_2(&VAR_2);
    return VAR_3;
}
