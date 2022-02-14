
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* dst; } ;
struct TYPE_19__ {int nb_samples; int * extended_data; } ;
struct TYPE_18__ {int bs2bp; int (* filter ) (int ,int ,int ) ;} ;
struct TYPE_17__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ Bs2bContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    int VAR_3;
    AVFrame *VAR_4;

    Bs2bContext *VAR_5 = VAR_1->dst->priv;
    AVFilterLink *VAR_6 = VAR_1->dst->outputs[0];

    if (FUNC_4(VAR_2)) {
        VAR_4 = VAR_2;
    } else {
        VAR_4 = FUNC_6(VAR_6, VAR_2->nb_samples);
        if (!VAR_4) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_4, VAR_2);
        VAR_3 = FUNC_2(VAR_4, VAR_2);
        if (VAR_3 < 0) {
            FUNC_3(&VAR_4);
            FUNC_3(&VAR_2);
            return VAR_3;
        }
    }

    VAR_5->filter(VAR_5->bs2bp, VAR_4->extended_data[0], VAR_4->nb_samples);

    if (VAR_2 != VAR_4)
        FUNC_3(&VAR_2);

    return FUNC_5(VAR_6, VAR_4);
}
