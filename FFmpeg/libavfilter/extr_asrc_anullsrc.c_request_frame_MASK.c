
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ nb_samples; int pts; int channel_layout; } ;
struct TYPE_13__ {int sample_rate; TYPE_1__* src; } ;
struct TYPE_12__ {int sample_rate; int channel_layout; int pts; } ;
struct TYPE_11__ {TYPE_4__* priv; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ ANullContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1)
{
    int VAR_2;
    ANullContext *VAR_3 = VAR_1->src->priv;
    AVFrame *VAR_4;

    VAR_4 = FUNC_4(VAR_1, VAR_3->nb_samples);
    if (!VAR_4)
        return FUNC_0(VAR_0);

    VAR_4->pts = VAR_3->pts;
    VAR_4->channel_layout = VAR_3->channel_layout;
    VAR_4->sample_rate = VAR_1->sample_rate;

    VAR_2 = FUNC_3(VAR_1, FUNC_1(VAR_4));
    FUNC_2(&VAR_4);
    if (VAR_2 < 0)
        return VAR_2;

    VAR_3->pts += VAR_3->nb_samples;
    return VAR_2;
}
