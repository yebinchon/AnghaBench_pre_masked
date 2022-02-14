
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nsubbands; int min_mono_subband; int gb; scalar_t__** grid_3_avg; int ** grid_1_scf; } ;
typedef TYPE_1__ DCALbrDecoder ;


 scalar_t__ FUNC_0 (int *,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(DCALbrDecoder *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;


    VAR_6 = VAR_1[VAR_3->nsubbands - 1] + 1;
    for (VAR_5 = 2; VAR_5 < VAR_6; VAR_5++) {
        if (VAR_0[VAR_5] >= VAR_3->min_mono_subband
            && FUNC_1(VAR_3, VAR_3->grid_1_scf[VAR_4][VAR_5]) < 0)
            return -1;
    }


    for (VAR_5 = 0; VAR_5 < VAR_3->nsubbands - 4; VAR_5++) {
        if (VAR_5 + 4 >= VAR_3->min_mono_subband) {
            if (FUNC_0(&VAR_3->gb, 20))
                return 0;
            VAR_3->grid_3_avg[VAR_4][VAR_5] = FUNC_2(&VAR_3->gb, &VAR_2, 2) - 16;
        }
    }

    return 0;
}
