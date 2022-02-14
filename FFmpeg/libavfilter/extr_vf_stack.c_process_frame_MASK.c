
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
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_23__ {TYPE_1__* internal; TYPE_5__** outputs; } ;
struct TYPE_22__ {int sample_aspect_ratio; int time_base; int h; int w; } ;
struct TYPE_21__ {int sample_aspect_ratio; int pts; } ;
struct TYPE_20__ {TYPE_2__* opaque; TYPE_6__* parent; } ;
struct TYPE_17__ {int time_base; int pts; } ;
struct TYPE_19__ {int nb_inputs; TYPE_12__ fs; TYPE_4__** frames; } ;
struct TYPE_18__ {int (* execute ) (TYPE_6__*,int ,TYPE_4__*,int *,int ) ;} ;
typedef TYPE_2__ StackContext ;
typedef TYPE_3__ FFFrameSync ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_12__*,int,TYPE_4__**,int ) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_6__*,int ,TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_8(FFFrameSync *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->parent;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    StackContext *VAR_5 = VAR_2->opaque;
    AVFrame **VAR_6 = VAR_5->frames;
    AVFrame *VAR_7;
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_5->nb_inputs; VAR_8++) {
        if ((VAR_9 = FUNC_5(&VAR_5->fs, VAR_8, &VAR_6[VAR_8], 0)) < 0)
            return VAR_9;
    }

    VAR_7 = FUNC_6(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_7)
        return FUNC_0(VAR_0);
    VAR_7->pts = FUNC_2(VAR_5->fs.pts, VAR_5->fs.time_base, VAR_4->time_base);
    VAR_7->sample_aspect_ratio = VAR_4->sample_aspect_ratio;

    VAR_3->internal->execute(VAR_3, VAR_1, VAR_7, ((void*)0), FUNC_1(VAR_5->nb_inputs, FUNC_4(VAR_3)));

    return FUNC_3(VAR_4, VAR_7);
}
