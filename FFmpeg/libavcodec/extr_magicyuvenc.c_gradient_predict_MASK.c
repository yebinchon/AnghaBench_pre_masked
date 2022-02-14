
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t ptrdiff_t ;
typedef int MagicYUVContext ;



__attribute__((used)) static void FUNC_0(MagicYUVContext *VAR_0,
                             uint8_t *VAR_1, uint8_t *VAR_2, ptrdiff_t VAR_3,
                             int VAR_4, int VAR_5)
{
    int VAR_6 = 0, VAR_7, VAR_8;
    int VAR_9, VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        VAR_2[VAR_9] = VAR_1[VAR_9] - VAR_6;
        VAR_6 = VAR_1[VAR_9];
    }
    VAR_2 += VAR_4;
    VAR_1 += VAR_3;
    for (VAR_10 = 1; VAR_10 < VAR_5; VAR_10++) {
        VAR_7 = VAR_1[-VAR_3];
        VAR_6 = VAR_1[0] - VAR_7;
        VAR_2[0] = VAR_6;
        for (VAR_9 = 1; VAR_9 < VAR_4; VAR_9++) {
            VAR_7 = VAR_1[VAR_9 - VAR_3];
            VAR_8 = VAR_1[VAR_9 - (VAR_3 + 1)];
            VAR_6 = VAR_1[VAR_9-1];
            VAR_2[VAR_9] = (VAR_1[VAR_9] - VAR_7) - VAR_6 + VAR_8;
        }
        VAR_2 += VAR_4;
        VAR_1 += VAR_3;
    }
}
