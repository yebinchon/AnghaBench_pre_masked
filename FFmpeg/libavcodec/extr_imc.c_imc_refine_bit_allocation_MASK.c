
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int* sumLenArr; int* skipFlagRaw; int* flcoeffs6; int* flcoeffs1; int* skipFlagCount; scalar_t__* skipFlagBits; scalar_t__* CWlengthT; scalar_t__* skipFlags; scalar_t__* bandFlagsBuf; } ;
struct TYPE_9__ {int* sqrt_tab; } ;
typedef TYPE_1__ IMCContext ;
typedef TYPE_2__ IMCChannel ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(IMCContext *VAR_2, IMCChannel *VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6, VAR_7;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_3->sumLenArr[VAR_4] = 0;
        VAR_3->skipFlagRaw[VAR_4] = 0;
        for (VAR_5 = VAR_1[VAR_4]; VAR_5 < VAR_1[VAR_4 + 1]; VAR_5++)
            VAR_3->sumLenArr[VAR_4] += VAR_3->CWlengthT[VAR_5];
        if (VAR_3->bandFlagsBuf[VAR_4])
            if (((int)((VAR_1[VAR_4 + 1] - VAR_1[VAR_4]) * 1.5) > VAR_3->sumLenArr[VAR_4]) && (VAR_3->sumLenArr[VAR_4] > 0))
                VAR_3->skipFlagRaw[VAR_4] = 1;
    }

    FUNC_1(VAR_2, VAR_3);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        VAR_3->flcoeffs6[VAR_4] = VAR_3->flcoeffs1[VAR_4];

        if (VAR_3->bandFlagsBuf[VAR_4] && (VAR_1[VAR_4 + 1] - VAR_1[VAR_4]) != VAR_3->skipFlagCount[VAR_4]) {
            VAR_3->flcoeffs6[VAR_4] *= VAR_2->sqrt_tab[ VAR_1[VAR_4 + 1] - VAR_1[VAR_4]] /
                                   VAR_2->sqrt_tab[(VAR_1[VAR_4 + 1] - VAR_1[VAR_4] - VAR_3->skipFlagCount[VAR_4])];
        }
    }


    VAR_6 = VAR_7 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_3->bandFlagsBuf[VAR_4]) {
            for (VAR_5 = VAR_1[VAR_4]; VAR_5 < VAR_1[VAR_4 + 1]; VAR_5++) {
                if (VAR_3->skipFlags[VAR_5]) {
                    VAR_7 += VAR_3->CWlengthT[VAR_5];
                    VAR_3->CWlengthT[VAR_5] = 0;
                }
            }
            VAR_6 += VAR_3->skipFlagBits[VAR_4];
            VAR_7 -= VAR_3->skipFlagBits[VAR_4];
        }
    }
    FUNC_0(VAR_2, VAR_3, VAR_7);
}
