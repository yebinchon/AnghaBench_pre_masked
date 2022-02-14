
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum PhaseMode { ____Placeholder_PhaseMode } PhaseMode ;
struct TYPE_22__ {scalar_t__ is_disabled; TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_21__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_20__ {int * linesize; int ** data; } ;
struct TYPE_19__ {int nb_planes; int* planeheight; TYPE_2__* frame; int * linesize; int mode; } ;
typedef TYPE_1__ PhaseContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int *,int const*,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_4->dst;
    AVFilterLink *VAR_7 = VAR_6->outputs[0];
    PhaseContext *VAR_8 = VAR_6->priv;
    enum PhaseMode VAR_9;
    int VAR_10, VAR_11, VAR_12;
    AVFrame *VAR_13;

    if (VAR_6->is_disabled) {
        FUNC_4(&VAR_8->frame);



        VAR_8->frame = FUNC_2(VAR_5);
        return FUNC_5(VAR_7, VAR_5);
    }

    VAR_13 = FUNC_6(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_13) {
        FUNC_4(&VAR_5);
        return FUNC_0(VAR_1);
    }
    FUNC_3(VAR_13, VAR_5);

    if (!VAR_8->frame) {
        VAR_8->frame = VAR_5;
        VAR_9 = VAR_2;
    } else {
        VAR_9 = FUNC_1(VAR_6, VAR_8->mode, VAR_8->frame, VAR_5);
    }

    for (VAR_10 = 0; VAR_10 < VAR_8->nb_planes; VAR_10++) {
        const uint8_t *VAR_14 = VAR_8->frame->data[VAR_10];
        const uint8_t *VAR_15 = VAR_5->data[VAR_10];
        uint8_t *VAR_16 = VAR_13->data[VAR_10];

        for (VAR_12 = 0, VAR_11 = 1; VAR_12 < VAR_8->planeheight[VAR_10]; VAR_12++, VAR_11 ^= 1) {
            FUNC_7(VAR_16, VAR_9 == (VAR_11 ? VAR_0 : VAR_3) ? VAR_14 : VAR_15, VAR_8->linesize[VAR_10]);

            VAR_14 += VAR_8->frame->linesize[VAR_10];
            VAR_15 += VAR_5->linesize[VAR_10];
            VAR_16 += VAR_13->linesize[VAR_10];
        }
    }

    if (VAR_5 != VAR_8->frame)
        FUNC_4(&VAR_8->frame);
    VAR_8->frame = VAR_5;
    return FUNC_5(VAR_7, VAR_13);
}
