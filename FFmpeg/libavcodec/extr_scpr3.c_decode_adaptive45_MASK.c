
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int maxpos; int* freqs; int size; int* symbols; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*,int,int,int*,int) ;
 int FUNC_1 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_2(PixelModel3 *VAR_0, int VAR_1, uint32_t *VAR_2,
                             uint16_t *VAR_3, uint16_t *VAR_4, uint32_t *VAR_5, int VAR_6)
{
    uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = *VAR_5, VAR_12 = *VAR_5;
    int VAR_13;

    for (VAR_10 = 0; VAR_11 <= 2048; VAR_10++)
        VAR_11 <<= 1;
    VAR_9 = VAR_0->maxpos;
    VAR_1 >>= VAR_10;
    *VAR_5 = VAR_0->freqs[VAR_9];
    VAR_0->freqs[VAR_9] += (4096 - VAR_11) >> VAR_10;

    for (VAR_7 = 0, VAR_8 = 0, VAR_11 = 0; VAR_7 < VAR_0->size; VAR_7++) {
        uint32_t VAR_14 = VAR_0->symbols[VAR_7];
        uint32_t VAR_15 = VAR_11 + VAR_14 - VAR_8;
        uint32_t VAR_16 = VAR_0->freqs[VAR_7];

        if (VAR_1 < VAR_15) {
            *VAR_2 = VAR_1 - VAR_11 + VAR_8;
            *VAR_4 = VAR_1 << VAR_10;
            *VAR_3 = 1 << VAR_10;
            VAR_0->freqs[VAR_9] = *VAR_5;
            VAR_13 = FUNC_0(VAR_0, VAR_7, *VAR_2, &VAR_12, VAR_6);
            *VAR_5 = VAR_12;
            return VAR_13;
        }

        if (VAR_15 + VAR_16 > VAR_1) {
            *VAR_2 = VAR_14;
            VAR_11 += *VAR_2 - VAR_8;
            *VAR_4 = VAR_11 << VAR_10;
            *VAR_3 = VAR_16 << VAR_10;
            VAR_0->freqs[VAR_9] = *VAR_5;
            VAR_0->freqs[VAR_7] += 50;
            VAR_12 += 50;
            if ((VAR_7 != VAR_9) && (VAR_0->freqs[VAR_7] > VAR_0->freqs[VAR_9]))
                VAR_0->maxpos = VAR_7;
            if (VAR_12 + 50 > 4096)
                FUNC_1(VAR_0, &VAR_12);
            *VAR_5 = VAR_12;
            return 1;
        }

        VAR_11 += VAR_14 - VAR_8 + VAR_16;
        VAR_8 = VAR_14 + 1;
    }

    VAR_0->freqs[VAR_9] = *VAR_5;
    *VAR_2 = VAR_8 + VAR_1 - VAR_11;
    *VAR_4 = VAR_1 << VAR_10;
    *VAR_3 = 1 << VAR_10;
    VAR_13 = FUNC_0(VAR_0, VAR_7, *VAR_2, &VAR_12, VAR_6);
    *VAR_5 = VAR_12;
    return VAR_13;
}
