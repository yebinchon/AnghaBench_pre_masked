
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int h; int w; TYPE_1__* dst; } ;
struct TYPE_16__ {int * linesize; int * data; } ;
struct TYPE_15__ {int nb_planes; int has_alpha; int alpha_swap; int alpha_mode; int * linesize; int chroma_swap; int chroma_mode; int chroma_height; int luma_swap; int luma_mode; } ;
struct TYPE_14__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ IlContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    IlContext *VAR_3 = VAR_1->dst->priv;
    AVFilterLink *VAR_4 = VAR_1->dst->outputs[0];
    AVFrame *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_4(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_5) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_5, VAR_2);

    FUNC_5(VAR_5->data[0], VAR_2->data[0],
               VAR_3->linesize[0], VAR_1->h,
               VAR_5->linesize[0], VAR_2->linesize[0],
               VAR_3->luma_mode, VAR_3->luma_swap);

    for (VAR_6 = 1; VAR_6 < (VAR_3->nb_planes - VAR_3->has_alpha); VAR_6++) {
        FUNC_5(VAR_5->data[VAR_6], VAR_2->data[VAR_6],
                   VAR_3->linesize[VAR_6], VAR_3->chroma_height,
                   VAR_5->linesize[VAR_6], VAR_2->linesize[VAR_6],
                   VAR_3->chroma_mode, VAR_3->chroma_swap);
    }

    if (VAR_3->has_alpha) {
        VAR_6 = VAR_3->nb_planes - 1;
        FUNC_5(VAR_5->data[VAR_6], VAR_2->data[VAR_6],
                   VAR_3->linesize[VAR_6], VAR_1->h,
                   VAR_5->linesize[VAR_6], VAR_2->linesize[VAR_6],
                   VAR_3->alpha_mode, VAR_3->alpha_swap);
    }

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_4, VAR_5);
}
