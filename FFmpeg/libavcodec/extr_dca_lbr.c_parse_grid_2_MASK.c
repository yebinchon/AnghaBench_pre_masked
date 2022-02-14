
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int nsubbands; scalar_t__ min_mono_subband; int gb; int *** grid_2_scf; } ;
typedef TYPE_1__ DCALbrDecoder ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(DCALbrDecoder *VAR_3, int VAR_4, int VAR_5,
                        int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_13 = VAR_1[VAR_3->nsubbands - 1] + 1;
    if (VAR_7 > VAR_13)
        VAR_7 = VAR_13;

    for (VAR_11 = VAR_6; VAR_11 < VAR_7; VAR_11++) {
        for (VAR_12 = VAR_4; VAR_12 <= VAR_5; VAR_12++) {
            uint8_t *VAR_14 = VAR_3->grid_2_scf[VAR_12][VAR_11];

            if ((VAR_12 != VAR_4 && VAR_0[VAR_11] >= VAR_3->min_mono_subband) != VAR_8) {
                if (!VAR_8)
                    FUNC_3(VAR_14, VAR_3->grid_2_scf[VAR_4][VAR_11], 64);
                continue;
            }


            for (VAR_9 = 0; VAR_9 < 8; VAR_9++, VAR_14 += 8) {
                if (FUNC_2(&VAR_3->gb) < 1) {
                    FUNC_4(VAR_14, 0, 64 - VAR_9 * 8);
                    break;
                }

                if (FUNC_1(&VAR_3->gb)) {
                    for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
                        if (FUNC_0(&VAR_3->gb, 20))
                            break;
                        VAR_14[VAR_10] = FUNC_5(&VAR_3->gb, &VAR_2, 2);
                    }
                } else {
                    FUNC_4(VAR_14, 0, 8);
                }
            }
        }
    }

    return 0;
}
