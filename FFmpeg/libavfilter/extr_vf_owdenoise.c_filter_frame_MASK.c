
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {int const w; int const h; TYPE_4__* dst; } ;
struct TYPE_17__ {int * linesize; int * data; } ;
struct TYPE_16__ {scalar_t__ luma_strength; scalar_t__ chroma_strength; int vsub; int hsub; } ;
typedef TYPE_1__ OWDenoiseContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,int ,int const,int const) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int const,int const) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,int ,int const,int const,scalar_t__) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    OWDenoiseContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    AVFrame *VAR_6;
    const int VAR_7 = FUNC_1(VAR_1->w, VAR_4->hsub);
    const int VAR_8 = FUNC_1(VAR_1->h, VAR_4->vsub);

    if (FUNC_4(VAR_2)) {
        VAR_6 = VAR_2;

        if (VAR_4->luma_strength > 0)
            FUNC_8(VAR_4, VAR_6->data[0], VAR_6->linesize[0], VAR_2->data[0], VAR_2->linesize[0], VAR_1->w, VAR_1->h, VAR_4->luma_strength);
        if (VAR_4->chroma_strength > 0) {
            FUNC_8(VAR_4, VAR_6->data[1], VAR_6->linesize[1], VAR_2->data[1], VAR_2->linesize[1], VAR_7, VAR_8, VAR_4->chroma_strength);
            FUNC_8(VAR_4, VAR_6->data[2], VAR_6->linesize[2], VAR_2->data[2], VAR_2->linesize[2], VAR_7, VAR_8, VAR_4->chroma_strength);
        }
    } else {
        VAR_6 = FUNC_7(VAR_5, VAR_5->w, VAR_5->h);
        if (!VAR_6) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_6, VAR_2);

        if (VAR_4->luma_strength > 0) {
            FUNC_8(VAR_4, VAR_6->data[0], VAR_6->linesize[0], VAR_2->data[0], VAR_2->linesize[0], VAR_1->w, VAR_1->h, VAR_4->luma_strength);
        } else {
            FUNC_5(VAR_6->data[0], VAR_6->linesize[0], VAR_2 ->data[0], VAR_2 ->linesize[0], VAR_1->w, VAR_1->h);
        }
        if (VAR_4->chroma_strength > 0) {
            FUNC_8(VAR_4, VAR_6->data[1], VAR_6->linesize[1], VAR_2->data[1], VAR_2->linesize[1], VAR_7, VAR_8, VAR_4->chroma_strength);
            FUNC_8(VAR_4, VAR_6->data[2], VAR_6->linesize[2], VAR_2->data[2], VAR_2->linesize[2], VAR_7, VAR_8, VAR_4->chroma_strength);
        } else {
            FUNC_5(VAR_6->data[1], VAR_6->linesize[1], VAR_2 ->data[1], VAR_2 ->linesize[1], VAR_1->w, VAR_1->h);
            FUNC_5(VAR_6->data[2], VAR_6->linesize[2], VAR_2 ->data[2], VAR_2 ->linesize[2], VAR_1->w, VAR_1->h);
        }

        if (VAR_2->data[3])
            FUNC_5(VAR_6->data[3], VAR_6->linesize[3],
                                VAR_2 ->data[3], VAR_2 ->linesize[3],
                                VAR_1->w, VAR_1->h);
        FUNC_3(&VAR_2);
    }

    return FUNC_6(VAR_5, VAR_6);
}
