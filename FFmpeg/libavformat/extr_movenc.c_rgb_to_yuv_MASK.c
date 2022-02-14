
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int rgb ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_0)
{
    uint8_t VAR_1, VAR_2, VAR_3;
    int VAR_4, VAR_5, VAR_6;

    VAR_1 = (VAR_0 >> 16) & 0xFF;
    VAR_2 = (VAR_0 >> 8) & 0xFF;
    VAR_3 = (VAR_0 ) & 0xFF;

    VAR_4 = FUNC_0(( 16000 + 257 * VAR_1 + 504 * VAR_2 + 98 * VAR_3)/1000);
    VAR_5 = FUNC_0((128000 - 148 * VAR_1 - 291 * VAR_2 + 439 * VAR_3)/1000);
    VAR_6 = FUNC_0((128000 + 439 * VAR_1 - 368 * VAR_2 - 71 * VAR_3)/1000);

    return (VAR_4 << 16) | (VAR_6 << 8) | VAR_5;
}
