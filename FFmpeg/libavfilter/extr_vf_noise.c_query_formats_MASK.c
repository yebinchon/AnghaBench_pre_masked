
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_1__* comp; } ;
struct TYPE_4__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1)
{
    AVFilterFormats *VAR_2 = ((void*)0);
    int VAR_3, VAR_4;

    for (VAR_3 = 0; FUNC_0(VAR_3); VAR_3++) {
        const AVPixFmtDescriptor *VAR_5 = FUNC_0(VAR_3);
        if (VAR_5->flags & VAR_0 && !(VAR_5->comp[0].depth & 7)
            && (VAR_4 = FUNC_1(&VAR_2, VAR_3)) < 0)
                return VAR_4;
    }

    return FUNC_2(VAR_1, VAR_2);
}
