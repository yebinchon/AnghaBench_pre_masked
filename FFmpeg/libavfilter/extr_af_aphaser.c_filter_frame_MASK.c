
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* dst; } ;
struct TYPE_18__ {int channels; int nb_samples; int extended_data; } ;
struct TYPE_17__ {int (* phaser ) (TYPE_2__*,int ,int ,int ,int ) ;} ;
struct TYPE_16__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ AudioPhaserContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AudioPhaserContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    AVFrame *VAR_5;

    if (FUNC_3(VAR_2)) {
        VAR_5 = VAR_2;
    } else {
        VAR_5 = FUNC_5(VAR_4, VAR_2->nb_samples);
        if (!VAR_5) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_5, VAR_2);
    }

    VAR_3->phaser(VAR_3, VAR_2->extended_data, VAR_5->extended_data,
              VAR_5->nb_samples, VAR_5->channels);

    if (VAR_2 != VAR_5)
        FUNC_2(&VAR_2);

    return FUNC_4(VAR_4, VAR_5);
}
