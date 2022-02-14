
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* bitsBandT; int* flcoeffs4; int* CWlengthT; int * skipFlags; } ;
typedef int IMCContext ;
typedef TYPE_1__ IMCChannel ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(IMCContext *VAR_2, IMCChannel *VAR_3,
                                      int VAR_4)
{
    float VAR_5[32];
    int VAR_6 = 0;
    int VAR_7, VAR_8;
    float VAR_9 = 0;
    int VAR_10 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        VAR_5[VAR_7] = (VAR_3->bitsBandT[VAR_7] == 6) ? -1.e20
                                          : (VAR_3->bitsBandT[VAR_7] * -2 + VAR_3->flcoeffs4[VAR_7] - 0.415);
    }

    while (VAR_6 < VAR_4) {
        if (VAR_9 <= -1.e20)
            break;

        VAR_9 = -1.e20;

        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            if (VAR_5[VAR_7] > VAR_9) {
                VAR_9 = VAR_5[VAR_7];
                VAR_10 = VAR_7;
            }
        }

        if (VAR_9 > -1.e20) {
            VAR_5[VAR_10] -= 2.0;
            if (++(VAR_3->bitsBandT[VAR_10]) == 6)
                VAR_5[VAR_10] = -1.e20;

            for (VAR_8 = VAR_1[VAR_10]; VAR_8 < VAR_1[VAR_10+1] && (VAR_6 < VAR_4); VAR_8++) {
                if (!VAR_3->skipFlags[VAR_8] && (VAR_3->CWlengthT[VAR_8] < 6)) {
                    VAR_3->CWlengthT[VAR_8]++;
                    VAR_6++;
                }
            }
        }
    }
}
