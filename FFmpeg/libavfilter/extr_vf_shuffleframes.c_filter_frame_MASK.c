
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_13__ {TYPE_4__* dst; } ;
struct TYPE_12__ {int pts; } ;
struct TYPE_11__ {size_t in_frames; size_t nb_frames; int* map; TYPE_2__** frames; int * pts; } ;
typedef TYPE_1__ ShuffleFramesContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    ShuffleFramesContext *VAR_4 = VAR_3->priv;
    int VAR_5 = 0;

    if (VAR_4->in_frames < VAR_4->nb_frames) {
        VAR_4->frames[VAR_4->in_frames] = VAR_2;
        VAR_4->pts[VAR_4->in_frames] = VAR_2->pts;
        VAR_4->in_frames++;
    }

    if (VAR_4->in_frames == VAR_4->nb_frames) {
        int VAR_6, VAR_7;

        for (VAR_6 = 0; VAR_6 < VAR_4->nb_frames; VAR_6++) {
            AVFrame *VAR_8;

            VAR_7 = VAR_4->map[VAR_6];
            if (VAR_7 >= 0) {
                VAR_8 = FUNC_1(VAR_4->frames[VAR_7]);
                if (!VAR_8)
                    return FUNC_0(VAR_0);
                VAR_8->pts = VAR_4->pts[VAR_6];
                VAR_5 = FUNC_3(VAR_3->outputs[0], VAR_8);
            }
            VAR_4->in_frames--;
        }

        for (VAR_6 = 0; VAR_6 < VAR_4->nb_frames; VAR_6++)
            FUNC_2(&VAR_4->frames[VAR_6]);
    }

    return VAR_5;
}
