
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ptrdiff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const uint16_t *VAR_1, int VAR_2, const uint16_t *VAR_3,
                          uint16_t *VAR_4, int VAR_5, int VAR_6, ptrdiff_t VAR_7,
                          ptrdiff_t VAR_8)
{
    ptrdiff_t VAR_9 = VAR_7 / sizeof(*VAR_3);
    ptrdiff_t VAR_10 = VAR_8 / sizeof(*VAR_4);
    int VAR_11 = VAR_2 / 2;
    int VAR_12 = VAR_11;
    int VAR_13 = VAR_5 - (VAR_2 - VAR_11);
    int VAR_14, VAR_15, VAR_16;
    int VAR_17 = 0;

    for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
            VAR_17 = 0;
            for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
                int VAR_18 = FUNC_0(VAR_15 - VAR_11 + VAR_16);
                if (VAR_18 >= VAR_5) {
                    VAR_18 = VAR_5 - (VAR_18 - VAR_5 + 1);
                }
                VAR_17 += VAR_1[VAR_16] * VAR_3[VAR_14 * VAR_9 + VAR_18];
            }
            VAR_4[VAR_14 * VAR_10 + VAR_15] = VAR_17 >> VAR_0;
        }

        for (VAR_15 = VAR_12; VAR_15 < VAR_13; VAR_15++) {
            int VAR_19 = 0;
            for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
                VAR_19 += VAR_1[VAR_16] * VAR_3[VAR_14 * VAR_9 + VAR_15 - VAR_11 + VAR_16];
            }
            VAR_4[VAR_14 * VAR_10 + VAR_15] = VAR_19 >> VAR_0;
        }

        for (VAR_15 = VAR_13; VAR_15 < VAR_5; VAR_15++) {
            VAR_17 = 0;
            for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
                int VAR_20 = FUNC_0(VAR_15 - VAR_11 + VAR_16);
                if (VAR_20 >= VAR_5) {
                    VAR_20 = VAR_5 - (VAR_20 - VAR_5 + 1);
                }
                VAR_17 += VAR_1[VAR_16] * VAR_3[VAR_14 * VAR_9 + VAR_20];
            }
            VAR_4[VAR_14 * VAR_10 + VAR_15] = VAR_17 >> VAR_0;
        }
    }
}
