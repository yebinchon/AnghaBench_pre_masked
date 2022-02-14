
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_20__ {TYPE_4__** outputs; } ;
struct TYPE_19__ {int time_base; } ;
struct TYPE_18__ {int pts; } ;
struct TYPE_15__ {int time_base; } ;
struct TYPE_17__ {TYPE_11__ fs; } ;
struct TYPE_16__ {TYPE_2__* opaque; TYPE_5__* parent; } ;
typedef TYPE_1__ FFFrameSync ;
typedef TYPE_2__ BM3DContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_11__*,int,TYPE_3__**,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__**,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(FFFrameSync *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->parent;
    BM3DContext *VAR_2 = VAR_0->opaque;
    AVFilterLink *VAR_3 = VAR_1->outputs[0];
    AVFrame *VAR_4 = ((void*)0), *VAR_5, *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_2(&VAR_2->fs, 0, &VAR_5, 0)) < 0 ||
        (VAR_7 = FUNC_2(&VAR_2->fs, 1, &VAR_6, 0)) < 0)
        return VAR_7;

    if ((VAR_7 = FUNC_3(VAR_1, &VAR_4, VAR_5, VAR_6)) < 0)
        return VAR_7;

    VAR_4->pts = FUNC_0(VAR_5->pts, VAR_2->fs.time_base, VAR_3->time_base);

    return FUNC_1(VAR_3, VAR_4);
}
