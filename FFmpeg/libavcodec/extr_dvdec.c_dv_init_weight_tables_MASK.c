
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int height; } ;
struct TYPE_6__ {int* idct_factor; } ;
typedef TYPE_1__ DVVideoContext ;
typedef TYPE_2__ AVDVProfile ;


 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int** VAR_6 ;

__attribute__((used)) static void FUNC_1(DVVideoContext *VAR_7, const AVDVProfile *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12;
    uint32_t *VAR_13 = &VAR_7->idct_factor[0],
             *VAR_14 = &VAR_7->idct_factor[FUNC_0(VAR_8) ? 4096 : 2816];

    if (FUNC_0(VAR_8)) {

        static const uint8_t VAR_15[16] = {
            1,
            1,
            2, 3, 4, 5, 6, 7, 8, 16, 18, 20, 22, 24, 28, 52
        };
        const uint16_t *VAR_16, *VAR_17;

        if (VAR_8->height == 720) {
            VAR_16 = &VAR_4[0];
            VAR_17 = &VAR_3[0];
        } else {
            VAR_16 = &VAR_1[0];
            VAR_17 = &VAR_0[0];
        }
        for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
            for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
                for (VAR_10 = 0; VAR_10 < 64; VAR_10++) {
                    *VAR_13++ = (VAR_15[VAR_12] << (VAR_11 + 9)) * VAR_16[VAR_10];
                    *VAR_14++ = (VAR_15[VAR_12] << (VAR_11 + 9)) * VAR_17[VAR_10];
                }
            }
        }
    } else {
        static const uint8_t VAR_18[4] = { 6, 21, 43, 64 };
        const uint16_t *VAR_19 = &VAR_5[0];
        for (VAR_9 = 0; VAR_9 < 2; VAR_9++, VAR_19 = &VAR_2[0]) {
            for (VAR_12 = 0; VAR_12 < 22; VAR_12++) {
                for (VAR_10 = VAR_11 = 0; VAR_11 < 4; VAR_11++) {
                    for (; VAR_10 < VAR_18[VAR_11]; VAR_10++) {
                        *VAR_13 = VAR_19[VAR_10] << (VAR_6[VAR_12][VAR_11] + 1);
                        *VAR_14++ = (*VAR_13++) << 1;
                    }
                }
            }
        }
    }
}
