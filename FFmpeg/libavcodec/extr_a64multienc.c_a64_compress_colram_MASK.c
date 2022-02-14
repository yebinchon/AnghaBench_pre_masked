
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, int *VAR_1, uint8_t *VAR_2)
{
    int VAR_3;
    uint8_t VAR_4;


    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
        VAR_4 = VAR_2[VAR_1[VAR_3 + 0x000]] << 0;
        VAR_4 |= VAR_2[VAR_1[VAR_3 + 0x100]] << 1;
        VAR_4 |= VAR_2[VAR_1[VAR_3 + 0x200]] << 2;
        if (VAR_3 < 0xe8) VAR_4 |= VAR_2[VAR_1[VAR_3 + 0x300]] << 3;
        VAR_0[VAR_3] = VAR_4 << 2;
    }
}
