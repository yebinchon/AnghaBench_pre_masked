
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* dst; } ;
struct TYPE_12__ {int width; int height; int* linesize; scalar_t__* data; } ;
struct TYPE_10__ {int* hsub; int* vsub; int* pixelstep; } ;
struct TYPE_11__ {scalar_t__ inlink_w; int x; int y; TYPE_2__ draw; scalar_t__ in_h; scalar_t__ h; scalar_t__ in_w; scalar_t__ w; } ;
struct TYPE_9__ {int * outputs; TYPE_3__* priv; } ;
typedef TYPE_3__ PadContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;


 TYPE_4__* FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static AVFrame *FUNC_1(AVFilterLink *VAR_0, int VAR_1, int VAR_2)
{
    PadContext *VAR_3 = VAR_0->dst->priv;
    AVFrame *VAR_4;
    int VAR_5;

    if (VAR_3->inlink_w <= 0)
        return ((void*)0);

    VAR_4 = FUNC_0(VAR_0->dst->outputs[0],
                                VAR_1 + (VAR_3->w - VAR_3->in_w),
                                VAR_2 + (VAR_3->h - VAR_3->in_h) + (VAR_3->x > 0));

    if (!VAR_4)
        return ((void*)0);

    VAR_4->width = VAR_1;
    VAR_4->height = VAR_2;

    for (VAR_5 = 0; VAR_5 < 4 && VAR_4->data[VAR_5] && VAR_4->linesize[VAR_5]; VAR_5++) {
        int VAR_6 = VAR_3->draw.hsub[VAR_5];
        int VAR_7 = VAR_3->draw.vsub[VAR_5];
        VAR_4->data[VAR_5] += (VAR_3->x >> VAR_6) * VAR_3->draw.pixelstep[VAR_5] +
                              (VAR_3->y >> VAR_7) * VAR_4->linesize[VAR_5];
    }

    return VAR_4;
}
