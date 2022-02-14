
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int mclms_order; int num_channels; int bits_per_sample; int** channel_residues; int mclms_recent; scalar_t__* mclms_updates; scalar_t__* mclms_prevvalues; int * mclms_coeffs_cur; int * mclms_coeffs; } ;
typedef TYPE_1__ WmallDecodeCtx ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(WmallDecodeCtx *VAR_0, int VAR_1, int *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7 = VAR_0->mclms_order;
    int VAR_8 = VAR_0->num_channels;
    int VAR_9 = 1 << (VAR_0->bits_per_sample - 1);

    for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
        VAR_6 = VAR_0->channel_residues[VAR_5][VAR_1] - VAR_2[VAR_5];
        if (VAR_6 > 0) {
            for (VAR_3 = 0; VAR_3 < VAR_7 * VAR_8; VAR_3++)
                VAR_0->mclms_coeffs[VAR_3 + VAR_5 * VAR_7 * VAR_8] +=
                    VAR_0->mclms_updates[VAR_0->mclms_recent + VAR_3];
            for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
                VAR_0->mclms_coeffs_cur[VAR_5 * VAR_8 + VAR_4] += FUNC_0(VAR_0->channel_residues[VAR_4][VAR_1]);
        } else if (VAR_6 < 0) {
            for (VAR_3 = 0; VAR_3 < VAR_7 * VAR_8; VAR_3++)
                VAR_0->mclms_coeffs[VAR_3 + VAR_5 * VAR_7 * VAR_8] -=
                    VAR_0->mclms_updates[VAR_0->mclms_recent + VAR_3];
            for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
                VAR_0->mclms_coeffs_cur[VAR_5 * VAR_8 + VAR_4] -= FUNC_0(VAR_0->channel_residues[VAR_4][VAR_1]);
        }
    }

    for (VAR_5 = VAR_8 - 1; VAR_5 >= 0; VAR_5--) {
        VAR_0->mclms_recent--;
        VAR_0->mclms_prevvalues[VAR_0->mclms_recent] = FUNC_1(VAR_0->channel_residues[VAR_5][VAR_1],
            -VAR_9, VAR_9 - 1);
        VAR_0->mclms_updates[VAR_0->mclms_recent] = FUNC_0(VAR_0->channel_residues[VAR_5][VAR_1]);
    }

    if (VAR_0->mclms_recent == 0) {
        FUNC_2(&VAR_0->mclms_prevvalues[VAR_7 * VAR_8],
               VAR_0->mclms_prevvalues,
               sizeof(int32_t) * VAR_7 * VAR_8);
        FUNC_2(&VAR_0->mclms_updates[VAR_7 * VAR_8],
               VAR_0->mclms_updates,
               sizeof(int32_t) * VAR_7 * VAR_8);
        VAR_0->mclms_recent = VAR_8 * VAR_7;
    }
}
