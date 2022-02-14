
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int w; int h; int format; TYPE_1__* dst; } ;
struct TYPE_11__ {int log2_chroma_h; int log2_chroma_w; TYPE_2__* comp; } ;
struct TYPE_10__ {int depth; int sigmaR; int* planewidth; int* planeheight; void* line_factor_a; void* slice_factor_a; void* map_factor_b; void* map_factor_a; void* img_temp; void* img_out_f; void* line_factor_b; void* slice_factor_b; int nb_planes; int * range_table; } ;
struct TYPE_9__ {int depth; } ;
struct TYPE_8__ {TYPE_3__* priv; } ;
typedef TYPE_3__ BilateralContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1)
{
    BilateralContext *VAR_2 = VAR_1->dst->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_4(VAR_1->format);
    float VAR_4;

    VAR_2->depth = VAR_3->comp[0].depth;
    VAR_4 = 1.0f / (VAR_2->sigmaR * ((1 << VAR_2->depth) - 1));


    for (int VAR_5 = 0; VAR_5 < (1 << VAR_2->depth); VAR_5++)
        VAR_2->range_table[VAR_5] = FUNC_5(-VAR_5 * VAR_4);

    VAR_2->planewidth[1] = VAR_2->planewidth[2] = FUNC_1(VAR_1->w, VAR_3->log2_chroma_w);
    VAR_2->planewidth[0] = VAR_2->planewidth[3] = VAR_1->w;
    VAR_2->planeheight[1] = VAR_2->planeheight[2] = FUNC_1(VAR_1->h, VAR_3->log2_chroma_h);
    VAR_2->planeheight[0] = VAR_2->planeheight[3] = VAR_1->h;

    VAR_2->nb_planes = FUNC_3(VAR_1->format);

    VAR_2->img_out_f = FUNC_2(VAR_1->w * VAR_1->h, sizeof(float));
    VAR_2->img_temp = FUNC_2(VAR_1->w * VAR_1->h, sizeof(float));
    VAR_2->map_factor_a = FUNC_2(VAR_1->w * VAR_1->h, sizeof(float));
    VAR_2->map_factor_b = FUNC_2(VAR_1->w * VAR_1->h, sizeof(float));
    VAR_2->slice_factor_a = FUNC_2(VAR_1->w, sizeof(float));
    VAR_2->slice_factor_b = FUNC_2(VAR_1->w, sizeof(float));
    VAR_2->line_factor_a = FUNC_2(VAR_1->w, sizeof(float));
    VAR_2->line_factor_b = FUNC_2(VAR_1->w, sizeof(float));

    if (!VAR_2->img_out_f ||
        !VAR_2->img_temp ||
        !VAR_2->map_factor_a ||
        !VAR_2->map_factor_b ||
        !VAR_2->slice_factor_a ||
        !VAR_2->slice_factor_a ||
        !VAR_2->line_factor_a ||
        !VAR_2->line_factor_a)
        return FUNC_0(VAR_0);

    return 0;
}
