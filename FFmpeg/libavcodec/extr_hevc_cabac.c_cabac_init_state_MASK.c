
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int slice_type; int slice_qp; scalar_t__ cabac_init_flag; } ;
struct TYPE_7__ {TYPE_2__* HEVClc; TYPE_1__ sh; } ;
struct TYPE_6__ {int* cabac_state; scalar_t__* stat_coeff; } ;
typedef TYPE_3__ HEVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int** VAR_2 ;

__attribute__((used)) static void FUNC_1(HEVCContext *VAR_3)
{
    int VAR_4 = 2 - VAR_3->sh.slice_type;
    int VAR_5;

    if (VAR_3->sh.cabac_init_flag && VAR_3->sh.slice_type != VAR_1)
        VAR_4 ^= 3;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        int VAR_6 = VAR_2[VAR_4][VAR_5];
        int VAR_7 = (VAR_6 >> 4) * 5 - 45;
        int VAR_8 = ((VAR_6 & 15) << 3) - 16;
        int VAR_9 = 2 * (((VAR_7 * FUNC_0(VAR_3->sh.slice_qp, 0, 51)) >> 4) + VAR_8) - 127;

        VAR_9 ^= VAR_9 >> 31;
        if (VAR_9 > 124)
            VAR_9 = 124 + (VAR_9 & 1);
        VAR_3->HEVClc->cabac_state[VAR_5] = VAR_9;
    }

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        VAR_3->HEVClc->stat_coeff[VAR_5] = 0;
}
