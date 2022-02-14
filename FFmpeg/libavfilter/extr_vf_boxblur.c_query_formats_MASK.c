
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int nb_components; TYPE_1__* comp; } ;
struct TYPE_4__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_6)
{
    AVFilterFormats *VAR_7 = ((void*)0);
    int VAR_8, VAR_9;

    for (VAR_8 = 0; FUNC_0(VAR_8); VAR_8++) {
        const AVPixFmtDescriptor *VAR_10 = FUNC_0(VAR_8);
        if (!(VAR_10->flags & (VAR_2 | VAR_1 | VAR_3)) &&
            (VAR_10->flags & VAR_4 || VAR_10->nb_components == 1) &&
            (!(VAR_10->flags & VAR_0) == !VAR_5 || VAR_10->comp[0].depth == 8) &&
            (VAR_9 = FUNC_1(&VAR_7, VAR_8)) < 0)
            return VAR_9;
    }

    return FUNC_2(VAR_6, VAR_7);
}
