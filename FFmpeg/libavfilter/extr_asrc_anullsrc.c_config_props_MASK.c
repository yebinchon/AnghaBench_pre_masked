
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int nb_samples; int sample_rate; int channel_layout; } ;
struct TYPE_5__ {TYPE_4__* src; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ ANullContext ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,char*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    ANullContext *VAR_2 = VAR_1->src->priv;
    char VAR_3[128];

    FUNC_0(VAR_3, sizeof(VAR_3), 0, VAR_2->channel_layout);
    FUNC_1(VAR_1->src, VAR_0,
           "sample_rate:%d channel_layout:'%s' nb_samples:%d\n",
           VAR_2->sample_rate, VAR_3, VAR_2->nb_samples);

    return 0;
}
