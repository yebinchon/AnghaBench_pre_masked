
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int*** dequant8_coeff; int*** dequant8_buffer; int** scaling_matrix8; } ;
struct TYPE_5__ {int bit_depth_luma; } ;
typedef TYPE_1__ SPS ;
typedef TYPE_2__ PPS ;


 scalar_t__** VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(PPS *VAR_4, const SPS *VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;
    const int VAR_10 = 51 + 6 * (VAR_5->bit_depth_luma - 8);

    for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
        VAR_4->dequant8_coeff[VAR_6] = VAR_4->dequant8_buffer[VAR_6];
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            if (!FUNC_0(VAR_4->scaling_matrix8[VAR_7], VAR_4->scaling_matrix8[VAR_6],
                        64 * sizeof(uint8_t))) {
                VAR_4->dequant8_coeff[VAR_6] = VAR_4->dequant8_buffer[VAR_7];
                break;
            }
        if (VAR_7 < VAR_6)
            continue;

        for (VAR_8 = 0; VAR_8 < VAR_10 + 1; VAR_8++) {
            int VAR_11 = VAR_2[VAR_8];
            int VAR_12 = VAR_3[VAR_8];
            for (VAR_9 = 0; VAR_9 < 64; VAR_9++)
                VAR_4->dequant8_coeff[VAR_6][VAR_8][(VAR_9 >> 3) | ((VAR_9 & 7) << 3)] =
                    ((uint32_t)VAR_0[VAR_12][VAR_1[((VAR_9 >> 1) & 12) | (VAR_9 & 3)]] *
                     VAR_4->scaling_matrix8[VAR_6][VAR_9]) << VAR_11;
        }
    }
}
