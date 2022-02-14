
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {TYPE_4__* old; TYPE_4__* in; TYPE_4__* out; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_23__ {TYPE_1__* internal; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_22__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_21__ {int pts; } ;
struct TYPE_20__ {TYPE_4__* old; int * height; int lagfun; } ;
struct TYPE_18__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ LagfunContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    LagfunContext *VAR_5 = VAR_3->priv;
    ThreadData VAR_6;
    AVFrame *VAR_7;

    if (!VAR_5->old) {
        VAR_5->old = FUNC_2(VAR_2);
        return FUNC_4(VAR_4, VAR_2);
    }

    VAR_7 = FUNC_6(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_7) {
        FUNC_3(&VAR_2);
        return FUNC_0(VAR_0);
    }
    VAR_7->pts = VAR_2->pts;

    VAR_6.out = VAR_7;
    VAR_6.in = VAR_2;
    VAR_6.old = VAR_5->old;
    VAR_3->internal->execute(VAR_3, VAR_5->lagfun, &VAR_6, ((void*)0), FUNC_1(VAR_5->height[1], FUNC_5(VAR_3)));

    FUNC_3(&VAR_5->old);
    FUNC_3(&VAR_2);
    VAR_5->old = FUNC_2(VAR_7);
    return FUNC_4(VAR_4, VAR_7);
}
