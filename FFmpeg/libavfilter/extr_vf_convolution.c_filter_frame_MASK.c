
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
struct TYPE_13__ {int nb_threads; int * planewidth; int * planeheight; } ;
struct TYPE_11__ {int (* execute ) (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ ConvolutionContext ;
typedef int AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int * FUNC_5 (TYPE_4__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_5__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    ConvolutionContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];
    AVFrame *VAR_7;
    ThreadData VAR_8;

    VAR_7 = FUNC_5(VAR_6, VAR_6->w, VAR_6->h);
    if (!VAR_7) {
        FUNC_3(&VAR_3);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_7, VAR_3);

    VAR_8.in = VAR_3;
    VAR_8.out = VAR_7;
    VAR_4->internal->execute(VAR_4, VAR_1, &VAR_8, ((void*)0), FUNC_1(VAR_5->planeheight[1], VAR_5->planewidth[1], VAR_5->nb_threads));

    FUNC_3(&VAR_3);
    return FUNC_4(VAR_6, VAR_7);
}
