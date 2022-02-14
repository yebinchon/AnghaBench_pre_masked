
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_1, int VAR_2, uint32_t *VAR_3)
{
    uint32_t VAR_4 = FUNC_0(VAR_1);

    if ((VAR_1 += VAR_1 >> 9) < (1 << 8)) {
        *VAR_3 += (VAR_4 << 8) + VAR_0[(VAR_1 << (9 - VAR_4)) & 0xff];
    } else {
        *VAR_3 += VAR_4 = (VAR_4 << 8) + VAR_0[(VAR_1 >> (VAR_4 - 9)) & 0xff];

        if (VAR_2 && VAR_4 >= VAR_2)
            return 1;
    }

    return 0;
}
