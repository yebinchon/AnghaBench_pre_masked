
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int format; TYPE_1__* dst; } ;
struct TYPE_11__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_10__ {int nb_channels; int * chstats; } ;
struct TYPE_9__ {int * outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ DRMeterContext ;
typedef int ChannelStats ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;




 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int *,float const) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    DRMeterContext *VAR_2 = VAR_0->dst->priv;
    const int VAR_3 = VAR_2->nb_channels;
    int VAR_4, VAR_5;

    switch (VAR_0->format) {
    case 128:
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            ChannelStats *VAR_6 = &VAR_2->chstats[VAR_5];
            const float *VAR_7 = (const float *)VAR_1->extended_data[VAR_5];

            for (VAR_4 = 0; VAR_4 < VAR_1->nb_samples; VAR_4++, VAR_7++)
                FUNC_1(VAR_2, VAR_6, *VAR_7);
        }
        break;
    case 129: {
        const float *VAR_8 = (const float *)VAR_1->extended_data[0];

        for (VAR_4 = 0; VAR_4 < VAR_1->nb_samples; VAR_4++) {
            for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_8++)
                FUNC_1(VAR_2, &VAR_2->chstats[VAR_5], *VAR_8);
        }}
        break;
    }

    return FUNC_0(VAR_0->dst->outputs[0], VAR_1);
}
