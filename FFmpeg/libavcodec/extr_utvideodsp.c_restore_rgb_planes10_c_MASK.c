
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint16_t *VAR_0,
                                   uint16_t *VAR_1,
                                   uint16_t *VAR_2,
                                   ptrdiff_t VAR_3,
                                   ptrdiff_t VAR_4,
                                   ptrdiff_t VAR_5,
                                   int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
            VAR_8 = VAR_0[VAR_11];
            VAR_9 = VAR_1[VAR_11];
            VAR_10 = VAR_2[VAR_11];
            VAR_0[VAR_11] = (VAR_8 + VAR_9 - 0x200) & 0x3FF;
            VAR_2[VAR_11] = (VAR_10 + VAR_9 - 0x200) & 0x3FF;
        }
        VAR_0 += VAR_3;
        VAR_1 += VAR_4;
        VAR_2 += VAR_5;
    }
}
