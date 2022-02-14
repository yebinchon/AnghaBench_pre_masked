
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,float const) ;
 int VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (int*) ;
 void* FUNC_5 (float const,short) ;
 int FUNC_6 (short*,short,int) ;

void FUNC_7(const float *VAR_5, int *VAR_6)
{
    int VAR_7, VAR_8;
    short VAR_9[128];
    int VAR_10 = 0, VAR_11, VAR_12, VAR_13;
    short VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21;
    int VAR_22;

    VAR_16 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_16 = FUNC_1(VAR_16, VAR_5[VAR_7]);
    }
    VAR_14 = -16;
    VAR_14 += FUNC_4(&VAR_16);

    VAR_17 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_9[VAR_7] = FUNC_5(VAR_5[VAR_7], VAR_14);
        VAR_9[VAR_7] = (3*VAR_9[VAR_7])>>2;
        VAR_17 += VAR_9[VAR_7];
    }

    VAR_14 += 11;
    VAR_15 = VAR_14;
    VAR_17 -= VAR_3 << VAR_14;
    VAR_14 += FUNC_4(&VAR_17);
    VAR_21 = (VAR_0 * (VAR_17>>16)) >> 15;
    VAR_14 = VAR_15 - (VAR_1+VAR_14-31);

    VAR_21 = FUNC_5(VAR_21, VAR_14);

    VAR_10 = FUNC_6(VAR_9, VAR_15, VAR_21);

    if (VAR_10 != VAR_3) {
        VAR_22 = VAR_10 - VAR_3;

        for(VAR_14=0; FUNC_0(VAR_22) <= 16383; VAR_14++)
            VAR_22 *= 2;

        VAR_22 = (VAR_22 * VAR_0) >> 15;
        VAR_14 = VAR_15-(VAR_1+VAR_14-15);

        VAR_22 = FUNC_5(VAR_22, VAR_14);

        for (VAR_8 = 1; VAR_8 < 20; VAR_8++) {
            VAR_18 = VAR_21;
            VAR_21 += VAR_22;
            VAR_11 = VAR_10;

            VAR_10 = FUNC_6(VAR_9, VAR_15, VAR_21);

            if ((VAR_10-VAR_3) * (VAR_11-VAR_3) <= 0)
                break;
        }

        if (VAR_10 > VAR_3) {
            VAR_20 = VAR_21;
            VAR_21 = VAR_18;
            VAR_13=VAR_10;
            VAR_12=VAR_11;
        } else {
            VAR_20 = VAR_18;
            VAR_13=VAR_11;
            VAR_12=VAR_10;
        }

        while (VAR_10 != VAR_3 && VAR_8 <= 19) {
            VAR_22 = (VAR_20+VAR_21)>>1;
            VAR_10 = FUNC_6(VAR_9, VAR_15, VAR_22);
            if (VAR_10 > VAR_3) {
                VAR_20=VAR_22;
                VAR_13=VAR_10;
            } else {
                VAR_21 = VAR_22;
                VAR_12=VAR_10;
            }
            VAR_8++;
        }

        if (FUNC_2(VAR_13-VAR_3) >=
            FUNC_2(VAR_12-VAR_3)) {
            VAR_10 = VAR_12;
        } else {
            VAR_21 = VAR_20;
            VAR_10 = VAR_13;
        }
    }

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_19 = VAR_9[VAR_7]-VAR_21;
        VAR_19 = ((VAR_19>>(VAR_15-1))+1)>>1;
        VAR_6[VAR_7] = FUNC_3(VAR_19, 0, VAR_2);
    }

    if (VAR_10 > VAR_3) {
        VAR_19 = VAR_7 = 0;
        while (VAR_19 < VAR_3) {
            VAR_19 += VAR_6[VAR_7];
            VAR_7++;
        }

        VAR_6[VAR_7-1] -= VAR_19 - VAR_3;
        for(; VAR_7 < VAR_4; VAR_7++)
            VAR_6[VAR_7] = 0;
    }
}
