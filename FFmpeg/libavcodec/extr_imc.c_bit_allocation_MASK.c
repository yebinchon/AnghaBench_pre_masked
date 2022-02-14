
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float* flcoeffs1; scalar_t__* flcoeffs5; float* flcoeffs4; float* flcoeffs3; int* bandWidthT; int* bitsBandT; int* CWlengthT; } ;
struct TYPE_5__ {int avctx; } ;
typedef TYPE_1__ IMCContext ;
typedef TYPE_2__ IMCChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (float,float) ;
 int FUNC_1 (double,int ,int) ;
 int FUNC_2 (int ,int ,char*,scalar_t__) ;
 int* VAR_3 ;
 float FUNC_3 (scalar_t__) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_4(IMCContext *VAR_5, IMCChannel *VAR_6,
                          int VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    const float VAR_12 = -1.e20;
    float VAR_13 = 0.0;
    int VAR_14;
    int VAR_15 = 0;
    int VAR_16 = 1;
    float VAR_17 = 0.0;
    int VAR_18 = 0;
    int VAR_19 = 0;
    int VAR_20, VAR_21;
    float VAR_22 = 1.e10;
    int VAR_23 = 0;
    float VAR_24[32];
    int VAR_25;
    int VAR_26 = 0;

    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
        VAR_13 = FUNC_0(VAR_13, VAR_6->flcoeffs1[VAR_10]);

    for (VAR_10 = 0; VAR_10 < VAR_2 - 1; VAR_10++) {
        if (VAR_6->flcoeffs5[VAR_10] <= 0) {
            FUNC_2(VAR_5->avctx, VAR_1, "flcoeffs5 %f invalid\n", VAR_6->flcoeffs5[VAR_10]);
            return VAR_0;
        }
        VAR_6->flcoeffs4[VAR_10] = VAR_6->flcoeffs3[VAR_10] - FUNC_3(VAR_6->flcoeffs5[VAR_10]);
    }
    VAR_6->flcoeffs4[VAR_2 - 1] = VAR_12;

    VAR_13 = VAR_13 * 0.25;

    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        VAR_14 = -1;
        if ((VAR_3[VAR_10 + 1] - VAR_3[VAR_10]) == VAR_6->bandWidthT[VAR_10])
            VAR_14 = 0;

        if ((VAR_3[VAR_10 + 1] - VAR_3[VAR_10]) > VAR_6->bandWidthT[VAR_10])
            VAR_14 = 1;

        if (((VAR_3[VAR_10 + 1] - VAR_3[VAR_10]) / 2) >= VAR_6->bandWidthT[VAR_10])
            VAR_14 = 2;

        if (VAR_14 == -1)
            return VAR_0;

        VAR_6->flcoeffs4[VAR_10] += VAR_4[(VAR_14 * 2 + (VAR_6->flcoeffs1[VAR_10] < VAR_13)) * 2 + VAR_9];
    }

    if (VAR_7 & 0x2) {
        VAR_6->flcoeffs4[0] = VAR_12;
        VAR_6->flcoeffs4[1] = VAR_12;
        VAR_6->flcoeffs4[2] = VAR_12;
        VAR_6->flcoeffs4[3] = VAR_12;
    }

    for (VAR_10 = (VAR_7 & 0x2) ? 4 : 0; VAR_10 < VAR_2 - 1; VAR_10++) {
        VAR_18 += VAR_6->bandWidthT[VAR_10];
        VAR_17 += VAR_6->bandWidthT[VAR_10] * VAR_6->flcoeffs4[VAR_10];
    }

    if (!VAR_18)
        return VAR_0;

    VAR_6->bandWidthT[VAR_2 - 1] = 0;
    VAR_17 = (VAR_17 * 0.5 - VAR_8) / VAR_18;


    for (VAR_10 = 0; VAR_10 < VAR_2 / 2; VAR_10++) {
        VAR_20 = VAR_19 - VAR_8;
        if ((VAR_20 >= -8) && (VAR_20 <= 8))
            break;

        VAR_19 = 0;
        VAR_18 = 0;

        for (VAR_11 = (VAR_7 & 0x2) ? 4 : 0; VAR_11 < VAR_2; VAR_11++) {
            VAR_21 = FUNC_1(((VAR_6->flcoeffs4[VAR_11] * 0.5) - VAR_17 + 0.5), 0, 6);

            VAR_6->bitsBandT[VAR_11] = VAR_21;
            VAR_19 += VAR_6->bandWidthT[VAR_11] * VAR_21;

            if (VAR_21 > 0)
                VAR_18 += VAR_6->bandWidthT[VAR_11];
        }

        VAR_25 = VAR_16;
        VAR_16 = 1;
        if (VAR_8 < VAR_19)
            VAR_16 = -1;
        if (VAR_10 == 0)
            VAR_25 = VAR_16;
        if (VAR_25 != VAR_16)
            VAR_15++;

        VAR_17 = (float)(VAR_19 - VAR_8) / ((VAR_15 + 1) * VAR_18) + VAR_17;
    }

    for (VAR_10 = (VAR_7 & 0x2) ? 4 : 0; VAR_10 < VAR_2; VAR_10++) {
        for (VAR_11 = VAR_3[VAR_10]; VAR_11 < VAR_3[VAR_10 + 1]; VAR_11++)
            VAR_6->CWlengthT[VAR_11] = VAR_6->bitsBandT[VAR_10];
    }

    if (VAR_8 > VAR_19) {
        for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
            VAR_24[VAR_10] = (VAR_6->bitsBandT[VAR_10] == 6) ? -1.e20
                                              : (VAR_6->bitsBandT[VAR_10] * -2 + VAR_6->flcoeffs4[VAR_10] - 0.415);
        }

        VAR_13 = 0.0;

        do {
            if (VAR_13 <= -1.e20)
                break;

            VAR_26 = 0;
            VAR_13 = -1.e20;

            for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
                if (VAR_24[VAR_10] > VAR_13) {
                    VAR_13 = VAR_24[VAR_10];
                    VAR_26 = VAR_10;
                }
            }

            if (VAR_13 > -1.e20) {
                VAR_24[VAR_26] -= 2.0;
                if (++VAR_6->bitsBandT[VAR_26] == 6)
                    VAR_24[VAR_26] = -1.e20;

                for (VAR_11 = VAR_3[VAR_26]; VAR_11 < VAR_3[VAR_26 + 1] && (VAR_8 > VAR_19); VAR_11++) {
                    VAR_6->CWlengthT[VAR_11]++;
                    VAR_19++;
                }
            }
        } while (VAR_8 > VAR_19);
    }
    if (VAR_8 < VAR_19) {
        for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
            VAR_24[VAR_10] = VAR_6->bitsBandT[VAR_10] ? (VAR_6->bitsBandT[VAR_10] * -2 + VAR_6->flcoeffs4[VAR_10] + 1.585)
                                       : 1.e20;
        }
        if (VAR_7 & 0x2) {
            VAR_24[0] = 1.e20;
            VAR_24[1] = 1.e20;
            VAR_24[2] = 1.e20;
            VAR_24[3] = 1.e20;
        }
        while (VAR_8 < VAR_19) {
            VAR_22 = 1.e10;
            VAR_23 = 0;
            for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
                if (VAR_24[VAR_10] < VAR_22) {
                    VAR_22 = VAR_24[VAR_10];
                    VAR_23 = VAR_10;
                }
            }


            VAR_24[VAR_23] = VAR_22 + 2.0;

            if (!--VAR_6->bitsBandT[VAR_23])
                VAR_24[VAR_23] = 1.e20;

            for (VAR_11 = VAR_3[VAR_23]; VAR_11 < VAR_3[VAR_23+1] && (VAR_8 < VAR_19); VAR_11++) {
                if (VAR_6->CWlengthT[VAR_11] > 0) {
                    VAR_6->CWlengthT[VAR_11]--;
                    VAR_19--;
                }
            }
        }
    }
    return 0;
}
