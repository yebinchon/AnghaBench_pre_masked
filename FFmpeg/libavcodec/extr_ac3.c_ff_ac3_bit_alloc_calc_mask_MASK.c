
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int slow_gain; int fast_decay; int slow_decay; int cpl_fast_leak; int cpl_slow_leak; int db_per_bit; int sr_shift; size_t sr_code; } ;
typedef TYPE_1__ AC3BitAllocParameters ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int* VAR_4 ;
 int** VAR_5 ;

int FUNC_4(AC3BitAllocParameters *VAR_6, int16_t *VAR_7,
                               int VAR_8, int VAR_9, int VAR_10, int VAR_11,
                               int VAR_12, int VAR_13, uint8_t *VAR_14,
                               uint8_t *VAR_15, uint8_t *VAR_16,
                               int16_t *VAR_17)
{
    int16_t VAR_18[VAR_0];
    int VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;
    int VAR_24, VAR_25, VAR_26;

    if (VAR_9 <= 0)
        return VAR_1;


    VAR_20 = VAR_4[VAR_8];
    VAR_21 = VAR_4[VAR_9-1] + 1;

    if (VAR_20 == 0) {
        VAR_24 = 0;
        VAR_24 = FUNC_3(VAR_24, VAR_7[0], VAR_7[1], 384);
        VAR_18[0] = VAR_7[0] - VAR_10 - VAR_24;
        VAR_24 = FUNC_3(VAR_24, VAR_7[1], VAR_7[2], 384);
        VAR_18[1] = VAR_7[1] - VAR_10 - VAR_24;
        VAR_22 = 7;
        for (VAR_19 = 2; VAR_19 < 7; VAR_19++) {
            if (!(VAR_11 && VAR_19 == 6))
                VAR_24 = FUNC_3(VAR_24, VAR_7[VAR_19], VAR_7[VAR_19+1], 384);
            VAR_25 = VAR_7[VAR_19] - VAR_10;
            VAR_26 = VAR_7[VAR_19] - VAR_6->slow_gain;
            VAR_18[VAR_19] = VAR_25 - VAR_24;
            if (!(VAR_11 && VAR_19 == 6)) {
                if (VAR_7[VAR_19] <= VAR_7[VAR_19+1]) {
                    VAR_22 = VAR_19 + 1;
                    break;
                }
            }
        }

        VAR_23 = FUNC_1(VAR_21, 22);
        for (VAR_19 = VAR_22; VAR_19 < VAR_23; VAR_19++) {
            if (!(VAR_11 && VAR_19 == 6))
                VAR_24 = FUNC_2(VAR_24, VAR_7[VAR_19], VAR_7[VAR_19+1], VAR_19);
            VAR_25 = FUNC_0(VAR_25 - VAR_6->fast_decay, VAR_7[VAR_19] - VAR_10);
            VAR_26 = FUNC_0(VAR_26 - VAR_6->slow_decay, VAR_7[VAR_19] - VAR_6->slow_gain);
            VAR_18[VAR_19] = FUNC_0(VAR_25 - VAR_24, VAR_26);
        }
        VAR_22 = 22;
    } else {

        VAR_22 = VAR_20;
        VAR_25 = (VAR_6->cpl_fast_leak << 8) + 768;
        VAR_26 = (VAR_6->cpl_slow_leak << 8) + 768;
    }

    for (VAR_19 = VAR_22; VAR_19 < VAR_21; VAR_19++) {
        VAR_25 = FUNC_0(VAR_25 - VAR_6->fast_decay, VAR_7[VAR_19] - VAR_10);
        VAR_26 = FUNC_0(VAR_26 - VAR_6->slow_decay, VAR_7[VAR_19] - VAR_6->slow_gain);
        VAR_18[VAR_19] = FUNC_0(VAR_25, VAR_26);
    }



    for (VAR_19 = VAR_20; VAR_19 < VAR_21; VAR_19++) {
        int VAR_27 = VAR_6->db_per_bit - VAR_7[VAR_19];
        if (VAR_27 > 0) {
            VAR_18[VAR_19] += VAR_27 >> 2;
        }
        VAR_17[VAR_19] = FUNC_0(VAR_5[VAR_19 >> VAR_6->sr_shift][VAR_6->sr_code], VAR_18[VAR_19]);
    }



    if (VAR_12 == VAR_3 || VAR_12 == VAR_2) {
        int VAR_28, VAR_29, VAR_30;
        if (VAR_13 > 8)
            return -1;
        VAR_19 = VAR_20;
        for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
            VAR_19 += VAR_14[VAR_29];
            if (VAR_19 >= VAR_0 || VAR_15[VAR_29] > VAR_0-VAR_19)
                return -1;
            if (VAR_16[VAR_29] >= 4) {
                VAR_30 = (VAR_16[VAR_29] - 3) * 128;
            } else {
                VAR_30 = (VAR_16[VAR_29] - 4) * 128;
            }
            for (VAR_28 = 0; VAR_28 < VAR_15[VAR_29]; VAR_28++) {
                VAR_17[VAR_19++] += VAR_30;
            }
        }
    }
    return 0;
}
