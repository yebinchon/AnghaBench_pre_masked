
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ frame_count_in; int time_base; } ;
struct TYPE_17__ {int time_base; int pts; } ;
struct TYPE_16__ {int nb_inputs; TYPE_9__** outputs; } ;
struct TYPE_15__ {scalar_t__ pts; } ;
struct TYPE_14__ {TYPE_1__* opaque; TYPE_4__* parent; } ;
struct TYPE_13__ {int nb_map; int* map; scalar_t__* last_pts; TYPE_6__ fs; scalar_t__ is_audio; TYPE_3__** frames; } ;
typedef TYPE_1__ StreamSelectContext ;
typedef TYPE_2__ FFFrameSync ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_6__*,int,TYPE_3__**,int ) ;

__attribute__((used)) static int FUNC_6(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    StreamSelectContext *VAR_3 = VAR_1->opaque;
    AVFrame **VAR_4 = VAR_3->frames;
    int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_2->nb_inputs; VAR_5++) {
        if ((VAR_7 = FUNC_5(&VAR_3->fs, VAR_5, &VAR_4[VAR_5], 0)) < 0)
            return VAR_7;
    }

    for (VAR_6 = 0; VAR_6 < VAR_2->nb_inputs; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < VAR_3->nb_map; VAR_5++) {
            if (VAR_3->map[VAR_5] == VAR_6) {
                AVFrame *VAR_9;

                if (VAR_3->is_audio && VAR_3->last_pts[VAR_6] == VAR_4[VAR_6]->pts &&
                    VAR_2->outputs[VAR_5]->frame_count_in > 0)
                    continue;
                VAR_9 = FUNC_1(VAR_4[VAR_6]);
                if (!VAR_9)
                    return FUNC_0(VAR_0);

                VAR_9->pts = FUNC_2(VAR_3->fs.pts, VAR_3->fs.time_base, VAR_2->outputs[VAR_5]->time_base);
                VAR_3->last_pts[VAR_6] = VAR_4[VAR_6]->pts;
                VAR_7 = FUNC_3(VAR_2->outputs[VAR_5], VAR_9);
                VAR_8 = 1;
                if (VAR_7 < 0)
                    return VAR_7;
            }
        }
    }

    if (!VAR_8)
        FUNC_4(VAR_2, 100);
    return VAR_7;
}
