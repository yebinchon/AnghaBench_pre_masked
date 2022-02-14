
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_1__* internal; TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_20__ {TYPE_5__* dst; } ;
struct TYPE_19__ {int pts; } ;
struct TYPE_18__ {int * height; int maskfun; int empty; scalar_t__ (* getsum ) (TYPE_5__*,TYPE_3__*) ;} ;
struct TYPE_17__ {int (* execute ) (TYPE_5__*,int ,TYPE_3__*,int *,int ) ;} ;
typedef TYPE_2__ MaskFunContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__**) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_5__*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    MaskFunContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];

    if (VAR_4->getsum(VAR_3, VAR_2)) {
        AVFrame *VAR_6 = FUNC_2(VAR_4->empty);

        if (!VAR_6) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        VAR_6->pts = VAR_2->pts;
        FUNC_3(&VAR_2);

        return FUNC_4(VAR_5, VAR_6);
    }

    VAR_3->internal->execute(VAR_3, VAR_4->maskfun, VAR_2, ((void*)0),
                           FUNC_1(VAR_4->height[1], FUNC_5(VAR_3)));

    return FUNC_4(VAR_5, VAR_2);
}
