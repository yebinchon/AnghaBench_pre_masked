
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_3__ {int* acfilter_coeffs; int acfilter_scaling; int acfilter_order; int num_channels; int** acfilter_prevvalues; int** channel_residues; } ;
typedef TYPE_1__ WmallDecodeCtx ;



__attribute__((used)) static void FUNC_0(WmallDecodeCtx *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    int16_t *VAR_6 = VAR_0->acfilter_coeffs;
    int VAR_7 = VAR_0->acfilter_scaling;
    int VAR_8 = VAR_0->acfilter_order;

    for (VAR_2 = 0; VAR_2 < VAR_0->num_channels; VAR_2++) {
        int *VAR_9 = VAR_0->acfilter_prevvalues[VAR_2];
        for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
            VAR_3 = 0;
            for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
                if (VAR_4 <= VAR_5)
                    VAR_3 += VAR_6[VAR_5] * VAR_9[VAR_5 - VAR_4];
                else
                    VAR_3 += VAR_0->channel_residues[VAR_2][VAR_4 - VAR_5 - 1] * VAR_6[VAR_5];
            }
            VAR_3 >>= VAR_7;
            VAR_0->channel_residues[VAR_2][VAR_4] += VAR_3;
        }
        for (VAR_4 = VAR_8; VAR_4 < VAR_1; VAR_4++) {
            VAR_3 = 0;
            for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
                VAR_3 += (uint32_t)VAR_0->channel_residues[VAR_2][VAR_4 - VAR_5 - 1] * VAR_6[VAR_5];
            VAR_3 >>= VAR_7;
            VAR_0->channel_residues[VAR_2][VAR_4] += VAR_3;
        }
        for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++)
            VAR_9[VAR_5] = VAR_0->channel_residues[VAR_2][VAR_1 - VAR_5 - 1];
    }
}
