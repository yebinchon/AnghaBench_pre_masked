
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;



__attribute__((used)) static uint8_t FUNC_0(uint8_t *VAR_0, uint16_t VAR_1)
{
    uint32_t VAR_2 = 0;

    if (VAR_0 == ((void*)0) || VAR_1 == 0) {
        return 0;
    }

    for(int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2 = VAR_2 + VAR_0[VAR_3];
    }

    while (VAR_2 >> 8) {
        VAR_2 = (VAR_2 & 0xff) + (VAR_2 >> 8);
    }

    return (uint8_t)~VAR_2;
}
