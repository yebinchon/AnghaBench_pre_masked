
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__*** VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

uint32_t FUNC_1(int *VAR_3, uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
    uint8_t VAR_7, VAR_8;
    uint32_t VAR_9 = 0;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_8 = VAR_3[VAR_7] - VAR_1[VAR_6];
        FUNC_0(VAR_8 < VAR_2[VAR_6]);
        VAR_9 += VAR_0[VAR_6][VAR_5][VAR_8];
    }
    return VAR_9;
}
