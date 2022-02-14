
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int max_pixsteps ;
typedef int max_pixstep_comps ;
struct TYPE_5__ {int step; size_t plane; } ;
struct TYPE_4__ {TYPE_2__* comp; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;
typedef TYPE_2__ AVComponentDescriptor ;


 int FUNC_0 (int*,int ,int) ;

void FUNC_1(int VAR_0[4], int VAR_1[4],
                                const AVPixFmtDescriptor *VAR_2)
{
    int VAR_3;
    FUNC_0(VAR_0, 0, 4*sizeof(VAR_0[0]));
    if (VAR_1)
        FUNC_0(VAR_1, 0, 4*sizeof(VAR_1[0]));

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        const AVComponentDescriptor *VAR_4 = &(VAR_2->comp[VAR_3]);
        if (VAR_4->step > VAR_0[VAR_4->plane]) {
            VAR_0[VAR_4->plane] = VAR_4->step;
            if (VAR_1)
                VAR_1[VAR_4->plane] = VAR_3;
        }
    }
}
