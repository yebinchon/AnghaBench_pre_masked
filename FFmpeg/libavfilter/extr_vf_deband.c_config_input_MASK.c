
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {int h; int w; TYPE_5__* dst; int format; } ;
struct TYPE_10__ {TYPE_1__* comp; int log2_chroma_h; int log2_chroma_w; int nb_components; } ;
struct TYPE_9__ {float direction; int range; int* planeheight; int* planewidth; int* thr; int* threshold; int* x_pos; int* y_pos; int deband; scalar_t__ coupling; int * shift; int nb_components; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ DebandContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (int ) ;
 int const FUNC_4 (float const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 float FUNC_5 (int,int) ;
 int const FUNC_6 (float const) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_5)
{
    const AVPixFmtDescriptor *VAR_6 = FUNC_3(VAR_5->format);
    AVFilterContext *VAR_7 = VAR_5->dst;
    DebandContext *VAR_8 = VAR_7->priv;
    const float VAR_9 = VAR_8->direction;
    const int VAR_10 = VAR_8->range;
    int VAR_11, VAR_12;

    VAR_8->nb_components = VAR_6->nb_components;

    VAR_8->planeheight[1] = VAR_8->planeheight[2] = FUNC_1(VAR_5->h, VAR_6->log2_chroma_h);
    VAR_8->planeheight[0] = VAR_8->planeheight[3] = VAR_5->h;
    VAR_8->planewidth[1] = VAR_8->planewidth[2] = FUNC_1(VAR_5->w, VAR_6->log2_chroma_w);
    VAR_8->planewidth[0] = VAR_8->planewidth[3] = VAR_5->w;
    VAR_8->shift[0] = VAR_6->log2_chroma_w;
    VAR_8->shift[1] = VAR_6->log2_chroma_h;

    if (VAR_8->coupling)
        VAR_8->deband = VAR_6->comp[0].depth > 8 ? VAR_2 : VAR_4;
    else
        VAR_8->deband = VAR_6->comp[0].depth > 8 ? VAR_1 : VAR_3;

    VAR_8->thr[0] = ((1 << VAR_6->comp[0].depth) - 1) * VAR_8->threshold[0];
    VAR_8->thr[1] = ((1 << VAR_6->comp[1].depth) - 1) * VAR_8->threshold[1];
    VAR_8->thr[2] = ((1 << VAR_6->comp[2].depth) - 1) * VAR_8->threshold[2];
    VAR_8->thr[3] = ((1 << VAR_6->comp[3].depth) - 1) * VAR_8->threshold[3];

    VAR_8->x_pos = FUNC_2(VAR_8->planewidth[0] * VAR_8->planeheight[0] * sizeof(*VAR_8->x_pos));
    VAR_8->y_pos = FUNC_2(VAR_8->planewidth[0] * VAR_8->planeheight[0] * sizeof(*VAR_8->y_pos));
    if (!VAR_8->x_pos || !VAR_8->y_pos)
        return FUNC_0(VAR_0);

    for (VAR_12 = 0; VAR_12 < VAR_8->planeheight[0]; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_8->planewidth[0]; VAR_11++) {
            const float VAR_13 = FUNC_5(VAR_11, VAR_12);
            const float VAR_14 = VAR_9 < 0 ? -VAR_9 : VAR_13 * VAR_9;
            const int VAR_15 = VAR_10 < 0 ? -VAR_10 : VAR_13 * VAR_10;

            VAR_8->x_pos[VAR_12 * VAR_8->planewidth[0] + VAR_11] = FUNC_4(VAR_14) * VAR_15;
            VAR_8->y_pos[VAR_12 * VAR_8->planewidth[0] + VAR_11] = FUNC_6(VAR_14) * VAR_15;
        }
    }

    return 0;
}
