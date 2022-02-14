
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int const**,int) ;

__attribute__((used)) static uint16_t FUNC_1(const uint8_t **VAR_0, uint32_t *VAR_1,
                                int *VAR_2, int VAR_3, int VAR_4)
{
    uint16_t VAR_5;

    if (*VAR_2)
        (*VAR_2)--;
    else {
        *VAR_1 = FUNC_0(VAR_0, VAR_3);
        *VAR_2 = 2;
    }

    VAR_5 = *VAR_1 >> VAR_4 & 0x3FF;
    *VAR_1 = *VAR_1 >> 10;

    return VAR_5;
}
