
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,unsigned int) ;

__attribute__((used)) static void FUNC_3(int16_t *VAR_0, int16_t *VAR_1, unsigned VAR_2, int64_t VAR_3)
{
    int16_t *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    int VAR_10, VAR_11, VAR_12;
    int64_t VAR_13;

    VAR_10 = VAR_2 >> 1;
    VAR_4 = VAR_1 + 4;
    VAR_5 = &VAR_4[VAR_10 + 8];

    FUNC_2(VAR_4, VAR_0, VAR_2);
    FUNC_2(VAR_5, VAR_0 + VAR_10, VAR_2);

    VAR_6 = &VAR_4[VAR_10];
    VAR_7 = &VAR_4[VAR_10];
    VAR_8 = &VAR_5[VAR_10];
    VAR_9 = VAR_8;
    for (VAR_11 = 4, VAR_12 = 2; VAR_11; VAR_11--, VAR_12++, VAR_6--, VAR_9++, VAR_7++, VAR_8--) {
        VAR_4[VAR_11 - 5] = VAR_4[VAR_12 - 1];
        VAR_7[0] = VAR_6[-1];
        VAR_5[VAR_11 - 5] = VAR_5[VAR_12 - 2];
        VAR_9[0] = VAR_8[-2];
    }

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        VAR_13 = (int64_t) VAR_4 [VAR_11 + 1] * -FUNC_0(325392907) +
                (int64_t) VAR_4 [VAR_11 + 0] * FUNC_0(3687786320) +
                (int64_t) VAR_4 [VAR_11 - 1] * -FUNC_0(325392907) +
                (int64_t) VAR_5[VAR_11 + 0] * FUNC_0(1518500249) +
                (int64_t) VAR_5[VAR_11 - 1] * FUNC_0(1518500249);
        VAR_0[VAR_11 * 2] = FUNC_1(((VAR_13 >> 32) * VAR_3) >> 32);
    }

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        VAR_13 = (int64_t) VAR_4 [VAR_11 + 2] * -FUNC_0(65078576) +
                (int64_t) VAR_4 [VAR_11 + 1] * FUNC_0(1583578880) +
                (int64_t) VAR_4 [VAR_11 + 0] * FUNC_0(1583578880) +
                (int64_t) VAR_4 [VAR_11 - 1] * -FUNC_0(65078576) +
                (int64_t) VAR_5[VAR_11 + 1] * FUNC_0(303700064) +
                (int64_t) VAR_5[VAR_11 + 0] * -FUNC_0(3644400640) +
                (int64_t) VAR_5[VAR_11 - 1] * FUNC_0(303700064);
        VAR_0[VAR_11 * 2 + 1] = FUNC_1(((VAR_13 >> 32) * VAR_3) >> 32);
    }
}
