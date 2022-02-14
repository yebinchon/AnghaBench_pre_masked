
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1,
                                          int VAR_2, int VAR_3, int VAR_4,
                                          int *VAR_5)
{
    int VAR_6, VAR_7;



    int VAR_8 = 0;


    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
        for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
            VAR_0[VAR_7*VAR_1 + VAR_6] = VAR_0[VAR_7*VAR_1 + VAR_6] > VAR_4;







    while (1) {

        int VAR_9 = 0;
        uint8_t *VAR_10 = VAR_0 + 1 + VAR_1, *VAR_11;
        VAR_8++;

        for (VAR_7 = 1; VAR_7 < VAR_3-1; VAR_7++) {
            VAR_11 = VAR_10;
            for (VAR_6 = 1; VAR_6 < VAR_2-1; VAR_6++) {
                if ( *VAR_11 >= VAR_8 &&
                    *(VAR_11 + 1) >= VAR_8 &&
                    *(VAR_11 - 1) >= VAR_8 &&
                    *(VAR_11 + VAR_1) >= VAR_8 &&
                    *(VAR_11 - VAR_1) >= VAR_8) {



                    (*VAR_11)++;
                    VAR_9 = 1;
                }
                VAR_11++;
            }
            VAR_10 += VAR_1;
        }
        if (!VAR_9)
            break;
    }



    for (VAR_7 = 1; VAR_7 < VAR_3 - 1; VAR_7++)
        for (VAR_6 = 1; VAR_6 < VAR_2 - 1; VAR_6++)
            VAR_0[(VAR_7 * VAR_1) + VAR_6] = FUNC_0(VAR_0[(VAR_7 * VAR_1) + VAR_6]);





    *VAR_5 = FUNC_0(VAR_8 + 1);
}
