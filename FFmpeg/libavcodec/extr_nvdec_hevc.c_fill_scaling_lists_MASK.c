
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int * ScalingListDCCoeff32x32; int * ScalingListDCCoeff16x16; int ** ScalingList32x32; int ** ScalingList16x16; int ** ScalingList8x8; int ** ScalingList4x4; } ;
struct TYPE_11__ {TYPE_2__* sps; TYPE_1__* pps; } ;
struct TYPE_13__ {TYPE_3__ ps; } ;
struct TYPE_12__ {int ** sl_dc; int *** sl; } ;
struct TYPE_10__ {TYPE_4__ scaling_list; } ;
struct TYPE_9__ {TYPE_4__ scaling_list; scalar_t__ scaling_list_data_present_flag; } ;
typedef TYPE_4__ ScalingList ;
typedef TYPE_5__ HEVCContext ;
typedef TYPE_6__ CUVIDHEVCPICPARAMS ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_0(CUVIDHEVCPICPARAMS *VAR_4, const HEVCContext *VAR_5)
{
    const ScalingList *VAR_6 = VAR_5->ps.pps->scaling_list_data_present_flag ?
                            &VAR_5->ps.pps->scaling_list : &VAR_5->ps.sps->scaling_list;
    int VAR_7, VAR_8, VAR_9;

    for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
            VAR_9 = 4 * VAR_1[VAR_8] + VAR_0[VAR_8];
            VAR_4->ScalingList4x4[VAR_7][VAR_8] = VAR_6->sl[0][VAR_7][VAR_9];
        }

        for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
            VAR_9 = 8 * VAR_3[VAR_8] + VAR_2[VAR_8];
            VAR_4->ScalingList8x8[VAR_7][VAR_8] = VAR_6->sl[1][VAR_7][VAR_9];
            VAR_4->ScalingList16x16[VAR_7][VAR_8] = VAR_6->sl[2][VAR_7][VAR_9];

            if (VAR_7 < 2)
                VAR_4->ScalingList32x32[VAR_7][VAR_8] = VAR_6->sl[3][VAR_7 * 3][VAR_9];
        }

        VAR_4->ScalingListDCCoeff16x16[VAR_7] = VAR_6->sl_dc[0][VAR_7];
        if (VAR_7 < 2)
            VAR_4->ScalingListDCCoeff32x32[VAR_7] = VAR_6->sl_dc[1][VAR_7 * 3];
    }
}
