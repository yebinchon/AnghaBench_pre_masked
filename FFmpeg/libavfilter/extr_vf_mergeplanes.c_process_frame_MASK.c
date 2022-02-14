
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int time_base; int pts; } ;
struct TYPE_17__ {TYPE_4__** outputs; } ;
struct TYPE_16__ {int time_base; int h; int w; } ;
struct TYPE_15__ {int * linesize; int * data; int pts; } ;
struct TYPE_14__ {TYPE_1__* opaque; TYPE_5__* parent; } ;
struct TYPE_13__ {int nb_inputs; int nb_planes; int** map; int * planeheight; int * planewidth; TYPE_9__ fs; } ;
typedef TYPE_1__ MergePlanesContext ;
typedef TYPE_2__ FFFrameSync ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_9__*,int,TYPE_3__**,int ) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    AVFilterLink *VAR_3 = VAR_2->outputs[0];
    MergePlanesContext *VAR_4 = VAR_1->opaque;
    AVFrame *VAR_5[4] = { ((void*)0) };
    AVFrame *VAR_6;
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_inputs; VAR_7++) {
        if ((VAR_8 = FUNC_4(&VAR_4->fs, VAR_7, &VAR_5[VAR_7], 0)) < 0)
            return VAR_8;
    }

    VAR_6 = FUNC_5(VAR_3, VAR_3->w, VAR_3->h);
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6->pts = FUNC_2(VAR_4->fs.pts, VAR_4->fs.time_base, VAR_3->time_base);

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_planes; VAR_7++) {
        const int VAR_9 = VAR_4->map[VAR_7][1];
        const int VAR_10 = VAR_4->map[VAR_7][0];

        FUNC_1(VAR_6->data[VAR_7], VAR_6->linesize[VAR_7],
                            VAR_5[VAR_9]->data[VAR_10], VAR_5[VAR_9]->linesize[VAR_10],
                            VAR_4->planewidth[VAR_7], VAR_4->planeheight[VAR_7]);
    }

    return FUNC_3(VAR_3, VAR_6);
}
