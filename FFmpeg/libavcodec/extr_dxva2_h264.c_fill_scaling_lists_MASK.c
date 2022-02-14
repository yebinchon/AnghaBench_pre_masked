
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int ** bScalingLists8x8; int ** bScalingLists4x4; } ;
struct TYPE_8__ {TYPE_2__* pps; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_9__ {int ** scaling_matrix8; int ** scaling_matrix4; } ;
typedef TYPE_2__ PPS ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ DXVA_Qmatrix_H264 ;
typedef int AVDXVAContext ;
typedef int AVCodecContext ;


 int FUNC_0 (int const*,int *) ;
 int VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_2(const AVCodecContext *VAR_3, AVDXVAContext *VAR_4, const H264Context *VAR_5, DXVA_Qmatrix_H264 *VAR_6)
{
    const PPS *VAR_7 = VAR_5->ps.pps;
    unsigned VAR_8, VAR_9;
    FUNC_1(VAR_6, 0, sizeof(*VAR_6));
    if (FUNC_0(VAR_3, VAR_4) & VAR_0) {
        for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
            for (VAR_9 = 0; VAR_9 < 16; VAR_9++)
                VAR_6->bScalingLists4x4[VAR_8][VAR_9] = VAR_7->scaling_matrix4[VAR_8][VAR_9];

        for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
            VAR_6->bScalingLists8x8[0][VAR_8] = VAR_7->scaling_matrix8[0][VAR_8];
            VAR_6->bScalingLists8x8[1][VAR_8] = VAR_7->scaling_matrix8[3][VAR_8];
        }
    } else {
        for (VAR_8 = 0; VAR_8 < 6; VAR_8++)
            for (VAR_9 = 0; VAR_9 < 16; VAR_9++)
                VAR_6->bScalingLists4x4[VAR_8][VAR_9] = VAR_7->scaling_matrix4[VAR_8][VAR_2[VAR_9]];

        for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
            VAR_6->bScalingLists8x8[0][VAR_8] = VAR_7->scaling_matrix8[0][VAR_1[VAR_8]];
            VAR_6->bScalingLists8x8[1][VAR_8] = VAR_7->scaling_matrix8[3][VAR_1[VAR_8]];
        }
    }
}
