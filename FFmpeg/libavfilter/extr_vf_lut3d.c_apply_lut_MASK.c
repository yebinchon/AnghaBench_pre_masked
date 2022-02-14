
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * out; int * in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_15__ {TYPE_1__* internal; TYPE_4__** outputs; TYPE_3__* priv; } ;
struct TYPE_14__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_13__ {int interp; } ;
struct TYPE_11__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ LUT3DContext ;
typedef int AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int * FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static AVFrame *FUNC_7(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    LUT3DContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_0->dst->outputs[0];
    AVFrame *VAR_5;
    ThreadData VAR_6;

    if (FUNC_3(VAR_1)) {
        VAR_5 = VAR_1;
    } else {
        VAR_5 = FUNC_5(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_5) {
            FUNC_2(&VAR_1);
            return ((void*)0);
        }
        FUNC_1(VAR_5, VAR_1);
    }

    VAR_6.in = VAR_1;
    VAR_6.out = VAR_5;
    VAR_2->internal->execute(VAR_2, VAR_3->interp, &VAR_6, ((void*)0), FUNC_0(VAR_4->h, FUNC_4(VAR_2)));

    if (VAR_5 != VAR_1)
        FUNC_2(&VAR_1);

    return VAR_5;
}
