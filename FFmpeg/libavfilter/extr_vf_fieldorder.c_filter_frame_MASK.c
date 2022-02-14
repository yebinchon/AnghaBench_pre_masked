
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {int h; int w; TYPE_4__* dst; } ;
struct TYPE_17__ {scalar_t__ top_field_first; int height; int* linesize; int ** data; scalar_t__ interlaced_frame; } ;
struct TYPE_16__ {scalar_t__ dst_tff; int* line_size; } ;
typedef TYPE_1__ FieldOrderContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int ,char*,char*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    FieldOrderContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->outputs[0];
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    uint8_t *VAR_14, *VAR_15;
    AVFrame *VAR_16;

    if (!VAR_4->interlaced_frame ||
        VAR_4->top_field_first == VAR_6->dst_tff) {
        FUNC_4(VAR_5, VAR_1,
               "Skipping %s.\n",
               VAR_4->interlaced_frame ?
               "frame with same field order" : "progressive frame");
        return FUNC_5(VAR_7, VAR_4);
    }

    if (FUNC_3(VAR_4)) {
        VAR_16 = VAR_4;
    } else {
        VAR_16 = FUNC_6(VAR_7, VAR_7->w, VAR_7->h);
        if (!VAR_16) {
            FUNC_2(&VAR_4);
            return FUNC_0(VAR_2);
        }
        FUNC_1(VAR_16, VAR_4);
    }

    FUNC_4(VAR_5, VAR_0,
            "picture will move %s one line\n",
            VAR_6->dst_tff ? "up" : "down");
    VAR_8 = VAR_4->height;
    for (VAR_9 = 0; VAR_9 < 4 && VAR_4->data[VAR_9] && VAR_4->linesize[VAR_9]; VAR_9++) {
        VAR_11 = VAR_16->linesize[VAR_9] * (VAR_8 > 2);
        VAR_10 = VAR_4->linesize[VAR_9] * (VAR_8 > 2);
        VAR_12 = VAR_6->line_size[VAR_9];
        VAR_14 = VAR_16->data[VAR_9];
        VAR_15 = VAR_4->data[VAR_9];
        if (VAR_6->dst_tff) {





            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
                if (1 + VAR_13 < VAR_4->height) {
                    FUNC_7(VAR_14, VAR_15 + VAR_10, VAR_12);
                } else {
                    FUNC_7(VAR_14, VAR_15 - 2 * VAR_10, VAR_12);
                }
                VAR_14 += VAR_11;
                VAR_15 += VAR_10;
            }
        } else {





            VAR_14 += (VAR_8 - 1) * VAR_11;
            VAR_15 += (VAR_8 - 1) * VAR_10;
            for (VAR_13 = VAR_8 - 1; VAR_13 >= 0 ; VAR_13--) {
                if (VAR_13 > 0) {
                    FUNC_7(VAR_14, VAR_15 - VAR_10, VAR_12);
                } else {
                    FUNC_7(VAR_14, VAR_15 + 2 * VAR_10, VAR_12);
                }
                VAR_14 -= VAR_11;
                VAR_15 -= VAR_10;
            }
        }
    }
    VAR_16->top_field_first = VAR_6->dst_tff;

    if (VAR_4 != VAR_16)
        FUNC_2(&VAR_4);
    return FUNC_5(VAR_7, VAR_16);
}
