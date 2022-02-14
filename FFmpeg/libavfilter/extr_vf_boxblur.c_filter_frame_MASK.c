
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {TYPE_5__** outputs; TYPE_2__* priv; } ;
struct TYPE_21__ {int w; int h; int format; TYPE_6__* dst; } ;
struct TYPE_20__ {int height; scalar_t__* linesize; scalar_t__* data; } ;
struct TYPE_19__ {TYPE_1__* comp; } ;
struct TYPE_18__ {int temp; int * power; int * radius; int vsub; int hsub; } ;
struct TYPE_17__ {int depth; } ;
typedef TYPE_2__ BoxBlurContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__**) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,int,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int ,int ,int ,int const) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int ,int ,int ,int const) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    BoxBlurContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_1->dst->outputs[0];
    AVFrame *VAR_6;
    int VAR_7;
    int VAR_8 = FUNC_1(VAR_1->w, VAR_4->hsub), VAR_9 = FUNC_1(VAR_2->height, VAR_4->vsub);
    int VAR_10[4] = { VAR_1->w, VAR_8, VAR_8, VAR_1->w };
    int VAR_11[4] = { VAR_2->height, VAR_9, VAR_9, VAR_2->height };
    const AVPixFmtDescriptor *VAR_12 = FUNC_4(VAR_1->format);
    const int VAR_13 = VAR_12->comp[0].depth;
    const int VAR_14 = (VAR_13+7)/8;

    VAR_6 = FUNC_6(VAR_5, VAR_5->w, VAR_5->h);
    if (!VAR_6) {
        FUNC_3(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_6, VAR_2);

    for (VAR_7 = 0; VAR_7 < 4 && VAR_2->data[VAR_7] && VAR_2->linesize[VAR_7]; VAR_7++)
        FUNC_7(VAR_6->data[VAR_7], VAR_6->linesize[VAR_7],
              VAR_2 ->data[VAR_7], VAR_2 ->linesize[VAR_7],
              VAR_10[VAR_7], VAR_11[VAR_7], VAR_4->radius[VAR_7], VAR_4->power[VAR_7],
              VAR_4->temp, VAR_14);

    for (VAR_7 = 0; VAR_7 < 4 && VAR_2->data[VAR_7] && VAR_2->linesize[VAR_7]; VAR_7++)
        FUNC_8(VAR_6->data[VAR_7], VAR_6->linesize[VAR_7],
              VAR_6->data[VAR_7], VAR_6->linesize[VAR_7],
              VAR_10[VAR_7], VAR_11[VAR_7], VAR_4->radius[VAR_7], VAR_4->power[VAR_7],
              VAR_4->temp, VAR_14);

    FUNC_3(&VAR_2);

    return FUNC_5(VAR_5, VAR_6);
}
