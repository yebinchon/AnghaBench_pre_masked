
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int format; TYPE_2__* dst; } ;
struct TYPE_12__ {int nb_components; TYPE_1__* comp; int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_11__ {int planes; int bps; int vsub; int hsub; } ;
struct TYPE_10__ {TYPE_3__* priv; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_3__ GEQContext ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterLink ;


 int FUNC_0 (TYPE_4__ const*) ;
 TYPE_4__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0)
{
    GEQContext *VAR_1 = VAR_0->dst->priv;
    const AVPixFmtDescriptor *VAR_2 = FUNC_1(VAR_0->format);

    FUNC_0(VAR_2);

    VAR_1->hsub = VAR_2->log2_chroma_w;
    VAR_1->vsub = VAR_2->log2_chroma_h;
    VAR_1->bps = VAR_2->comp[0].depth;
    VAR_1->planes = VAR_2->nb_components;
    return 0;
}
