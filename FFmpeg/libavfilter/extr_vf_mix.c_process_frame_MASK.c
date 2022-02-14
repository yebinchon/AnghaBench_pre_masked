
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


struct TYPE_20__ {TYPE_5__* out; TYPE_5__** in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_25__ {TYPE_1__* internal; TYPE_6__** outputs; } ;
struct TYPE_24__ {int time_base; int h; int w; } ;
struct TYPE_23__ {int pts; } ;
struct TYPE_22__ {TYPE_3__* opaque; TYPE_7__* parent; } ;
struct TYPE_18__ {int time_base; int pts; } ;
struct TYPE_21__ {int nb_inputs; int * height; TYPE_13__ fs; TYPE_5__** frames; } ;
struct TYPE_19__ {int (* execute ) (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ MixContext ;
typedef TYPE_4__ FFFrameSync ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_13__*,int,TYPE_5__**,int ) ;
 TYPE_5__* FUNC_6 (TYPE_6__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(FFFrameSync *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->parent;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    MixContext *VAR_5 = VAR_2->opaque;
    AVFrame **VAR_6 = VAR_5->frames;
    AVFrame *VAR_7;
    ThreadData VAR_8;
    int VAR_9, VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_5->nb_inputs; VAR_9++) {
        if ((VAR_10 = FUNC_5(&VAR_5->fs, VAR_9, &VAR_6[VAR_9], 0)) < 0)
            return VAR_10;
    }

    VAR_7 = FUNC_6(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_7)
        return FUNC_0(VAR_0);
    VAR_7->pts = FUNC_2(VAR_5->fs.pts, VAR_5->fs.time_base, VAR_4->time_base);

    VAR_8.in = VAR_6;
    VAR_8.out = VAR_7;
    VAR_3->internal->execute(VAR_3, VAR_1, &VAR_8, ((void*)0), FUNC_1(VAR_5->height[0], FUNC_4(VAR_3)));

    return FUNC_3(VAR_4, VAR_7);
}
