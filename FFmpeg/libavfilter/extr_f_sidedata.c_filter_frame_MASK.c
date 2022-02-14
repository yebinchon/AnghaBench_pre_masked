
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* priv; TYPE_4__** outputs; } ;
struct TYPE_16__ {TYPE_5__* dst; } ;
struct TYPE_15__ {TYPE_1__** side_data; int nb_side_data; } ;
struct TYPE_14__ {int type; int mode; } ;
struct TYPE_13__ {int type; } ;
typedef TYPE_2__ SideDataContext ;
typedef int AVFrameSideData ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__**) ;
 int * FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    AVFilterLink *VAR_3 = VAR_2->outputs[0];
    SideDataContext *VAR_4 = VAR_2->priv;
    AVFrameSideData *VAR_5 = ((void*)0);

    if (VAR_4->type != -1)
       VAR_5 = FUNC_2(VAR_1, VAR_4->type);

    switch (VAR_4->mode) {
    case 128:
        if (VAR_5) {
            return FUNC_4(VAR_3, VAR_1);
        }
        break;
    case 129:
        if (VAR_4->type == -1) {
            while (VAR_1->nb_side_data)
                FUNC_3(VAR_1, VAR_1->side_data[0]->type);
        } else if (VAR_5) {
            FUNC_3(VAR_1, VAR_4->type);
        }
        return FUNC_4(VAR_3, VAR_1);
        break;
    default:
        FUNC_0(0);
    };

    FUNC_1(&VAR_1);

    return 0;
}
