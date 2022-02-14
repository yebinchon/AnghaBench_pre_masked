
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0,
                                 uint8_t *VAR_1,
                                 uint8_t *VAR_2,
                                 ptrdiff_t VAR_3,
                                 ptrdiff_t VAR_4,
                                 ptrdiff_t VAR_5,
                                 int VAR_6, int VAR_7)
{
    uint8_t VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
            VAR_8 = VAR_0[VAR_11];
            VAR_9 = VAR_1[VAR_11];
            VAR_10 = VAR_2[VAR_11];
            VAR_0[VAR_11] = VAR_8 + VAR_9 - 0x80;
            VAR_2[VAR_11] = VAR_10 + VAR_9 - 0x80;
        }
        VAR_0 += VAR_3;
        VAR_1 += VAR_4;
        VAR_2 += VAR_5;
    }
}
