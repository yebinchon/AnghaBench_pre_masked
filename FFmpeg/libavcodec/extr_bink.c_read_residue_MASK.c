
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16_t ;
typedef int GetBitContext ;


 size_t* VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_1, int16_t VAR_2[64], int VAR_3)
{
    int VAR_4[128];
    int VAR_5[128];
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11 = 64, VAR_12 = 64, VAR_13;
    int VAR_14[64];
    int VAR_15 = 0;

    VAR_4[VAR_12] = 4; VAR_5[VAR_12++] = 0;
    VAR_4[VAR_12] = 24; VAR_5[VAR_12++] = 0;
    VAR_4[VAR_12] = 44; VAR_5[VAR_12++] = 0;
    VAR_4[VAR_12] = 0; VAR_5[VAR_12++] = 2;

    for (VAR_8 = 1 << FUNC_0(VAR_1, 3); VAR_8; VAR_8 >>= 1) {
        for (VAR_6 = 0; VAR_6 < VAR_15; VAR_6++) {
            if (!FUNC_1(VAR_1))
                continue;
            if (VAR_2[VAR_14[VAR_6]] < 0)
                VAR_2[VAR_14[VAR_6]] -= VAR_8;
            else
                VAR_2[VAR_14[VAR_6]] += VAR_8;
            VAR_3--;
            if (VAR_3 < 0)
                return 0;
        }
        VAR_13 = VAR_11;
        while (VAR_13 < VAR_12) {
            if (!(VAR_4[VAR_13] | VAR_5[VAR_13]) || !FUNC_1(VAR_1)) {
                VAR_13++;
                continue;
            }
            VAR_9 = VAR_4[VAR_13];
            VAR_10 = VAR_5[VAR_13];
            switch (VAR_10) {
            case 0:
                VAR_4[VAR_13] = VAR_9 + 4;
                VAR_5[VAR_13] = 1;
            case 2:
                if (VAR_10 == 2) {
                    VAR_4[VAR_13] = 0;
                    VAR_5[VAR_13++] = 0;
                }
                for (VAR_6 = 0; VAR_6 < 4; VAR_6++, VAR_9++) {
                    if (FUNC_1(VAR_1)) {
                        VAR_4[--VAR_11] = VAR_9;
                        VAR_5[ VAR_11] = 3;
                    } else {
                        VAR_14[VAR_15++] = VAR_0[VAR_9];
                        VAR_7 = -FUNC_1(VAR_1);
                        VAR_2[VAR_0[VAR_9]] = (VAR_8 ^ VAR_7) - VAR_7;
                        VAR_3--;
                        if (VAR_3 < 0)
                            return 0;
                    }
                }
                break;
            case 1:
                VAR_5[VAR_13] = 2;
                for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
                    VAR_9 += 4;
                    VAR_4[VAR_12] = VAR_9;
                    VAR_5[VAR_12++] = 2;
                }
                break;
            case 3:
                VAR_14[VAR_15++] = VAR_0[VAR_9];
                VAR_7 = -FUNC_1(VAR_1);
                VAR_2[VAR_0[VAR_9]] = (VAR_8 ^ VAR_7) - VAR_7;
                VAR_4[VAR_13] = 0;
                VAR_5[VAR_13++] = 0;
                VAR_3--;
                if (VAR_3 < 0)
                    return 0;
                break;
            }
        }
    }

    return 0;
}
