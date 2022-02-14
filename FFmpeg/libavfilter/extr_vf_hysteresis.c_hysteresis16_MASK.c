
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;
struct TYPE_7__ {int threshold; } ;
typedef TYPE_1__ HysteresisContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int,int) ;
 int FUNC_2 (TYPE_1__*,int*,int*) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_4(HysteresisContext *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2,
                        uint8_t *VAR_3,
                        ptrdiff_t VAR_4, ptrdiff_t VAR_5,
                        ptrdiff_t VAR_6,
                        int VAR_7, int VAR_8)
{
    const uint16_t *VAR_9 = (const uint16_t *)VAR_1;
    const uint16_t *VAR_10 = (const uint16_t *)VAR_2;
    uint16_t *VAR_11 = (uint16_t *)VAR_3;
    const int VAR_12 = VAR_0->threshold;
    int VAR_13, VAR_14;

    VAR_4 /= 2;
    VAR_5 /= 2;
    VAR_6 /= 2;

    for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
            if ((VAR_9[VAR_13 + VAR_14 * VAR_4] > VAR_12) && (VAR_10[VAR_13 + VAR_14 * VAR_5] > VAR_12) && !FUNC_1(VAR_0, VAR_13, VAR_14, VAR_7)) {
                int VAR_15, VAR_16;

                VAR_11[VAR_13 + VAR_14 * VAR_6] = VAR_10[VAR_13 + VAR_14 * VAR_5];

                FUNC_3(VAR_0, VAR_13, VAR_14, VAR_7);

                while (!FUNC_0(VAR_0)) {
                    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

                    FUNC_2(VAR_0, &VAR_15, &VAR_16);

                    VAR_17 = VAR_15 > 0 ? VAR_15 - 1 : 0;
                    VAR_18 = VAR_15 < VAR_7 - 1 ? VAR_15 + 1 : VAR_15;
                    VAR_19 = VAR_16 > 0 ? VAR_16 - 1 : 0;
                    VAR_20 = VAR_16 < VAR_8 - 1 ? VAR_16 + 1 : VAR_16;

                    for (VAR_21 = VAR_19; VAR_21 <= VAR_20; VAR_21++) {
                        for (VAR_22 = VAR_17; VAR_22 <= VAR_18; VAR_22++) {
                            if ((VAR_10[VAR_22 + VAR_21 * VAR_5] > VAR_12) && !FUNC_1(VAR_0, VAR_22, VAR_21, VAR_7)) {
                                VAR_11[VAR_22 + VAR_21 * VAR_6] = VAR_10[VAR_22 + VAR_21 * VAR_5];
                                FUNC_3(VAR_0, VAR_22, VAR_21, VAR_7);
                            }
                        }
                    }
                }
            }
        }
    }
}
