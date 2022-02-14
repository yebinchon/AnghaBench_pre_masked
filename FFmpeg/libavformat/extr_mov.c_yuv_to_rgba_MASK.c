
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_0)
{
    uint8_t VAR_1, VAR_2, VAR_3;
    int VAR_4, VAR_5, VAR_6;

    VAR_4 = (VAR_0 >> 16) & 0xFF;
    VAR_6 = (VAR_0 >> 8) & 0xFF;
    VAR_5 = VAR_0 & 0xFF;

    VAR_3 = FUNC_0((1164 * (VAR_4 - 16) + 2018 * (VAR_5 - 128)) / 1000);
    VAR_2 = FUNC_0((1164 * (VAR_4 - 16) - 813 * (VAR_6 - 128) - 391 * (VAR_5 - 128)) / 1000);
    VAR_1 = FUNC_0((1164 * (VAR_4 - 16) + 1596 * (VAR_6 - 128) ) / 1000);

    return (VAR_1 << 16) | (VAR_2 << 8) | VAR_3;
}
