
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_17__ {int time_base; int h; int w; TYPE_1__* dst; } ;
struct TYPE_16__ {int pts; scalar_t__* data; } ;
struct TYPE_15__ {int instance; int (* update ) (int ,int,int const*,int *) ;} ;
struct TYPE_14__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ Frei0rContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (int ,int,int const*,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    Frei0rContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    AVFrame *VAR_5;

    VAR_5 = FUNC_5(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_5) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_5, VAR_2);

    VAR_3->update(VAR_3->instance, VAR_2->pts * FUNC_3(VAR_1->time_base) * 1000,
                   (const uint32_t *)VAR_2->data[0],
                   (uint32_t *)VAR_5->data[0]);

    FUNC_2(&VAR_2);

    return FUNC_4(VAR_4, VAR_5);
}
