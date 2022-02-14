
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_17__ {int w; int h; TYPE_4__* dst; } ;
struct TYPE_16__ {int * linesize; int * data; } ;
struct TYPE_15__ {int nb_planes; int chroma_w; int chroma_h; int patch_hsize_uv; int patch_hsize; int research_hsize_uv; int research_hsize; } ;
typedef TYPE_1__ NLMeansContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_4__*,int const,int const,int const,int const,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    int VAR_3;
    AVFilterContext *VAR_4 = VAR_1->dst;
    NLMeansContext *VAR_5 = VAR_4->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];

    AVFrame *VAR_7 = FUNC_4(VAR_6, VAR_6->w, VAR_6->h);
    if (!VAR_7) {
        FUNC_2(&VAR_2);
        return FUNC_0(VAR_0);
    }
    FUNC_1(VAR_7, VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_5->nb_planes; VAR_3++) {
        const int VAR_8 = VAR_3 ? VAR_5->chroma_w : VAR_1->w;
        const int VAR_9 = VAR_3 ? VAR_5->chroma_h : VAR_1->h;
        const int VAR_10 = VAR_3 ? VAR_5->patch_hsize_uv : VAR_5->patch_hsize;
        const int VAR_11 = VAR_3 ? VAR_5->research_hsize_uv : VAR_5->research_hsize;
        FUNC_5(VAR_4, VAR_8, VAR_9, VAR_10, VAR_11,
                      VAR_7->data[VAR_3], VAR_7->linesize[VAR_3],
                      VAR_2->data[VAR_3], VAR_2->linesize[VAR_3]);
    }

    FUNC_2(&VAR_2);
    return FUNC_3(VAR_6, VAR_7);
}
