
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int entries; } ;
struct TYPE_20__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_19__ {TYPE_4__* dst; } ;
struct TYPE_18__ {int pts; } ;
struct TYPE_17__ {scalar_t__ stats_mode; TYPE_5__* histogram; TYPE_5__* boxes; scalar_t__ nb_boxes; scalar_t__ nb_refs; int refs; TYPE_2__* prev_frame; } ;
typedef TYPE_1__ PaletteGenContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (TYPE_5__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    PaletteGenContext *VAR_6 = VAR_5->priv;
    int VAR_7 = VAR_6->prev_frame ? FUNC_5(VAR_6->histogram, VAR_6->prev_frame, VAR_4)
                            : FUNC_6(VAR_6->histogram, VAR_4);

    if (VAR_7 > 0)
        VAR_6->nb_refs += VAR_7;

    if (VAR_6->stats_mode == VAR_1) {
        FUNC_0(&VAR_6->prev_frame);
        VAR_6->prev_frame = VAR_4;
    } else if (VAR_6->stats_mode == VAR_2) {
        AVFrame *VAR_8;
        int VAR_9;

        VAR_8 = FUNC_3(VAR_5);
        VAR_8->pts = VAR_4->pts;
        FUNC_0(&VAR_4);
        VAR_7 = FUNC_2(VAR_5->outputs[0], VAR_8);
        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
            FUNC_1(&VAR_6->histogram[VAR_9].entries);
        FUNC_1(&VAR_6->refs);
        VAR_6->nb_refs = 0;
        VAR_6->nb_boxes = 0;
        FUNC_4(VAR_6->boxes, 0, sizeof(VAR_6->boxes));
        FUNC_4(VAR_6->histogram, 0, sizeof(VAR_6->histogram));
    } else {
        FUNC_0(&VAR_4);
    }

    return VAR_7;
}
