
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(int16_t VAR_0[16], int VAR_1, const uint16_t VAR_2[17])
{
    int VAR_3, VAR_4;
    for (VAR_3 = 0; VAR_3 < 20; VAR_3++) {
        int VAR_5, VAR_6 = 0;
        for (VAR_4 = 0; VAR_4 < VAR_1+1; VAR_4++) {
            int VAR_7 = VAR_4 != 0 ? VAR_0[VAR_4-1] : 0;
            int VAR_8 = VAR_4 != VAR_1 ? VAR_0[VAR_4] : 32768;
            int VAR_9 = (VAR_8 - VAR_7) - (VAR_2[VAR_4]);

            if (VAR_9 < VAR_6) {
                VAR_6 = VAR_9;
                VAR_5 = VAR_4;

                if (VAR_3 == 20)
                    break;
            }
        }
        if (VAR_6 == 0)
            return;


        if (VAR_5 == 0) {

            VAR_0[0] = VAR_2[0];
        } else if (VAR_5 == VAR_1) {

            VAR_0[VAR_1-1] = 32768 - VAR_2[VAR_1];
        } else {

            int VAR_10 = 0, VAR_11 = 32768, VAR_12;


            for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
                VAR_10 += VAR_2[VAR_4];
            VAR_10 += VAR_2[VAR_5] >> 1;


            for (VAR_4 = VAR_1; VAR_4 > VAR_5; VAR_4--)
                VAR_11 -= VAR_2[VAR_4];
            VAR_11 -= VAR_2[VAR_5] >> 1;


            VAR_12 = VAR_0[VAR_5 - 1] + VAR_0[VAR_5];
            VAR_12 = (VAR_12 >> 1) + (VAR_12 & 1);
            VAR_12 = FUNC_1(VAR_11, FUNC_0(VAR_10, VAR_12));

            VAR_0[VAR_5 - 1] = VAR_12 - (VAR_2[VAR_5] >> 1);
            VAR_0[VAR_5] = VAR_0[VAR_5 - 1] + VAR_2[VAR_5];
        }
    }




    for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
        int VAR_13, VAR_14 = VAR_0[VAR_4];
        for (VAR_13 = VAR_4 - 1; VAR_13 >= 0 && VAR_0[VAR_13] > VAR_14; VAR_13--)
            VAR_0[VAR_13 + 1] = VAR_0[VAR_13];
        VAR_0[VAR_13 + 1] = VAR_14;
    }


    if (VAR_0[0] < VAR_2[0])
        VAR_0[0] = VAR_2[0];
    for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
        VAR_0[VAR_4] = FUNC_0(VAR_0[VAR_4], FUNC_1(VAR_0[VAR_4 - 1] + VAR_2[VAR_4], 32767));


    if (VAR_0[VAR_1-1] > 32768 - VAR_2[VAR_1])
        VAR_0[VAR_1-1] = 32768 - VAR_2[VAR_1];
    for (VAR_4 = VAR_1-2; VAR_4 >= 0; VAR_4--)
        if (VAR_0[VAR_4] > VAR_0[VAR_4 + 1] - VAR_2[VAR_4+1])
            VAR_0[VAR_4] = VAR_0[VAR_4 + 1] - VAR_2[VAR_4+1];

    return;
}
