
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int32_t VAR_1[16][2][8],
                                   uint32_t VAR_2[2][8],
                                   int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6 = 0;
    int32_t VAR_7, VAR_8;
    uint32_t VAR_9, VAR_10;


    int VAR_11 = VAR_4 - 1;
    VAR_9 = 1 << VAR_0;
    VAR_10 = 1 << VAR_0;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_7 = FUNC_0(VAR_1[VAR_5][0][VAR_11]);
        VAR_8 = FUNC_0(VAR_1[VAR_5][1][VAR_11]);
        if (VAR_7 != 0)
            VAR_9 |= VAR_7 - 1;
        if (VAR_8 != 0)
            VAR_10 |= VAR_8 - 1;
    }
    VAR_2[0][VAR_11] = (31 - VAR_0) - FUNC_1(VAR_9);
    VAR_2[1][VAR_11] = (31 - VAR_0) - FUNC_1(VAR_10);


    while (--VAR_11 >= 0) {
        int32_t VAR_12[16][2];
        VAR_9 = 1 << VAR_0;
        VAR_10 = 1 << VAR_0;
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            VAR_7 = VAR_1[VAR_5][0][VAR_11];
            VAR_8 = VAR_1[VAR_5][1][VAR_11];
            VAR_12[VAR_5][0] = (VAR_7 >> 1) + (VAR_8 >> 1);
            VAR_12[VAR_5][1] = (VAR_7 >> 1) - (VAR_8 >> 1);
            VAR_7 = FUNC_0(VAR_7);
            VAR_8 = FUNC_0(VAR_8);
            if (VAR_7 != 0)
                VAR_9 |= VAR_7 - 1;
            if (VAR_8 != 0)
                VAR_10 |= VAR_8 - 1;
        }
        VAR_2[0][VAR_11] = (31 - VAR_0) -
            FUNC_1(VAR_9);
        VAR_2[1][VAR_11] = (31 - VAR_0) -
            FUNC_1(VAR_10);
        VAR_9 = 1 << VAR_0;
        VAR_10 = 1 << VAR_0;
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            VAR_7 = FUNC_0(VAR_12[VAR_5][0]);
            VAR_8 = FUNC_0(VAR_12[VAR_5][1]);
            if (VAR_7 != 0)
                VAR_9 |= VAR_7 - 1;
            if (VAR_8 != 0)
                VAR_10 |= VAR_8 - 1;
        }
        VAR_9 = (31 - VAR_0) - FUNC_1(VAR_9);
        VAR_10 = (31 - VAR_0) - FUNC_1(VAR_10);


        if ((VAR_2[0][VAR_11] + VAR_2[1][VAR_11]) > VAR_9 + VAR_10) {
            VAR_6 |= 1 << (VAR_4 - 1 - VAR_11);
            VAR_2[0][VAR_11] = VAR_9;
            VAR_2[1][VAR_11] = VAR_10;
            for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
                VAR_1[VAR_5][0][VAR_11] = VAR_12[VAR_5][0];
                VAR_1[VAR_5][1][VAR_11] = VAR_12[VAR_5][1];
            }
        }
    }


    return VAR_6;
}
