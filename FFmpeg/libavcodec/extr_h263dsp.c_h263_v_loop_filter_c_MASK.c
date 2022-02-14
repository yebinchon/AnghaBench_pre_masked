
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    const int VAR_5 = VAR_0[VAR_3];

    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        int VAR_6, VAR_7, VAR_8;
        int VAR_9 = VAR_1[VAR_4 - 2 * VAR_2];
        int VAR_10 = VAR_1[VAR_4 - 1 * VAR_2];
        int VAR_11 = VAR_1[VAR_4 + 0 * VAR_2];
        int VAR_12 = VAR_1[VAR_4 + 1 * VAR_2];
        int VAR_13 = (VAR_9 - VAR_12 + 4 * (VAR_11 - VAR_10)) / 8;

        if (VAR_13 < -2 * VAR_5)
            VAR_6 = 0;
        else if (VAR_13 < -VAR_5)
            VAR_6 = -2 * VAR_5 - VAR_13;
        else if (VAR_13 < VAR_5)
            VAR_6 = VAR_13;
        else if (VAR_13 < 2 * VAR_5)
            VAR_6 = 2 * VAR_5 - VAR_13;
        else
            VAR_6 = 0;

        VAR_10 += VAR_6;
        VAR_11 -= VAR_6;
        if (VAR_10 & 256)
            VAR_10 = ~(VAR_10 >> 31);
        if (VAR_11 & 256)
            VAR_11 = ~(VAR_11 >> 31);

        VAR_1[VAR_4 - 1 * VAR_2] = VAR_10;
        VAR_1[VAR_4 + 0 * VAR_2] = VAR_11;

        VAR_8 = FUNC_0(VAR_6) >> 1;

        VAR_7 = FUNC_1((VAR_9 - VAR_12) / 4, -VAR_8, VAR_8);

        VAR_1[VAR_4 - 2 * VAR_2] = VAR_9 - VAR_7;
        VAR_1[VAR_4 + VAR_2] = VAR_12 + VAR_7;
    }
}
