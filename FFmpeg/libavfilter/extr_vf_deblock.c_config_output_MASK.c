
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
struct TYPE_8__ {int depth; int bpc; int max; int ath; int alpha; int bth; int beta; int gth; int gamma; int dth; int delta; scalar_t__ filter; void** planeheight; TYPE_6__* desc; void** planewidth; int deblockv; int deblockh; int nb_planes; } ;
struct TYPE_7__ {int depth; } ;
typedef TYPE_2__ DeblockContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 void* FUNC_0 (void*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_11)
{
    AVFilterContext *VAR_12 = VAR_11->src;
    DeblockContext *VAR_13 = VAR_12->priv;
    AVFilterLink *VAR_14 = VAR_12->inputs[0];

    VAR_13->desc = FUNC_2(VAR_11->format);
    if (!VAR_13->desc)
        return VAR_0;
    VAR_13->nb_planes = FUNC_1(VAR_11->format);
    VAR_13->depth = VAR_13->desc->comp[0].depth;
    VAR_13->bpc = (VAR_13->depth + 7) / 8;
    VAR_13->max = (1 << VAR_13->depth) - 1;
    VAR_13->ath = VAR_13->alpha * VAR_13->max;
    VAR_13->bth = VAR_13->beta * VAR_13->max;
    VAR_13->gth = VAR_13->gamma * VAR_13->max;
    VAR_13->dth = VAR_13->delta * VAR_13->max;

    if (VAR_13->depth <= 8 && VAR_13->filter == VAR_2) {
        VAR_13->deblockh = VAR_6;
        VAR_13->deblockv = VAR_10;
    } else if (VAR_13->depth >= 8 && VAR_13->filter == VAR_2) {
        VAR_13->deblockh = VAR_4;
        VAR_13->deblockv = VAR_8;
    }
    if (VAR_13->depth <= 8 && VAR_13->filter == VAR_1) {
        VAR_13->deblockh = VAR_5;
        VAR_13->deblockv = VAR_9;
    } else if (VAR_13->depth >= 8 && VAR_13->filter == VAR_1) {
        VAR_13->deblockh = VAR_3;
        VAR_13->deblockv = VAR_7;
    }

    VAR_13->planewidth[1] = VAR_13->planewidth[2] = FUNC_0(VAR_14->w, VAR_13->desc->log2_chroma_w);
    VAR_13->planewidth[0] = VAR_13->planewidth[3] = VAR_14->w;

    VAR_13->planeheight[1] = VAR_13->planeheight[2] = FUNC_0(VAR_14->h, VAR_13->desc->log2_chroma_h);
    VAR_13->planeheight[0] = VAR_13->planeheight[3] = VAR_14->h;

    return 0;
}
