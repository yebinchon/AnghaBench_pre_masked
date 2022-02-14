
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ is_disabled; TYPE_1__** outputs; } ;
struct TYPE_14__ {int pts; } ;
struct TYPE_13__ {int time_base; int pts; TYPE_4__* parent; } ;
struct TYPE_12__ {int time_base; } ;
typedef TYPE_2__ FFFrameSync ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int,TYPE_3__**,int) ;

int FUNC_4(FFFrameSync *VAR_0, AVFrame **VAR_1, AVFrame **VAR_2)
{
    AVFilterContext *VAR_3 = VAR_0->parent;
    AVFrame *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6;

    if ((VAR_6 = FUNC_3(VAR_0, 0, &VAR_4, 1)) < 0 ||
        (VAR_6 = FUNC_3(VAR_0, 1, &VAR_5, 0)) < 0) {
        FUNC_1(&VAR_4);
        return VAR_6;
    }
    FUNC_0(VAR_4);
    VAR_4->pts = FUNC_2(VAR_0->pts, VAR_0->time_base, VAR_3->outputs[0]->time_base);
    if (VAR_3->is_disabled)
        VAR_5 = ((void*)0);
    *VAR_1 = VAR_4;
    *VAR_2 = VAR_5;
    return 0;
}
