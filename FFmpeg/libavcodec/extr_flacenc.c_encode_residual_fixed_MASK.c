
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;



__attribute__((used)) static void FUNC_0(int32_t *VAR_0, const int32_t *VAR_1, int VAR_2,
                                  int VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        VAR_0[VAR_4] = VAR_1[VAR_4];

    if (VAR_3 == 0) {
        for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4++)
            VAR_0[VAR_4] = VAR_1[VAR_4];
    } else if (VAR_3 == 1) {
        for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4++)
            VAR_0[VAR_4] = VAR_1[VAR_4] - VAR_1[VAR_4-1];
    } else if (VAR_3 == 2) {
        int VAR_5 = VAR_1[VAR_3-1] - VAR_1[VAR_3-2];
        for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4 += 2) {
            int VAR_6 = VAR_1[VAR_4 ] - VAR_1[VAR_4-1];
            VAR_0[VAR_4] = VAR_6 - VAR_5;
            VAR_5 = VAR_1[VAR_4+1] - VAR_1[VAR_4 ];
            VAR_0[VAR_4+1] = VAR_5 - VAR_6;
        }
    } else if (VAR_3 == 3) {
        int VAR_7 = VAR_1[VAR_3-1] - VAR_1[VAR_3-2];
        int VAR_8 = VAR_1[VAR_3-1] - 2*VAR_1[VAR_3-2] + VAR_1[VAR_3-3];
        for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4 += 2) {
            int VAR_9 = VAR_1[VAR_4 ] - VAR_1[VAR_4-1];
            int VAR_10 = VAR_9 - VAR_7;
            VAR_0[VAR_4] = VAR_10 - VAR_8;
            VAR_7 = VAR_1[VAR_4+1] - VAR_1[VAR_4 ];
            VAR_8 = VAR_7 - VAR_9;
            VAR_0[VAR_4+1] = VAR_8 - VAR_10;
        }
    } else {
        int VAR_11 = VAR_1[VAR_3-1] - VAR_1[VAR_3-2];
        int VAR_12 = VAR_1[VAR_3-1] - 2*VAR_1[VAR_3-2] + VAR_1[VAR_3-3];
        int VAR_13 = VAR_1[VAR_3-1] - 3*VAR_1[VAR_3-2] + 3*VAR_1[VAR_3-3] - VAR_1[VAR_3-4];
        for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4 += 2) {
            int VAR_14 = VAR_1[VAR_4 ] - VAR_1[VAR_4-1];
            int VAR_15 = VAR_14 - VAR_11;
            int VAR_16 = VAR_15 - VAR_12;
            VAR_0[VAR_4 ] = VAR_16 - VAR_13;
            VAR_11 = VAR_1[VAR_4+1] - VAR_1[VAR_4 ];
            VAR_12 = VAR_11 - VAR_14;
            VAR_13 = VAR_12 - VAR_15;
            VAR_0[VAR_4+1] = VAR_13 - VAR_16;
        }
    }
}
