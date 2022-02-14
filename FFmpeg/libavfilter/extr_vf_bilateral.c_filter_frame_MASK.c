
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_17__ {int* linesize; int * data; } ;
struct TYPE_16__ {int nb_planes; int planes; int* planewidth; int depth; int * planeheight; int sigmaR; int sigmaS; } ;
typedef TYPE_1__ BilateralContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int ,int,int ,int,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ,int,int ,int,int) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int ,int,int ,int,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    BilateralContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;

    VAR_6 = FUNC_7(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_6) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_6, VAR_2);

    for (int VAR_7 = 0; VAR_7 < VAR_4->nb_planes; VAR_7++) {
        if (!(VAR_4->planes & (1 << VAR_7))) {
            FUNC_3(VAR_6->data[VAR_7], VAR_6->linesize[VAR_7],
                                VAR_2->data[VAR_7], VAR_2->linesize[VAR_7],
                                VAR_4->planewidth[VAR_7] * ((VAR_4->depth + 7) / 8), VAR_4->planeheight[VAR_7]);
            continue;
        }

        if (VAR_4->depth <= 8)
           FUNC_4(VAR_4, VAR_2->data[VAR_7], VAR_6->data[VAR_7], VAR_4->sigmaS, VAR_4->sigmaR,
                      VAR_4->planewidth[VAR_7], VAR_4->planeheight[VAR_7],
                      VAR_2->linesize[VAR_7], VAR_6->linesize[VAR_7]);
        else
           FUNC_5(VAR_4, VAR_2->data[VAR_7], VAR_6->data[VAR_7], VAR_4->sigmaS, VAR_4->sigmaR,
                      VAR_4->planewidth[VAR_7], VAR_4->planeheight[VAR_7],
                      VAR_2->linesize[VAR_7] / 2, VAR_6->linesize[VAR_7] / 2);
    }

    FUNC_2(&VAR_2);
    return FUNC_6(VAR_5, VAR_6);
}
