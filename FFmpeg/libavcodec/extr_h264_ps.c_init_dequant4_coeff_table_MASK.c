
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int*** dequant4_coeff; int*** dequant4_buffer; int** scaling_matrix4; } ;
struct TYPE_5__ {int bit_depth_luma; } ;
typedef TYPE_1__ SPS ;
typedef TYPE_2__ PPS ;


 scalar_t__** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(PPS *VAR_3, const SPS *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    const int VAR_9 = 51 + 6 * (VAR_4->bit_depth_luma - 8);
    for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
        VAR_3->dequant4_coeff[VAR_5] = VAR_3->dequant4_buffer[VAR_5];
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
            if (!FUNC_0(VAR_3->scaling_matrix4[VAR_6], VAR_3->scaling_matrix4[VAR_5],
                        16 * sizeof(uint8_t))) {
                VAR_3->dequant4_coeff[VAR_5] = VAR_3->dequant4_buffer[VAR_6];
                break;
            }
        if (VAR_6 < VAR_5)
            continue;

        for (VAR_7 = 0; VAR_7 < VAR_9 + 1; VAR_7++) {
            int VAR_10 = VAR_1[VAR_7] + 2;
            int VAR_11 = VAR_2[VAR_7];
            for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
                VAR_3->dequant4_coeff[VAR_5][VAR_7][(VAR_8 >> 2) | ((VAR_8 << 2) & 0xF)] =
                    ((uint32_t)VAR_0[VAR_11][(VAR_8 & 1) + ((VAR_8 >> 2) & 1)] *
                     VAR_3->scaling_matrix4[VAR_5][VAR_8]) << VAR_10;
        }
    }
}
