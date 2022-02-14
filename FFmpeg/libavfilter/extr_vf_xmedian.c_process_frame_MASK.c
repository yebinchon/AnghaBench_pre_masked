
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


struct TYPE_18__ {int time_base; int pts; } ;
struct TYPE_20__ {int nb_inputs; int * height; int median_frames; TYPE_13__ fs; TYPE_5__** frames; } ;
typedef TYPE_2__ XMedianContext ;
struct TYPE_21__ {TYPE_5__* out; TYPE_5__** in; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_25__ {TYPE_1__* internal; TYPE_6__** outputs; } ;
struct TYPE_24__ {int time_base; int h; int w; } ;
struct TYPE_23__ {int pts; } ;
struct TYPE_22__ {TYPE_2__* opaque; TYPE_7__* parent; } ;
struct TYPE_19__ {int (* execute ) (TYPE_7__*,int ,TYPE_3__*,int *,int ) ;} ;
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
 int FUNC_7 (TYPE_7__*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    AVFilterLink *VAR_3 = VAR_2->outputs[0];
    XMedianContext *VAR_4 = VAR_1->opaque;
    AVFrame **VAR_5 = VAR_4->frames;
    AVFrame *VAR_6;
    ThreadData VAR_7;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_4->nb_inputs; VAR_8++) {
        if ((VAR_9 = FUNC_5(&VAR_4->fs, VAR_8, &VAR_5[VAR_8], 0)) < 0)
            return VAR_9;
    }

    VAR_6 = FUNC_6(VAR_3, VAR_3->w, VAR_3->h);
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6->pts = FUNC_2(VAR_4->fs.pts, VAR_4->fs.time_base, VAR_3->time_base);

    VAR_7.in = VAR_5;
    VAR_7.out = VAR_6;
    VAR_2->internal->execute(VAR_2, VAR_4->median_frames, &VAR_7, ((void*)0), FUNC_1(VAR_4->height[1], FUNC_4(VAR_2)));

    return FUNC_3(VAR_3, VAR_6);
}
