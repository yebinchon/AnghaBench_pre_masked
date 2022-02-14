
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * out; int * in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_16__ {TYPE_1__* internal; TYPE_4__** outputs; TYPE_3__* priv; } ;
struct TYPE_15__ {int h; int w; TYPE_5__* dst; } ;
struct TYPE_14__ {int filter_slice; } ;
struct TYPE_12__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ CurvesContext ;
typedef int AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int * FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    CurvesContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;
    ThreadData VAR_7;

    if (FUNC_4(VAR_2)) {
        VAR_6 = VAR_2;
    } else {
        VAR_6 = FUNC_7(VAR_5, VAR_5->w, VAR_5->h);
        if (!VAR_6) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_6, VAR_2);
    }

    VAR_7.in = VAR_2;
    VAR_7.out = VAR_6;
    VAR_3->internal->execute(VAR_3, VAR_4->filter_slice, &VAR_7, ((void*)0), FUNC_1(VAR_5->h, FUNC_6(VAR_3)));

    if (VAR_6 != VAR_2)
        FUNC_3(&VAR_2);

    return FUNC_5(VAR_5, VAR_6);
}
