
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
struct TYPE_11__ {void* w; void* h; TYPE_5__* dst; int format; } ;
struct TYPE_10__ {TYPE_1__* comp; int log2_chroma_w; int log2_chroma_h; int nb_components; } ;
struct TYPE_9__ {int depth; void** planewidth; void** planeheight; int nb_planes; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ BPNContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 void* FUNC_0 (void*,int ) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0)
{
    const AVPixFmtDescriptor *VAR_1 = FUNC_1(VAR_0->format);
    AVFilterContext *VAR_2 = VAR_0->dst;
    BPNContext *VAR_3 = VAR_2->priv;

    VAR_3->nb_planes = VAR_1->nb_components;

    VAR_3->planeheight[1] = VAR_3->planeheight[2] = FUNC_0(VAR_0->h, VAR_1->log2_chroma_h);
    VAR_3->planeheight[0] = VAR_3->planeheight[3] = VAR_0->h;
    VAR_3->planewidth[1] = VAR_3->planewidth[2] = FUNC_0(VAR_0->w, VAR_1->log2_chroma_w);
    VAR_3->planewidth[0] = VAR_3->planewidth[3] = VAR_0->w;

    VAR_3->depth = VAR_1->comp[0].depth;

    return 0;
}
