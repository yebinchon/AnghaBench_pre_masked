
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* apply_unsharp ) (TYPE_3__*,int *,int *) ;} ;
typedef TYPE_1__ UnsharpContext ;
struct TYPE_9__ {TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_3__* dst; int h; int w; } ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    UnsharpContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    AVFrame *VAR_5;
    int VAR_6 = 0;

    VAR_5 = FUNC_4(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_5) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_5, VAR_2);

    VAR_6 = VAR_3->apply_unsharp(VAR_1->dst, VAR_2, VAR_5);

    FUNC_2(&VAR_2);

    if (VAR_6 < 0) {
        FUNC_2(&VAR_5);
        return VAR_6;
    }
    return FUNC_3(VAR_4, VAR_5);
}
