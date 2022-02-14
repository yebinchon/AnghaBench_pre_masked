
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* CWdecoded; int* CWlengthT; int* codewords; float const* flcoeffs6; int* bandFlagsBuf; scalar_t__* skipFlags; } ;
typedef int IMCContext ;
typedef TYPE_1__ IMCChannel ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 float** VAR_3 ;
 float** VAR_4 ;

__attribute__((used)) static int FUNC_0(IMCContext *VAR_5, IMCChannel *VAR_6,
                               int VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12;
    const float *VAR_13;

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        for (VAR_9 = VAR_2[VAR_8]; VAR_9 < VAR_2[VAR_8 + 1]; VAR_9++) {
            VAR_6->CWdecoded[VAR_9] = 0;
            VAR_11 = VAR_6->CWlengthT[VAR_9];

            if (VAR_11 <= 0 || VAR_6->skipFlags[VAR_9])
                continue;

            VAR_12 = 1 << VAR_11;
            VAR_10 = VAR_12 >> 1;

            if (VAR_6->codewords[VAR_9] >= VAR_12 || VAR_6->codewords[VAR_9] < 0)
                return VAR_0;

            if (VAR_11 >= 4) {
                VAR_13 = VAR_4[(VAR_7 & 2) >> 1];
                if (VAR_6->codewords[VAR_9] >= VAR_10)
                    VAR_6->CWdecoded[VAR_9] = VAR_13[VAR_6->codewords[VAR_9] - 8] * VAR_6->flcoeffs6[VAR_8];
                else
                    VAR_6->CWdecoded[VAR_9] = -VAR_13[VAR_12 - VAR_6->codewords[VAR_9] - 8 - 1] * VAR_6->flcoeffs6[VAR_8];
            }else{
                VAR_13 = VAR_3[((VAR_7 & 2) >> 1) | (VAR_6->bandFlagsBuf[VAR_8] << 1)];
                if (VAR_6->codewords[VAR_9] >= VAR_10)
                    VAR_6->CWdecoded[VAR_9] = VAR_13[VAR_6->codewords[VAR_9] - 1] * VAR_6->flcoeffs6[VAR_8];
                else
                    VAR_6->CWdecoded[VAR_9] = -VAR_13[VAR_12 - 2 - VAR_6->codewords[VAR_9]] * VAR_6->flcoeffs6[VAR_8];
            }
        }
    }
    return 0;
}
