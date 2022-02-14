
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_8__ {int channels; int channel_layout; int time_base; int sample_rate; TYPE_4__* src; } ;
struct TYPE_7__ {int one2many; int nb_channels; int nb_coef_channels; int pts; } ;
struct TYPE_6__ {int channels; int channel_layout; int time_base; int sample_rate; } ;
typedef TYPE_2__ AudioFIRContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    AudioFIRContext *VAR_3 = VAR_2->priv;

    VAR_3->one2many = VAR_2->inputs[1]->channels == 1;
    VAR_1->sample_rate = VAR_2->inputs[0]->sample_rate;
    VAR_1->time_base = VAR_2->inputs[0]->time_base;
    VAR_1->channel_layout = VAR_2->inputs[0]->channel_layout;
    VAR_1->channels = VAR_2->inputs[0]->channels;

    VAR_3->nb_channels = VAR_1->channels;
    VAR_3->nb_coef_channels = VAR_2->inputs[1]->channels;
    VAR_3->pts = VAR_0;

    return 0;
}
