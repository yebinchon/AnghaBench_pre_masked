
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int * outputs; TYPE_1__* internal; TYPE_2__* priv; } ;
struct TYPE_16__ {TYPE_5__* dst; } ;
struct TYPE_15__ {int height; } ;
struct TYPE_14__ {int do_slice; } ;
struct TYPE_13__ {int (* execute ) (TYPE_5__*,int ,TYPE_3__*,int *,int ) ;} ;
typedef TYPE_2__ ColorkeyContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    ColorkeyContext *VAR_3 = VAR_2->priv;
    int VAR_4;

    if ((VAR_4 = FUNC_1(VAR_1)))
        return VAR_4;

    if ((VAR_4 = VAR_2->internal->execute(VAR_2, VAR_3->do_slice, VAR_1, ((void*)0), FUNC_0(VAR_1->height, FUNC_3(VAR_2)))))
        return VAR_4;

    return FUNC_2(VAR_2->outputs[0], VAR_1);
}
