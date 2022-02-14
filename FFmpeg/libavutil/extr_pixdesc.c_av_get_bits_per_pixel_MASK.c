
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int log2_chroma_w; int log2_chroma_h; int nb_components; TYPE_1__* comp; } ;
struct TYPE_4__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;



int FUNC_0(const AVPixFmtDescriptor *VAR_0)
{
    int VAR_1, VAR_2 = 0;
    int VAR_3 = VAR_0->log2_chroma_w + VAR_0->log2_chroma_h;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_components; VAR_1++) {
        int VAR_4 = VAR_1 == 1 || VAR_1 == 2 ? 0 : VAR_3;
        VAR_2 += VAR_0->comp[VAR_1].depth << VAR_4;
    }

    return VAR_2 >> VAR_3;
}
