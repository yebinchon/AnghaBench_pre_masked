
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



int FUNC_0(uint8_t* VAR_0, uint8_t* VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3 = 0;







    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_0[VAR_3++] = 0;
        VAR_0[VAR_3++] = 0;
        VAR_0[VAR_3++] = 0;
        VAR_0[VAR_3++] = VAR_1[VAR_4];
    }
    return (VAR_2 * 4);

}
