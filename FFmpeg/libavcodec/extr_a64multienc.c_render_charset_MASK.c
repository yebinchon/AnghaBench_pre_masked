
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_5__ {int* mc_best_cb; int mc_pal_size; int* mc_luma_vals; scalar_t__ mc_use_5col; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ A64Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__*** VAR_3 ;
 scalar_t__*** VAR_4 ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_5, uint8_t *VAR_6,
                           uint8_t *VAR_7)
{
    A64Context *VAR_8 = VAR_5->priv_data;
    uint8_t VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15;
    uint8_t VAR_16;
    int VAR_17, VAR_18;
    int *VAR_19 = VAR_8->mc_best_cb;
    static uint8_t VAR_20[256];
    static uint8_t VAR_21[256];
    static uint8_t VAR_22[256];
    int VAR_23;
    int VAR_24;


    VAR_23 = 0;
    for (VAR_14=0; VAR_14 < 256; VAR_14++) {
        if(VAR_23 < VAR_8->mc_pal_size -1 && VAR_14 == VAR_8->mc_luma_vals[VAR_23 + 1]) {
            VAR_24 = VAR_8->mc_luma_vals[VAR_23 + 1] - VAR_8->mc_luma_vals[VAR_23];
            for(VAR_15 = 0; VAR_15 <= VAR_24; VAR_15++) {
                  VAR_22[VAR_8->mc_luma_vals[VAR_23] + VAR_15] = VAR_15 * (VAR_1 - 1) / VAR_24;
            }
            VAR_23++;
        }
        if(VAR_23 >= VAR_8->mc_pal_size - 1) VAR_22[VAR_14] = 0;
        VAR_20[VAR_14] = VAR_23;
        VAR_21[VAR_14] = FUNC_1(VAR_23 + 1, VAR_8->mc_pal_size - 1);
    }


    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        VAR_17 = 0;
        VAR_18 = 0;
        for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
            VAR_9 = 0; VAR_10 = 0;
            for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
                VAR_16 = VAR_19[VAR_13 * 4 + VAR_12];


                if (VAR_20[VAR_16] >= 3)
                    VAR_18 += VAR_16 - VAR_8->mc_luma_vals[3];
                if (VAR_20[VAR_16] < 1)
                    VAR_17 += VAR_8->mc_luma_vals[1] - VAR_16;

                VAR_9 <<= 2;

                if (VAR_2) {
                    VAR_10 <<= 2;
                    if (VAR_3[VAR_22[VAR_16]][(VAR_13 & 3) * 2 + 0][VAR_12 & 3])
                        VAR_9 |= 3-(VAR_21[VAR_16] & 3);
                    else
                        VAR_9 |= 3-(VAR_20[VAR_16] & 3);

                    if (VAR_3[VAR_22[VAR_16]][(VAR_13 & 3) * 2 + 1][VAR_12 & 3])
                        VAR_10 |= 3-(VAR_21[VAR_16] & 3);
                    else
                        VAR_10 |= 3-(VAR_20[VAR_16] & 3);
                }
                else {
                    if (VAR_4[VAR_22[VAR_16]][(VAR_13 & 3)][VAR_12 & 3])
                        VAR_9 |= 3-(VAR_21[VAR_16] & 3);
                    else
                        VAR_9 |= 3-(VAR_20[VAR_16] & 3);
                }
            }
            VAR_6[VAR_13+0x000] = VAR_9;
            if (VAR_2) VAR_6[VAR_13+0x800] = VAR_10;
        }

        if (VAR_18 > 0 && VAR_17 > 0 && VAR_8->mc_use_5col) {
            if (VAR_17 > VAR_18) {
                for (VAR_12 = 0; VAR_12 < 32; VAR_12++)
                    VAR_19[VAR_12] = FUNC_1(VAR_8->mc_luma_vals[3], VAR_19[VAR_12]);
            } else {
                for (VAR_12 = 0; VAR_12 < 32; VAR_12++)
                    VAR_19[VAR_12] = FUNC_0(VAR_8->mc_luma_vals[1], VAR_19[VAR_12]);
            }
            VAR_11--;

        } else {

            VAR_19 += 32;
            VAR_6 += 8;


            VAR_7[VAR_11] = (VAR_18 > 0);
        }
    }
}
