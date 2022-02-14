
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef double int16_t ;


 int VAR_0 ;
 double FUNC_0 (int) ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (double) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_1, ptrdiff_t VAR_2, int16_t *VAR_3)
{
    static int VAR_4;
    static double VAR_5[8][8];
    static double VAR_6[4][4];
    double VAR_7[64], VAR_8[64], VAR_9[64];
    double VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15;

    if (!VAR_4) {
        VAR_4 = 1;

        for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
            VAR_11 = 0;
            for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
                VAR_10 = (VAR_13 == 0) ? FUNC_2(1.0 / 8.0) : FUNC_2(1.0 / 4.0);
                VAR_5[VAR_13][VAR_14] = VAR_10 * FUNC_0(VAR_0 * VAR_13 * (VAR_14 + 0.5) / 8.0);
                VAR_11 += VAR_5[VAR_13][VAR_14] * VAR_5[VAR_13][VAR_14];
            }
        }

        for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
            VAR_11 = 0;
            for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
                VAR_10 = (VAR_13 == 0) ? FUNC_2(1.0 / 4.0) : FUNC_2(1.0 / 2.0);
                VAR_6[VAR_13][VAR_14] = VAR_10 * FUNC_0(VAR_0 * VAR_13 * (VAR_14 + 0.5) / 4.0);
                VAR_11 += VAR_6[VAR_13][VAR_14] * VAR_6[VAR_13][VAR_14];
            }
        }
    }


    VAR_10 = 0.5 * FUNC_2(2.0);
    for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
        for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
            VAR_7[8 * (2 * VAR_13) + VAR_14] =
                (VAR_3[8 * (2 * VAR_13) + VAR_14] + VAR_3[8 * (2 * VAR_13 + 1) + VAR_14]) * VAR_10;
            VAR_7[8 * (2 * VAR_13 + 1) + VAR_14] =
                (VAR_3[8 * (2 * VAR_13) + VAR_14] - VAR_3[8 * (2 * VAR_13 + 1) + VAR_14]) * VAR_10;
        }
    }


    for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
        for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
            VAR_11 = 0;
            for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
                VAR_11 += VAR_5[VAR_15][VAR_14] * VAR_7[8 * VAR_13 + VAR_15];
            VAR_8[8 * VAR_13 + VAR_14] = VAR_11;
        }
    }


    for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
        for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {

            VAR_11 = 0;
            for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
                VAR_11 += VAR_6[VAR_15][VAR_14] * VAR_8[8 * (2 * VAR_15) + VAR_13];
            VAR_9[8 * (2 * VAR_14) + VAR_13] = VAR_11;


            VAR_11 = 0;
            for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
                VAR_11 += VAR_6[VAR_15][VAR_14] * VAR_8[8 * (2 * VAR_15 + 1) + VAR_13];
            VAR_9[8 * (2 * VAR_14 + 1) + VAR_13] = VAR_11;
        }
    }


    for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
        for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
            VAR_12 = VAR_9[8 * VAR_13 + VAR_14];
            if (VAR_12 < 0) VAR_12 = 0;
            else if (VAR_12 > 255) VAR_12 = 255;
            VAR_1[VAR_13 * VAR_2 + VAR_14] = (int) FUNC_1(VAR_12);
        }
    }
}
