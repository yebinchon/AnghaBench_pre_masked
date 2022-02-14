
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int log2_chroma_h; int log2_chroma_w; TYPE_1__* comp; } ;
struct TYPE_10__ {TYPE_3__** inputs; TYPE_2__* priv; } ;
struct TYPE_9__ {void* h; void* w; int format; TYPE_4__* src; } ;
struct TYPE_8__ {int depth; int max; int luma2d; int lt; int lumaT; int tl; int chromaT1; int tc; int chromaT2; int ct; int derainbow; int dedotcrawl; void** planeheight; TYPE_6__* desc; void** planewidth; int nb_planes; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_2__ DedotContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_5)
{
    AVFilterContext *VAR_6 = VAR_5->src;
    DedotContext *VAR_7 = VAR_6->priv;
    AVFilterLink *VAR_8 = VAR_6->inputs[0];

    VAR_7->desc = FUNC_2(VAR_5->format);
    if (!VAR_7->desc)
        return VAR_0;
    VAR_7->nb_planes = FUNC_1(VAR_5->format);
    VAR_7->depth = VAR_7->desc->comp[0].depth;
    VAR_7->max = (1 << VAR_7->depth) - 1;
    VAR_7->luma2d = VAR_7->lt * VAR_7->max;
    VAR_7->lumaT = VAR_7->tl * VAR_7->max;
    VAR_7->chromaT1 = VAR_7->tc * VAR_7->max;
    VAR_7->chromaT2 = VAR_7->ct * VAR_7->max;

    VAR_7->planewidth[1] = VAR_7->planewidth[2] = FUNC_0(VAR_8->w, VAR_7->desc->log2_chroma_w);
    VAR_7->planewidth[0] = VAR_7->planewidth[3] = VAR_8->w;

    VAR_7->planeheight[1] = VAR_7->planeheight[2] = FUNC_0(VAR_8->h, VAR_7->desc->log2_chroma_h);
    VAR_7->planeheight[0] = VAR_7->planeheight[3] = VAR_8->h;

    if (VAR_7->depth <= 8) {
        VAR_7->dedotcrawl = VAR_2;
        VAR_7->derainbow = VAR_4;
    } else {
        VAR_7->dedotcrawl = VAR_1;
        VAR_7->derainbow = VAR_3;
    }

    return 0;
}
