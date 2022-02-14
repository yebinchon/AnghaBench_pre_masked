
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int int16_t ;
struct TYPE_3__ {int* block_last_index; scalar_t__ mb_intra; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int,int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static int FUNC_2(MpegEncContext *VAR_2,
                                  int16_t *VAR_3, int VAR_4,
                                  int VAR_5, uint8_t *VAR_6)
{
    int VAR_7, VAR_8;
    uint8_t *VAR_9;
    const int VAR_10 = VAR_2->block_last_index[VAR_4];
    int VAR_11 = 0;

    if (VAR_2->mb_intra) {

        VAR_11 += FUNC_1(VAR_5, VAR_4);
        if (VAR_10 < 1)
            return VAR_11;
        VAR_7 = 1;
        VAR_9 = VAR_1;
    } else {
        if (VAR_10 < 0)
            return 0;
        VAR_7 = 0;
        VAR_9 = VAR_0;
    }


    VAR_8 = VAR_7 - 1;
    for (; VAR_7 < VAR_10; VAR_7++) {
        int VAR_12 = VAR_3[VAR_6[VAR_7]];
        if (VAR_12) {
            int VAR_13 = VAR_7 - VAR_8 - 1;
            VAR_12 += 64;
            if ((VAR_12 & (~127)) == 0) {
                const int VAR_14 = FUNC_0(0, VAR_13, VAR_12);
                VAR_11 += VAR_9[VAR_14];
            } else {
                VAR_11 += 7 + 2 + 1 + 6 + 1 + 12 + 1;
            }
            VAR_8 = VAR_7;
        }
    }
                               {
        int VAR_15 = VAR_3[VAR_6[VAR_7]];
        int VAR_16 = VAR_7 - VAR_8 - 1;
        VAR_15 += 64;
        if ((VAR_15 & (~127)) == 0) {
            const int VAR_17 = FUNC_0(1, VAR_16, VAR_15);
            VAR_11 += VAR_9[VAR_17];
        } else {
            VAR_11 += 7 + 2 + 1 + 6 + 1 + 12 + 1;
        }
    }

    return VAR_11;
}
