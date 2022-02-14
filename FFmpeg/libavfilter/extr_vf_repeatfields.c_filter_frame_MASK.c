
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_18__ {TYPE_4__* dst; } ;
struct TYPE_17__ {int* linesize; scalar_t__* data; int pts; int repeat_pict; scalar_t__ top_field_first; } ;
struct TYPE_16__ {int state; int nb_planes; int* planeheight; int * linesize; TYPE_2__* frame; } ;
typedef TYPE_1__ RepeatFieldsContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int,scalar_t__,int,int ,int) ;
 int FUNC_5 (TYPE_4__*,int ,char*,int,scalar_t__,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_3, AVFrame *VAR_4) {
    AVFilterContext *VAR_5 = VAR_3->dst;
    AVFilterLink *VAR_6 = VAR_3->dst->outputs[0];
    RepeatFieldsContext *VAR_7 = VAR_5->priv;
    AVFrame *VAR_8;
    int VAR_9, VAR_10;
    int VAR_11 = VAR_7->state;

    if (!VAR_7->frame) {
        VAR_7->frame = FUNC_1(VAR_4);
        if (!VAR_7->frame)
            return FUNC_0(VAR_2);
        VAR_7->frame->pts = VAR_1;
    }

    VAR_8 = VAR_7->frame;

    if ((VAR_11 == 0 && !VAR_4->top_field_first) ||
        (VAR_11 == 1 && VAR_4->top_field_first)) {
        FUNC_5(VAR_5, VAR_0, "Unexpected field flags: "
                                    "state=%d top_field_first=%d repeat_first_field=%d\n",
                                    VAR_11, VAR_4->top_field_first, VAR_4->repeat_pict);
        VAR_11 ^= 1;
    }

    if (VAR_11 == 0) {
        AVFrame *VAR_12;

        VAR_12 = FUNC_1(VAR_4);
        if (!VAR_12)
            return FUNC_0(VAR_2);

        VAR_9 = FUNC_6(VAR_6, VAR_12);

        if (VAR_4->repeat_pict) {
            FUNC_3(VAR_8);
            FUNC_7(VAR_6, VAR_8, VAR_4->pts, 2);
            for (VAR_10 = 0; VAR_10 < VAR_7->nb_planes; VAR_10++) {
                FUNC_4(VAR_8->data[VAR_10], VAR_8->linesize[VAR_10] * 2,
                                    VAR_4->data[VAR_10], VAR_4->linesize[VAR_10] * 2,
                                    VAR_7->linesize[VAR_10], VAR_7->planeheight[VAR_10] / 2);
            }
            VAR_11 = 1;
        }
    } else {
        for (VAR_10 = 0; VAR_10 < VAR_7->nb_planes; VAR_10++) {
            FUNC_3(VAR_8);
            FUNC_4(VAR_8->data[VAR_10] + VAR_8->linesize[VAR_10], VAR_8->linesize[VAR_10] * 2,
                                VAR_4->data[VAR_10] + VAR_4->linesize[VAR_10], VAR_4->linesize[VAR_10] * 2,
                                VAR_7->linesize[VAR_10], VAR_7->planeheight[VAR_10] / 2);
        }

        VAR_9 = FUNC_6(VAR_6, FUNC_1(VAR_8));

        if (VAR_4->repeat_pict) {
            AVFrame *VAR_13;

            VAR_13 = FUNC_1(VAR_4);
            if (!VAR_13)
                return FUNC_0(VAR_2);

            VAR_9 = FUNC_6(VAR_6, VAR_13);
            VAR_11 = 0;
        } else {
            FUNC_3(VAR_8);
            FUNC_7(VAR_6, VAR_8, VAR_4->pts, 1);
            for (VAR_10 = 0; VAR_10 < VAR_7->nb_planes; VAR_10++) {
                FUNC_4(VAR_8->data[VAR_10], VAR_8->linesize[VAR_10] * 2,
                                    VAR_4->data[VAR_10], VAR_4->linesize[VAR_10] * 2,
                                    VAR_7->linesize[VAR_10], VAR_7->planeheight[VAR_10] / 2);
            }
        }
    }

    VAR_7->state = VAR_11;

    FUNC_2(&VAR_4);
    return VAR_9;
}
