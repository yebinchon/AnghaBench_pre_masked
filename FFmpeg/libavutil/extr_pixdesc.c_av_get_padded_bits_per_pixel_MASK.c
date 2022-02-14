
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t plane; int step; } ;
struct TYPE_4__ {int log2_chroma_w; int log2_chroma_h; int nb_components; int flags; TYPE_2__* comp; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVComponentDescriptor ;


 int VAR_0 ;

int FUNC_0(const AVPixFmtDescriptor *VAR_1)
{
    int VAR_2, VAR_3 = 0;
    int VAR_4 = VAR_1->log2_chroma_w + VAR_1->log2_chroma_h;
    int VAR_5[4] = {0};

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_components; VAR_2++) {
        const AVComponentDescriptor *VAR_6 = &VAR_1->comp[VAR_2];
        int VAR_7 = VAR_2 == 1 || VAR_2 == 2 ? 0 : VAR_4;
        VAR_5[VAR_6->plane] = VAR_6->step << VAR_7;
    }
    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
        VAR_3 += VAR_5[VAR_2];

    if(!(VAR_1->flags & VAR_0))
        VAR_3 *= 8;

    return VAR_3 >> VAR_4;
}
