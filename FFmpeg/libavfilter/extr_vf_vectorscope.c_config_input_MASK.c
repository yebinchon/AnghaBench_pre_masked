
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int is_yuv; int size; int mult; int depth; int tmin; int lthreshold; int tmax; int hthreshold; scalar_t__ mode; int pd; int x; int y; int graticule; int* bg_color; int bgopacity; void** planewidth; void** planeheight; int vsub; int hsub; int graticulef; int vectorscope; } ;
typedef TYPE_2__ VectorscopeContext ;
struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {int format; void* w; void* h; TYPE_5__* dst; } ;
struct TYPE_11__ {int flags; int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_5__*,int ,char*) ;
 TYPE_3__* FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_11)
{
    const AVPixFmtDescriptor *VAR_12 = FUNC_3(VAR_11->format);
    AVFilterContext *VAR_13 = VAR_11->dst;
    VectorscopeContext *VAR_14 = VAR_13->priv;

    VAR_14->is_yuv = !(VAR_12->flags & VAR_1);
    VAR_14->size = 1 << VAR_12->comp[0].depth;
    VAR_14->mult = VAR_14->size / 256;
    VAR_14->depth = VAR_12->comp[0].depth;
    VAR_14->tmin = VAR_14->lthreshold * (VAR_14->size - 1);
    VAR_14->tmax = VAR_14->hthreshold * (VAR_14->size - 1);

    if (VAR_14->tmin > VAR_14->tmax) {
        FUNC_2(VAR_13, VAR_0, "low threshold should be less than high threshold\n");
        return FUNC_0(VAR_2);
    }

    if (VAR_14->mode == VAR_3 && VAR_14->is_yuv)
        VAR_14->pd = 0;
    else {
        if ((VAR_14->x == 1 && VAR_14->y == 2) || (VAR_14->x == 2 && VAR_14->y == 1))
            VAR_14->pd = 0;
        else if ((VAR_14->x == 0 && VAR_14->y == 2) || (VAR_14->x == 2 && VAR_14->y == 0))
            VAR_14->pd = 1;
        else if ((VAR_14->x == 0 && VAR_14->y == 1) || (VAR_14->x == 1 && VAR_14->y == 0))
            VAR_14->pd = 2;
    }

    if (VAR_14->size == 256)
        VAR_14->vectorscope = VAR_10;
    else
        VAR_14->vectorscope = VAR_9;

    VAR_14->graticulef = VAR_8;

    if (VAR_14->is_yuv && VAR_14->size == 256) {
        if (VAR_14->graticule == 1)
            VAR_14->graticulef = VAR_6;
        else if (VAR_14->graticule == 2)
            VAR_14->graticulef = VAR_4;
    } else if (VAR_14->is_yuv) {
        if (VAR_14->graticule == 1)
            VAR_14->graticulef = VAR_7;
        else if (VAR_14->graticule == 2)
            VAR_14->graticulef = VAR_5;
    }

    VAR_14->bg_color[3] = VAR_14->bgopacity * (VAR_14->size - 1);

    switch (VAR_11->format) {
    case 129:
    case 130:
    case 128:
    case 132:
    case 131:
        VAR_14->bg_color[0] = 0;
        VAR_14->bg_color[1] = 0;
        VAR_14->bg_color[2] = 0;
        break;
    default:
        VAR_14->bg_color[0] = 0;
        VAR_14->bg_color[1] = VAR_14->size / 2 - 1;
        VAR_14->bg_color[2] = VAR_14->size / 2 - 1;
    }

    VAR_14->hsub = VAR_12->log2_chroma_w;
    VAR_14->vsub = VAR_12->log2_chroma_h;
    VAR_14->planeheight[1] = VAR_14->planeheight[2] = FUNC_1(VAR_11->h, VAR_12->log2_chroma_h);
    VAR_14->planeheight[0] = VAR_14->planeheight[3] = VAR_11->h;
    VAR_14->planewidth[1] = VAR_14->planewidth[2] = FUNC_1(VAR_11->w, VAR_12->log2_chroma_w);
    VAR_14->planewidth[0] = VAR_14->planewidth[3] = VAR_11->w;

    return 0;
}
