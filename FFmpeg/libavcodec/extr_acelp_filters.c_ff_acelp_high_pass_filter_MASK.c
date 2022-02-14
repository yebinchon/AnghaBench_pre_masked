
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int) ;

void FUNC_1(int16_t* VAR_0, int VAR_1[2],
                               const int16_t* VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_5 = (VAR_1[0]* 15836LL) >> 13;
        VAR_5 += (VAR_1[1]* -7667LL) >> 13;
        VAR_5 += 7699 * (VAR_2[VAR_4] - 2*VAR_2[VAR_4-1] + VAR_2[VAR_4-2]);



        VAR_0[VAR_4] = FUNC_0((VAR_5 + 0x800) >> 12);

        VAR_1[1] = VAR_1[0];
        VAR_1[0] = VAR_5;
    }
}
