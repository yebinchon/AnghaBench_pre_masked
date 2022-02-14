
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int size; int* freqs; int* symbols; int fshift; int length; } ;
typedef TYPE_1__ PixelModel3 ;


 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(PixelModel3 *VAR_0, uint32_t VAR_1, uint32_t *VAR_2,
                            uint16_t *VAR_3, uint16_t *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    for (VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = VAR_0->size; VAR_9 < VAR_10; VAR_9++) {
        uint32_t VAR_11 = VAR_0->freqs[2 * VAR_9 + 1];

        if (VAR_11 <= VAR_1) {
            uint32_t VAR_12 = VAR_0->freqs[2 * VAR_9];

            if (VAR_11 + VAR_12 > VAR_1) {
                *VAR_2 = VAR_0->symbols[VAR_9];
                *VAR_3 = VAR_12;
                *VAR_4 = VAR_11;
                FUNC_2(VAR_0, VAR_9);
                return 1;
            }

            if (VAR_11 >= VAR_6) {
                VAR_5 = VAR_12;
                VAR_6 = VAR_11;
                VAR_7 = VAR_0->symbols[VAR_9];
            }
        }
    }

    VAR_9 = 1 << VAR_0->fshift;
    VAR_10 = VAR_8 = 0;

    if (VAR_5 > 0) {
        VAR_8 = (VAR_1 - (VAR_6 + VAR_5)) >> VAR_0->fshift;
        VAR_10 = VAR_8 + VAR_7 + 1;
        VAR_8 = VAR_6 + VAR_5 + (VAR_8 << VAR_0->fshift);
    } else {
        VAR_10 = VAR_1 >> VAR_0->fshift;
        VAR_8 = VAR_10 << VAR_0->fshift;
    }

    *VAR_3 = VAR_9;
    *VAR_4 = VAR_8;
    *VAR_2 = VAR_10;

    VAR_5 = FUNC_0(VAR_0, VAR_10, VAR_9, VAR_8);
    if (VAR_5 < 0) {
        if (VAR_0->length == 64)
            return 0;
        FUNC_1(VAR_0);
        VAR_5 = FUNC_0(VAR_0, VAR_10, VAR_9, VAR_8);
    }

    FUNC_2(VAR_0, VAR_5);
    return 1;
}
