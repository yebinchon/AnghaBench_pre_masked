
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, ptrdiff_t VAR_1, int VAR_2, int VAR_3)
{
    uint8_t *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;

    if(!VAR_2 || !VAR_3)
        return;

    VAR_2 += (VAR_2 & 1);
    VAR_3 += (VAR_3 & 1);

    VAR_12 = VAR_3 - 1;

    FUNC_0(VAR_0 + VAR_1 * VAR_12,
           VAR_0 + VAR_1 * (VAR_12 >> 1),
           VAR_2);

    while ((VAR_12 -= 2) > 0) {
        VAR_6 = VAR_0 + VAR_1 * (VAR_12 + 1);
        VAR_7 = VAR_0 + VAR_1 * VAR_12;
        VAR_4 = VAR_0 + VAR_1 * ((VAR_12 + 1) >> 1);
        VAR_5 = VAR_0 + VAR_1 * ( VAR_12 >> 1);

        for (VAR_11 = (VAR_2 - 1) >> 1; VAR_11 >= 0; VAR_11--) {
            VAR_9 = VAR_4[VAR_11];
            VAR_10 = VAR_5[VAR_11];
            VAR_6[VAR_11] = (3 * VAR_9 + VAR_10 + 2) >> 2;
            VAR_7[VAR_11] = (VAR_9 + 3 * VAR_10 + 2) >> 2;
        }
    }

    for (VAR_12 = VAR_3 - 1; VAR_12 >= 0; VAR_12--) {
        VAR_8 = VAR_0 + VAR_1 * VAR_12;
        VAR_11 = VAR_2 - 1;

        VAR_8[VAR_11] = VAR_8[VAR_11 >> 1];

        while ((VAR_11 -= 2) > 0) {
            VAR_9 = VAR_8[ VAR_11 >> 1];
            VAR_10 = VAR_8[(VAR_11 + 1) >> 1];
            VAR_8[VAR_11] = (3 * VAR_9 + VAR_10 + 1) >> 2;
            VAR_8[VAR_11 + 1] = (VAR_9 + 3 * VAR_10 + 1) >> 2;
        }
    }
}
