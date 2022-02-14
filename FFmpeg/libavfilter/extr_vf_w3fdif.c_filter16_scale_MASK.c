
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;


 int FUNC_0 (int const,int ,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, const int32_t *VAR_1, int VAR_2, int VAR_3)
{
    uint16_t *VAR_4 = (uint16_t *)VAR_0;
    int VAR_5;

    VAR_2 /= 2;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_4++, VAR_1++)
        *VAR_4 = FUNC_0(*VAR_1, 0, VAR_3) >> 15;
}
