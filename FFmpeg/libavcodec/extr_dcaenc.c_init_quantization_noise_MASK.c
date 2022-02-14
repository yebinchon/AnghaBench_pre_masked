
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {int consumed_bits; int fullband_channels; int** peak_cb; int* band_masking_cb; int** abits; int** prediction_mode; int * quant_index_sel; int ** quantized; int ** quant; int ** scale_factor; int * bit_allocation_sel; scalar_t__ lfe_channel; scalar_t__ consumed_adpcm_bits; } ;
typedef TYPE_1__ DCAEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,scalar_t__*) ;
 scalar_t__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int,int,int *) ;
 int FUNC_2 (scalar_t__**,int ,int) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int*,int,int *) ;
 scalar_t__ FUNC_7 (scalar_t__**,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_8(DCAEncContext *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = VAR_3 | VAR_2;
    uint32_t VAR_11[VAR_1][VAR_0][7];
    uint32_t VAR_12[VAR_1][VAR_0];
    uint32_t VAR_13 = 0;

    VAR_5->consumed_bits = 132 + 333 * VAR_5->fullband_channels;
    VAR_5->consumed_bits += VAR_5->consumed_adpcm_bits;
    if (VAR_5->lfe_channel)
        VAR_5->consumed_bits += 72;


    for (VAR_8 = 0; VAR_8 < VAR_5->fullband_channels; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
            int VAR_14 = VAR_5->peak_cb[VAR_8][VAR_9] - VAR_5->band_masking_cb[VAR_9] - VAR_6;

            if (VAR_14 >= 1312) {
                VAR_5->abits[VAR_8][VAR_9] = 26;
                VAR_10 &= ~VAR_2;
            } else if (VAR_14 >= 222) {
                VAR_5->abits[VAR_8][VAR_9] = 8 + FUNC_3(VAR_14 - 222, 69000000);
                VAR_10 &= ~(VAR_3 | VAR_2);
            } else if (VAR_14 >= 0) {
                VAR_5->abits[VAR_8][VAR_9] = 2 + FUNC_3(VAR_14, 106000000);
                VAR_10 &= ~(VAR_3 | VAR_2);
            } else if (VAR_7 || VAR_14 >= -140) {
                VAR_5->abits[VAR_8][VAR_9] = 1;
                VAR_10 &= ~VAR_3;
            } else {
                VAR_5->abits[VAR_8][VAR_9] = 0;
                VAR_10 &= ~(VAR_3 | VAR_2);
            }
        }
        VAR_5->consumed_bits += FUNC_6(VAR_5->abits[VAR_8], 32,
                                                &VAR_5->bit_allocation_sel[VAR_8]);
    }




    for (VAR_8 = 0; VAR_8 < VAR_5->fullband_channels; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
            if (VAR_5->prediction_mode[VAR_8][VAR_9] == -1) {
                VAR_5->scale_factor[VAR_8][VAR_9] = FUNC_1(VAR_5, VAR_5->peak_cb[VAR_8][VAR_9],
                                                           VAR_5->abits[VAR_8][VAR_9],
                                                           &VAR_5->quant[VAR_8][VAR_9]);
            }
        }
    }
    FUNC_4(VAR_5);
    FUNC_5(VAR_5);

    FUNC_2(VAR_11, 0, VAR_1 * VAR_0 * 7 * sizeof(uint32_t));
    FUNC_2(VAR_12, 0, VAR_1 * VAR_0 * sizeof(uint32_t));
    for (VAR_8 = 0; VAR_8 < VAR_5->fullband_channels; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
            if (VAR_5->abits[VAR_8][VAR_9] && VAR_5->abits[VAR_8][VAR_9] <= VAR_0) {
                FUNC_0(VAR_5->abits[VAR_8][VAR_9],
                                                VAR_5->quantized[VAR_8][VAR_9],
                                                VAR_11[VAR_8][VAR_5->abits[VAR_8][VAR_9] - 1]);
                VAR_12[VAR_8][VAR_5->abits[VAR_8][VAR_9] - 1] += VAR_4[VAR_5->abits[VAR_8][VAR_9]];
            } else {
                VAR_13 += VAR_4[VAR_5->abits[VAR_8][VAR_9]];
            }
        }
    }

    for (VAR_8 = 0; VAR_8 < VAR_5->fullband_channels; VAR_8++) {
        VAR_13 += FUNC_7(VAR_11[VAR_8],
                                      VAR_12[VAR_8],
                                      VAR_5->quant_index_sel[VAR_8]);
    }

    VAR_5->consumed_bits += VAR_13;

    return VAR_10;
}
