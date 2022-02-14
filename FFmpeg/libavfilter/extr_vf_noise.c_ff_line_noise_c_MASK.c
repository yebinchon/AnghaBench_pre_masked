
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;


 int FUNC_0 (int) ;

void FUNC_1(uint8_t *VAR_0, const uint8_t *VAR_1, const int8_t *VAR_2,
                     int VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_2 += VAR_4;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        int VAR_6 = VAR_1[VAR_5] + VAR_2[VAR_5];

        VAR_0[VAR_5] = FUNC_0(VAR_6);
    }
}
