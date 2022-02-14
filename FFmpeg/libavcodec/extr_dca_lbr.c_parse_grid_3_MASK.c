
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int min_mono_subband; unsigned int* grid_3_pres; int gb; scalar_t__*** grid_3_scf; } ;
typedef TYPE_1__ DCALbrDecoder ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(DCALbrDecoder *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
        if ((VAR_7 != VAR_2 && VAR_4 + 4 >= VAR_1->min_mono_subband) != VAR_5)
            continue;

        if (VAR_1->grid_3_pres[VAR_7] & (1U << VAR_4))
            continue;

        for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
            if (FUNC_0(&VAR_1->gb, 20))
                return;
            VAR_1->grid_3_scf[VAR_7][VAR_4][VAR_6] = FUNC_1(&VAR_1->gb, &VAR_0, 2) - 16;
        }


        VAR_1->grid_3_pres[VAR_7] |= 1U << VAR_4;
    }
}
