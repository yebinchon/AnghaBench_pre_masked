
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {int plane; TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_24__ {TYPE_1__* internal; TYPE_3__* priv; TYPE_5__** outputs; } ;
struct TYPE_23__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_22__ {int* linesize; int ** data; } ;
struct TYPE_21__ {int nb_planes; scalar_t__* mode; int * planewidth; int * planeheight; } ;
struct TYPE_19__ {int (* execute ) (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ RemoveGrainContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 int FUNC_4 (int *,int,int *,int,int ,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_6__*) ;
 TYPE_4__* FUNC_7 (TYPE_5__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (TYPE_6__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    RemoveGrainContext *VAR_6 = VAR_4->priv;
    ThreadData VAR_7;
    AVFrame *VAR_8;
    int VAR_9;

    VAR_8 = FUNC_7(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_8) {
        FUNC_3(&VAR_3);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_8, VAR_3);

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_planes; VAR_9++) {
        uint8_t *VAR_10 = VAR_8->data[VAR_9];
        uint8_t *VAR_11 = VAR_3->data[VAR_9];

        if (VAR_6->mode[VAR_9] == 0) {
            FUNC_4(VAR_10, VAR_8->linesize[VAR_9],
                                VAR_11, VAR_3->linesize[VAR_9],
                                VAR_6->planewidth[VAR_9], VAR_6->planeheight[VAR_9]);
            continue;
        }

        FUNC_8(VAR_10, VAR_11, VAR_6->planewidth[VAR_9]);

        VAR_7.in = VAR_3; VAR_7.out = VAR_8; VAR_7.plane = VAR_9;
        VAR_4->internal->execute(VAR_4, VAR_1, &VAR_7, ((void*)0),
                               FUNC_1(VAR_6->planeheight[VAR_9], FUNC_6(VAR_4)));

        VAR_11 = VAR_3->data[VAR_9] + (VAR_6->planeheight[VAR_9] - 1) * VAR_3->linesize[VAR_9];
        VAR_10 = VAR_8->data[VAR_9] + (VAR_6->planeheight[VAR_9] - 1) * VAR_8->linesize[VAR_9];
        FUNC_8(VAR_10, VAR_11, VAR_6->planewidth[VAR_9]);
    }

    FUNC_3(&VAR_3);
    return FUNC_5(VAR_5, VAR_8);
}
