
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int nb_outputs; TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_17__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_16__ {int * linesize; int * data; } ;
struct TYPE_15__ {int* map; int * linesize; int step; int depth; scalar_t__ is_packed; } ;
typedef TYPE_1__ ExtractPlanesContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int const) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    ExtractPlanesContext *VAR_5 = VAR_4->priv;
    int VAR_6, VAR_7 = 0, VAR_8 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4->nb_outputs; VAR_6++) {
        AVFilterLink *VAR_9 = VAR_4->outputs[VAR_6];
        const int VAR_10 = VAR_5->map[VAR_6];
        AVFrame *VAR_11;

        if (FUNC_7(VAR_9))
            continue;

        VAR_11 = FUNC_6(VAR_9, VAR_9->w, VAR_9->h);
        if (!VAR_11) {
            VAR_8 = FUNC_0(VAR_1);
            break;
        }
        FUNC_1(VAR_11, VAR_3);

        if (VAR_5->is_packed) {
            FUNC_4(VAR_11->data[0], VAR_11->linesize[0],
                                VAR_3->data[0], VAR_3->linesize[0],
                                VAR_9->w, VAR_9->h,
                                VAR_5->depth,
                                VAR_5->step, VAR_10);
        } else {
            FUNC_3(VAR_11->data[0], VAR_11->linesize[0],
                                VAR_3->data[VAR_10], VAR_3->linesize[VAR_10],
                                VAR_5->linesize[VAR_10], VAR_9->h);
        }

        VAR_8 = FUNC_5(VAR_9, VAR_11);
        if (VAR_8 == VAR_0)
            VAR_7++;
        else if (VAR_8 < 0)
            break;
    }
    FUNC_2(&VAR_3);

    if (VAR_7 == VAR_4->nb_outputs)
        VAR_8 = VAR_0;
    else if (VAR_8 == VAR_0)
        VAR_8 = 0;
    return VAR_8;
}
