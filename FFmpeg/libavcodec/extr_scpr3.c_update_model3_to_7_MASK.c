
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int n ;
struct TYPE_5__ {int type; int* freqs; int* cnts; int size; int* symbols; int cntsum; int* freqs1; int* dectab; int member_0; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(PixelModel3 *VAR_0, uint8_t VAR_1)
{
    PixelModel3 VAR_2 = {0};
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_2.type = 7;

    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        VAR_4 = VAR_3;
        VAR_2.freqs[VAR_4] = 1;
        VAR_2.cnts[VAR_4] = 1;
    }

    for (VAR_3 = VAR_0->size, VAR_4 = (4096 - (256 - VAR_3)) / (VAR_3 + 1) | 0, VAR_5 = VAR_4 - (VAR_4 >> 1), VAR_7 = 0; VAR_7 < VAR_3;) {
        VAR_8 = VAR_7++;
        VAR_8 = VAR_0->symbols[VAR_8];
        VAR_2.freqs[VAR_8] = VAR_4;
        VAR_2.cnts[VAR_8] = VAR_5;
    }
    VAR_2.freqs[VAR_1] += VAR_4;
    VAR_2.cnts[VAR_1] += 16;
    for (VAR_4 = VAR_3 = VAR_2.cntsum = 0; 256 > VAR_4; VAR_4++) {
        VAR_5 = VAR_4;
        VAR_2.cntsum += VAR_2.cnts[VAR_5];
        VAR_2.freqs1[VAR_5] = VAR_3;
        for (VAR_7 = VAR_2.freqs[VAR_5], VAR_8 = (VAR_3 + 128 - 1) >> 7, VAR_6 = ((VAR_3 + VAR_7 - 1) >> 7) + 1; VAR_8 < VAR_6; VAR_8++) {
            VAR_2.dectab[VAR_8] = VAR_5;
        }
        VAR_3 += VAR_7;
    }

    FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));

    return 0;
}
