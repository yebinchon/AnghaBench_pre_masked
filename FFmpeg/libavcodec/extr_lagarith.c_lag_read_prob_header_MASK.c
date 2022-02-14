
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {unsigned int* prob; int scale; int avctx; } ;
typedef TYPE_1__ lag_rac ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(lag_rac *VAR_3, GetBitContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    unsigned VAR_8, VAR_9;
    unsigned VAR_10 = 0;
    unsigned VAR_11 = 0;
    int VAR_12 = 0;

    VAR_3->prob[0] = 0;
    VAR_3->prob[257] = VAR_2;

    for (VAR_5 = 1; VAR_5 < 257; VAR_5++) {
        if (FUNC_2(VAR_4, &VAR_3->prob[VAR_5]) < 0) {
            FUNC_0(VAR_3->avctx, VAR_1, "Invalid probability encountered.\n");
            return -1;
        }
        if ((uint64_t)VAR_10 + VAR_3->prob[VAR_5] > VAR_2) {
            FUNC_0(VAR_3->avctx, VAR_1, "Integer overflow encountered in cumulative probability calculation.\n");
            return -1;
        }
        VAR_10 += VAR_3->prob[VAR_5];
        if (!VAR_3->prob[VAR_5]) {
            if (FUNC_2(VAR_4, &VAR_8)) {
                FUNC_0(VAR_3->avctx, VAR_1, "Invalid probability run encountered.\n");
                return -1;
            }
            if (VAR_8 > 256 - VAR_5)
                VAR_8 = 256 - VAR_5;
            for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
                VAR_3->prob[++VAR_5] = 0;
        }else {
            VAR_12++;
        }
    }

    if (!VAR_10) {
        FUNC_0(VAR_3->avctx, VAR_1, "All probabilities are 0!\n");
        return -1;
    }

    if (VAR_12 == 1 && (FUNC_3(VAR_4, 32) & 0xFFFFFF)) {
        return VAR_0;
    }


    VAR_7 = FUNC_1(VAR_10);

    if (VAR_10 & (VAR_10 - 1)) {
        uint64_t VAR_13 = FUNC_5(VAR_10);
        for (VAR_5 = 1; VAR_5 <= 128; VAR_5++) {
            VAR_3->prob[VAR_5] = FUNC_4(VAR_3->prob[VAR_5], VAR_13);
            VAR_11 += VAR_3->prob[VAR_5];
        }
        if (VAR_11 <= 0) {
            FUNC_0(VAR_3->avctx, VAR_1, "Scaled probabilities invalid\n");
            return VAR_0;
        }
        for (; VAR_5 < 257; VAR_5++) {
            VAR_3->prob[VAR_5] = FUNC_4(VAR_3->prob[VAR_5], VAR_13);
            VAR_11 += VAR_3->prob[VAR_5];
        }

        VAR_7++;
        if (VAR_7 >= 32U)
            return VAR_0;
        VAR_9 = 1U << VAR_7;

        if (VAR_11 > VAR_9) {
            FUNC_0(VAR_3->avctx, VAR_1,
                   "Scaled probabilities are larger than target!\n");
            return -1;
        }

        VAR_11 = VAR_9 - VAR_11;

        for (VAR_5 = 1; VAR_11; VAR_5 = (VAR_5 & 0x7f) + 1) {
            if (VAR_3->prob[VAR_5]) {
                VAR_3->prob[VAR_5]++;
                VAR_11--;
            }
        }
    }

    VAR_3->scale = VAR_7;


    for (VAR_5 = 1; VAR_5 < 257; VAR_5++)
        VAR_3->prob[VAR_5] += VAR_3->prob[VAR_5 - 1];

    return 0;
}
