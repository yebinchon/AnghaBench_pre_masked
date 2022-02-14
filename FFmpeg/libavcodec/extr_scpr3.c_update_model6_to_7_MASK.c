
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int n ;
struct TYPE_5__ {int type; int length; int* freqs; int* freqs1; int* cnts; int cntsum; int* symbols; int fshift; int* dectab; int member_0; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(PixelModel3 *VAR_0)
{
    PixelModel3 VAR_1 = {0};
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    uint16_t *VAR_12, *VAR_13, *VAR_14;

    VAR_1.type = 7;

    VAR_8 = VAR_0->length;
    VAR_12 = VAR_1.freqs;
    VAR_13 = VAR_1.freqs1;
    VAR_14 = VAR_1.cnts;
    VAR_1.cntsum = VAR_0->cnts[VAR_8];
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        if (!VAR_0->cnts[VAR_9])
            continue;
        VAR_11 = VAR_0->symbols[VAR_9];
        VAR_12[VAR_11] = VAR_0->freqs[2 * VAR_9];
        VAR_13[VAR_11] = VAR_0->freqs[2 * VAR_9 + 1];
        VAR_14[VAR_11] = VAR_0->cnts[VAR_9];
    }
    VAR_2 = 1 << VAR_0->fshift;
    VAR_3 = VAR_2 - (VAR_2 >> 1);
    for (VAR_10 = 0, VAR_4 = 0; VAR_10 < 256; VAR_10++) {
        VAR_5 = VAR_12[VAR_10];
        if (!VAR_5) {
            VAR_5 = VAR_2;
            VAR_12[VAR_10] = VAR_2;
            VAR_13[VAR_10] = VAR_4;
            VAR_14[VAR_10] = VAR_3;
        }
        VAR_7 = (VAR_4 + 127) >> 7;
        VAR_6 = ((VAR_5 + VAR_4 - 1) >> 7) + 1;
        for (VAR_9 = 0; VAR_9 < VAR_6 - VAR_7; VAR_9++)
            VAR_1.dectab[VAR_7 + VAR_9] = VAR_10;
        VAR_4 += VAR_5;
    }

    FUNC_0(VAR_0, &VAR_1, sizeof(VAR_1));

    return 0;
}
