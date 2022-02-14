
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int log2_chroma_w; int log2_chroma_h; TYPE_2__* comp; int nb_components; } ;
struct TYPE_10__ {int format; void* w; void* h; TYPE_1__* dst; } ;
struct TYPE_9__ {int histogram_size; int mult; int* bg_color; int* fg_color; int fgopacity; int bgopacity; void** planewidth; TYPE_6__* desc; void** planeheight; int ncomp; } ;
struct TYPE_8__ {int depth; } ;
struct TYPE_7__ {TYPE_3__* priv; } ;
typedef TYPE_3__ HistogramContext ;
typedef TYPE_4__ AVFilterLink ;


 void* FUNC_0 (void*,int ) ;







 TYPE_6__* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_4)
{
    HistogramContext *VAR_5 = VAR_4->dst->priv;

    VAR_5->desc = FUNC_1(VAR_4->format);
    VAR_5->ncomp = VAR_5->desc->nb_components;
    VAR_5->histogram_size = 1 << VAR_5->desc->comp[0].depth;
    VAR_5->mult = VAR_5->histogram_size / 256;

    switch (VAR_4->format) {
    case 132:
    case 129:
    case 133:
    case 130:
    case 128:
    case 134:
    case 131:
        FUNC_2(VAR_5->bg_color, VAR_0, 4);
        FUNC_2(VAR_5->fg_color, VAR_2, 4);
        break;
    default:
        FUNC_2(VAR_5->bg_color, VAR_1, 4);
        FUNC_2(VAR_5->fg_color, VAR_3, 4);
    }

    VAR_5->fg_color[3] = VAR_5->fgopacity * 255;
    VAR_5->bg_color[3] = VAR_5->bgopacity * 255;

    VAR_5->planeheight[1] = VAR_5->planeheight[2] = FUNC_0(VAR_4->h, VAR_5->desc->log2_chroma_h);
    VAR_5->planeheight[0] = VAR_5->planeheight[3] = VAR_4->h;
    VAR_5->planewidth[1] = VAR_5->planewidth[2] = FUNC_0(VAR_4->w, VAR_5->desc->log2_chroma_w);
    VAR_5->planewidth[0] = VAR_5->planewidth[3] = VAR_4->w;

    return 0;
}
