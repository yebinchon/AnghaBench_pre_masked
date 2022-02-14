
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int nb_components; TYPE_1__* comp; } ;
struct TYPE_4__ {scalar_t__ depth; scalar_t__ offset; scalar_t__ shift; int plane; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const AVPixFmtDescriptor *VAR_3)
{
    int VAR_4;

    if (VAR_3->flags & ~(VAR_1 | VAR_2 | VAR_0) ||
        VAR_3->nb_components < 3 ||
        (VAR_3->comp[1].depth != VAR_3->comp[2].depth))
        return 0;
    for (VAR_4 = 0; VAR_4 < VAR_3->nb_components; VAR_4++) {
        if (VAR_3->comp[VAR_4].offset != 0 ||
            VAR_3->comp[VAR_4].shift != 0 ||
            VAR_3->comp[VAR_4].plane != VAR_4)
            return 0;
    }

    return 1;
}
