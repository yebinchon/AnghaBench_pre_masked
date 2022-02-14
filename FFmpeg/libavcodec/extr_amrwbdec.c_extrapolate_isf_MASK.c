
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,int) ;
 int VAR_0 ;
 int VAR_1 ;
 float FUNC_1 (float*,float,int) ;

__attribute__((used)) static void FUNC_2(float VAR_2[VAR_1])
{
    float VAR_3[VAR_0 - 2], VAR_4;
    float VAR_5[3];
    float VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10;

    VAR_2[VAR_1 - 1] = VAR_2[VAR_0 - 1];


    for (VAR_8 = 0; VAR_8 < VAR_0 - 2; VAR_8++)
        VAR_3[VAR_8] = VAR_2[VAR_8 + 1] - VAR_2[VAR_8];

    VAR_4 = 0.0;
    for (VAR_8 = 2; VAR_8 < VAR_0 - 2; VAR_8++)
        VAR_4 += VAR_3[VAR_8] * (1.0f / (VAR_0 - 4));


    VAR_10 = 0;
    for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
        VAR_5[VAR_8] = FUNC_1(VAR_3, VAR_4, VAR_8 + 2);

        if (VAR_5[VAR_8] > VAR_5[VAR_10])
            VAR_10 = VAR_8;
    }
    VAR_10++;

    for (VAR_8 = VAR_0 - 1; VAR_8 < VAR_1 - 1; VAR_8++)
        VAR_2[VAR_8] = VAR_2[VAR_8 - 1] + VAR_2[VAR_8 - 1 - VAR_10]
                            - VAR_2[VAR_8 - 2 - VAR_10];


    VAR_6 = 7965 + (VAR_2[2] - VAR_2[3] - VAR_2[4]) / 6.0;
    VAR_7 = 0.5 * (FUNC_0(VAR_6, 7600) - VAR_2[VAR_0 - 2]) /
            (VAR_2[VAR_1 - 2] - VAR_2[VAR_0 - 2]);

    for (VAR_8 = VAR_0 - 1, VAR_9 = 0; VAR_8 < VAR_1 - 1; VAR_8++, VAR_9++)
        VAR_3[VAR_9] = VAR_7 * (VAR_2[VAR_8] - VAR_2[VAR_8 - 1]);


    for (VAR_8 = 1; VAR_8 < VAR_1 - VAR_0; VAR_8++)
        if (VAR_3[VAR_8] + VAR_3[VAR_8 - 1] < 5.0) {
            if (VAR_3[VAR_8] > VAR_3[VAR_8 - 1]) {
                VAR_3[VAR_8 - 1] = 5.0 - VAR_3[VAR_8];
            } else
                VAR_3[VAR_8] = 5.0 - VAR_3[VAR_8 - 1];
        }

    for (VAR_8 = VAR_0 - 1, VAR_9 = 0; VAR_8 < VAR_1 - 1; VAR_8++, VAR_9++)
        VAR_2[VAR_8] = VAR_2[VAR_8 - 1] + VAR_3[VAR_9] * (1.0f / (1 << 15));


    for (VAR_8 = 0; VAR_8 < VAR_1 - 1; VAR_8++)
        VAR_2[VAR_8] *= 0.8;
}
