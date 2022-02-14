
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int mclms_order; int num_channels; int mclms_recent; int* mclms_coeffs; int* mclms_coeffs_cur; int mclms_scaling; scalar_t__** channel_residues; scalar_t__* mclms_prevvalues; int * is_channel_coded; } ;
typedef TYPE_1__ WmallDecodeCtx ;



__attribute__((used)) static void FUNC_0(WmallDecodeCtx *VAR_0, int VAR_1, int *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5 = VAR_0->mclms_order;
    int VAR_6 = VAR_0->num_channels;

    for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++) {
        VAR_2[VAR_3] = 0;
        if (!VAR_0->is_channel_coded[VAR_3])
            continue;
        for (VAR_4 = 0; VAR_4 < VAR_5 * VAR_6; VAR_4++)
            VAR_2[VAR_3] += (uint32_t)VAR_0->mclms_prevvalues[VAR_4 + VAR_0->mclms_recent] *
                         VAR_0->mclms_coeffs[VAR_4 + VAR_5 * VAR_6 * VAR_3];
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
            VAR_2[VAR_3] += (uint32_t)VAR_0->channel_residues[VAR_4][VAR_1] *
                         VAR_0->mclms_coeffs_cur[VAR_4 + VAR_6 * VAR_3];
        VAR_2[VAR_3] += 1 << (VAR_0->mclms_scaling - 1);
        VAR_2[VAR_3] >>= VAR_0->mclms_scaling;
        VAR_0->channel_residues[VAR_3][VAR_1] += VAR_2[VAR_3];
    }
}
