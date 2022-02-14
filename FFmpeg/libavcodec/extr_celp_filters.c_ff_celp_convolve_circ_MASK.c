
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int*,int ,int) ;

void FUNC_1(int16_t* VAR_0, const int16_t* VAR_1,
                           const int16_t* VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    FUNC_0(VAR_0, 0, VAR_3 * sizeof(int16_t));



    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        if (VAR_1[VAR_4]) {
            for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
                VAR_0[VAR_5] += (VAR_1[VAR_4] * VAR_2[VAR_3 + VAR_5 - VAR_4]) >> 15;

            for (VAR_5 = VAR_4; VAR_5 < VAR_3; VAR_5++)
                VAR_0[VAR_5] += (VAR_1[VAR_4] * VAR_2[ VAR_5 - VAR_4]) >> 15;
        }
    }
}
