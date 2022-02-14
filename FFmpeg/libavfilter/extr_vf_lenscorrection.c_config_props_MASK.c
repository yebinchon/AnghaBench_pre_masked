
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_9__ {int format; int h; int w; TYPE_4__* src; } ;
struct TYPE_8__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_7__ {int nb_planes; int height; int width; int vsub; int hsub; } ;
typedef TYPE_1__ LenscorrectionCtx ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    LenscorrectionCtx *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];
    const AVPixFmtDescriptor *VAR_4 = FUNC_1(VAR_3->format);
    VAR_2->hsub = VAR_4->log2_chroma_w;
    VAR_2->vsub = VAR_4->log2_chroma_h;
    VAR_0->w = VAR_2->width = VAR_3->w;
    VAR_0->h = VAR_2->height = VAR_3->h;
    VAR_2->nb_planes = FUNC_0(VAR_3->format);
    return 0;
}
