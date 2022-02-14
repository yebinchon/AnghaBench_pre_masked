
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_3__ {int bits_per_raw_sample; int* sample_buffer; int slice_rct_by_coef; int slice_rct_ry_coef; } ;
typedef TYPE_1__ FFV1Context ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(FFV1Context *VAR_1, const uint8_t *VAR_2[3], const int VAR_3[3], int VAR_4, int VAR_5)
{

    static const int VAR_6[15][2] = {
        {0, 0},
        {1, 1},
        {2, 2},
        {0, 2},
        {2, 0},
        {4, 0},
        {0, 4},

        {0, 3},
        {3, 0},
        {3, 1},
        {1, 3},
        {1, 2},
        {2, 1},
        {0, 1},
        {1, 0},
    };

    int VAR_7[15] = {0};
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int16_t *VAR_13[3];
    int VAR_14 = VAR_1->bits_per_raw_sample <= 8;

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        int VAR_15=0, VAR_16=0, VAR_17=0;
        for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
            VAR_13[VAR_11] = VAR_1->sample_buffer + VAR_11*VAR_4;

        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            int VAR_18, VAR_19, VAR_20;
            int VAR_21, VAR_22, VAR_23;
            if (VAR_14) {
                unsigned VAR_24 = *((const uint32_t*)(VAR_2[0] + VAR_8*4 + VAR_3[0]*VAR_9));
                VAR_18 = VAR_24 & 0xFF;
                VAR_19 = (VAR_24 >> 8) & 0xFF;
                VAR_20 = (VAR_24 >> 16) & 0xFF;
            } else {
                VAR_18 = *((const uint16_t*)(VAR_2[0] + VAR_8*2 + VAR_3[0]*VAR_9));
                VAR_19 = *((const uint16_t*)(VAR_2[1] + VAR_8*2 + VAR_3[1]*VAR_9));
                VAR_20 = *((const uint16_t*)(VAR_2[2] + VAR_8*2 + VAR_3[2]*VAR_9));
            }

            VAR_23 = VAR_20 - VAR_15;
            VAR_22 = VAR_19 - VAR_16;
            VAR_21 = VAR_18 - VAR_17;
            if (VAR_8 && VAR_9) {
                int VAR_25 = VAR_22 - VAR_13[0][VAR_8];
                int VAR_26 = VAR_21 - VAR_13[1][VAR_8];
                int VAR_27 = VAR_23 - VAR_13[2][VAR_8];

                VAR_27 -= VAR_25;
                VAR_26 -= VAR_25;

                for (VAR_10 = 0; VAR_10<15; VAR_10++) {
                    VAR_7[VAR_10] += FUNC_0(VAR_25 + ((VAR_27*VAR_6[VAR_10][0] + VAR_26*VAR_6[VAR_10][1])>>2));
                }

            }
            VAR_13[0][VAR_8] = VAR_22;
            VAR_13[1][VAR_8] = VAR_21;
            VAR_13[2][VAR_8] = VAR_23;

            VAR_15 = VAR_20;
            VAR_16 = VAR_19;
            VAR_17 = VAR_18;
        }
    }

    VAR_12 = 0;
    for (VAR_10=1; VAR_10<15; VAR_10++) {
        if (VAR_7[VAR_10] < VAR_7[VAR_12])
            VAR_12 = VAR_10;
    }

    VAR_1->slice_rct_by_coef = VAR_6[VAR_12][1];
    VAR_1->slice_rct_ry_coef = VAR_6[VAR_12][0];
}
