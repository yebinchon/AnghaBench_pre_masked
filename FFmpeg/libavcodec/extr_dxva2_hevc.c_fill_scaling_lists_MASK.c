
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int * ucScalingListDCCoefSizeID3; int * ucScalingListDCCoefSizeID2; int ** ucScalingLists3; int ** ucScalingLists2; int ** ucScalingLists1; int ** ucScalingLists0; } ;
struct TYPE_12__ {TYPE_2__* sps; TYPE_1__* pps; } ;
struct TYPE_14__ {TYPE_3__ ps; } ;
struct TYPE_13__ {int ** sl_dc; int *** sl; } ;
struct TYPE_11__ {TYPE_4__ scaling_list; } ;
struct TYPE_10__ {TYPE_4__ scaling_list; scalar_t__ scaling_list_data_present_flag; } ;
typedef TYPE_4__ ScalingList ;
typedef TYPE_5__ HEVCContext ;
typedef TYPE_6__ DXVA_Qmatrix_HEVC ;
typedef int AVDXVAContext ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (TYPE_6__*,int ,int) ;

__attribute__((used)) static void FUNC_1(AVDXVAContext *VAR_4, const HEVCContext *VAR_5, DXVA_Qmatrix_HEVC *VAR_6)
{
    unsigned VAR_7, VAR_8, VAR_9;
    const ScalingList *VAR_10 = VAR_5->ps.pps->scaling_list_data_present_flag ?
                            &VAR_5->ps.pps->scaling_list : &VAR_5->ps.sps->scaling_list;

    FUNC_0(VAR_6, 0, sizeof(*VAR_6));
    for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
            VAR_9 = 4 * VAR_1[VAR_8] + VAR_0[VAR_8];
            VAR_6->ucScalingLists0[VAR_7][VAR_8] = VAR_10->sl[0][VAR_7][VAR_9];
        }

        for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
            VAR_9 = 8 * VAR_3[VAR_8] + VAR_2[VAR_8];
            VAR_6->ucScalingLists1[VAR_7][VAR_8] = VAR_10->sl[1][VAR_7][VAR_9];
            VAR_6->ucScalingLists2[VAR_7][VAR_8] = VAR_10->sl[2][VAR_7][VAR_9];

            if (VAR_7 < 2)
                VAR_6->ucScalingLists3[VAR_7][VAR_8] = VAR_10->sl[3][VAR_7 * 3][VAR_9];
        }

        VAR_6->ucScalingListDCCoefSizeID2[VAR_7] = VAR_10->sl_dc[0][VAR_7];
        if (VAR_7 < 2)
            VAR_6->ucScalingListDCCoefSizeID3[VAR_7] = VAR_10->sl_dc[1][VAR_7 * 3];
    }
}
