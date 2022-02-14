
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {int w; int h; TYPE_1__* dst; } ;
struct TYPE_20__ {int * linesize; int * data; } ;
struct TYPE_18__ {int filter_context; int threshold; } ;
struct TYPE_17__ {int filter_context; int threshold; } ;
struct TYPE_19__ {TYPE_3__ chroma; TYPE_2__ luma; int vsub; int hsub; } ;
struct TYPE_16__ {TYPE_6__** outputs; TYPE_4__* priv; } ;
typedef TYPE_4__ SmartblurContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__**) ;
 int FUNC_4 (int ,int ,int ,int ,int,int,int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 TYPE_5__* FUNC_6 (TYPE_6__*,int,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    SmartblurContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    AVFrame *VAR_5;
    int VAR_6 = FUNC_1(VAR_1->w, VAR_3->hsub);
    int VAR_7 = FUNC_1(VAR_1->h, VAR_3->vsub);

    VAR_5 = FUNC_6(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_5) {
        FUNC_3(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_2(VAR_5, VAR_2);

    FUNC_4(VAR_5->data[0], VAR_5->linesize[0],
         VAR_2->data[0], VAR_2->linesize[0],
         VAR_1->w, VAR_1->h, VAR_3->luma.threshold,
         VAR_3->luma.filter_context);

    if (VAR_2->data[2]) {
        FUNC_4(VAR_5->data[1], VAR_5->linesize[1],
             VAR_2->data[1], VAR_2->linesize[1],
             VAR_6, VAR_7, VAR_3->chroma.threshold,
             VAR_3->chroma.filter_context);
        FUNC_4(VAR_5->data[2], VAR_5->linesize[2],
             VAR_2->data[2], VAR_2->linesize[2],
             VAR_6, VAR_7, VAR_3->chroma.threshold,
             VAR_3->chroma.filter_context);
    }

    FUNC_3(&VAR_2);
    return FUNC_5(VAR_4, VAR_5);
}
