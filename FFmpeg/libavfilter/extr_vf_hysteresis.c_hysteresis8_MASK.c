
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
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
    const int VAR_9 = VAR_0->threshold;
    int VAR_10, VAR_11;

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
            if ((VAR_1[VAR_10 + VAR_11 * VAR_4] > VAR_9) && (VAR_2[VAR_10 + VAR_11 * VAR_5] > VAR_9) && !FUNC_1(VAR_0, VAR_10, VAR_11, VAR_7)) {
                int VAR_12, VAR_13;

                VAR_3[VAR_10 + VAR_11 * VAR_6] = VAR_2[VAR_10 + VAR_11 * VAR_5];

                FUNC_3(VAR_0, VAR_10, VAR_11, VAR_7);

                while (!FUNC_0(VAR_0)) {
                    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

                    FUNC_2(VAR_0, &VAR_12, &VAR_13);

                    VAR_14 = VAR_12 > 0 ? VAR_12 - 1 : 0;
                    VAR_15 = VAR_12 < VAR_7 - 1 ? VAR_12 + 1 : VAR_12;
                    VAR_16 = VAR_13 > 0 ? VAR_13 - 1 : 0;
                    VAR_17 = VAR_13 < VAR_8 - 1 ? VAR_13 + 1 : VAR_13;

                    for (VAR_18 = VAR_16; VAR_18 <= VAR_17; VAR_18++) {
                        for (VAR_19 = VAR_14; VAR_19 <= VAR_15; VAR_19++) {
                            if ((VAR_2[VAR_19 + VAR_18 * VAR_5] > VAR_9) && !FUNC_1(VAR_0, VAR_19, VAR_18, VAR_7)) {
                                VAR_3[VAR_19 + VAR_18 * VAR_6] = VAR_2[VAR_19 + VAR_18 * VAR_5];
                                FUNC_3(VAR_0, VAR_19, VAR_18, VAR_7);
                            }
                        }
                    }
                }
            }
        }
    }
}
