
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_3__ {int* block_last_index; scalar_t__ mb_intra; } ;
typedef int PutBitContext ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int* VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static inline void FUNC_3(MpegEncContext *VAR_4,
                                      int16_t *VAR_5, int VAR_6, int VAR_7,
                                      uint8_t *VAR_8, PutBitContext *VAR_9,
                                      PutBitContext *VAR_10)
{
    int VAR_11, VAR_12;
    uint32_t *VAR_13;
    uint8_t *VAR_14;
    const int VAR_15 = VAR_4->block_last_index[VAR_6];

    if (VAR_4->mb_intra) {

        FUNC_1(VAR_9, VAR_7, VAR_6);
        if (VAR_15 < 1)
            return;
        VAR_11 = 1;
        VAR_13 = VAR_2;
        VAR_14 = VAR_3;
    } else {
        if (VAR_15 < 0)
            return;
        VAR_11 = 0;
        VAR_13 = VAR_0;
        VAR_14 = VAR_1;
    }


    VAR_12 = VAR_11 - 1;
    for (; VAR_11 < VAR_15; VAR_11++) {
        int VAR_16 = VAR_5[VAR_8[VAR_11]];
        if (VAR_16) {
            int VAR_17 = VAR_11 - VAR_12 - 1;
            VAR_16 += 64;
            if ((VAR_16 & (~127)) == 0) {
                const int VAR_18 = FUNC_0(0, VAR_17, VAR_16);
                FUNC_2(VAR_10, VAR_14[VAR_18], VAR_13[VAR_18]);
            } else {
                FUNC_2(VAR_10,
                         7 + 2 + 1 + 6 + 1 + 12 + 1,
                         (3 << 23) + (3 << 21) + (0 << 20) + (VAR_17 << 14) +
                         (1 << 13) + (((VAR_16 - 64) & 0xfff) << 1) + 1);
            }
            VAR_12 = VAR_11;
        }
    }
                               {
        int VAR_19 = VAR_5[VAR_8[VAR_11]];
        int VAR_20 = VAR_11 - VAR_12 - 1;
        VAR_19 += 64;
        if ((VAR_19 & (~127)) == 0) {
            const int VAR_21 = FUNC_0(1, VAR_20, VAR_19);
            FUNC_2(VAR_10, VAR_14[VAR_21], VAR_13[VAR_21]);
        } else {
            FUNC_2(VAR_10,
                     7 + 2 + 1 + 6 + 1 + 12 + 1,
                     (3 << 23) + (3 << 21) + (1 << 20) + (VAR_20 << 14) +
                     (1 << 13) + (((VAR_19 - 64) & 0xfff) << 1) + 1);
        }
    }
}
