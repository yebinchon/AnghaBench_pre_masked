
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t ptrdiff_t ;
typedef int MagicYUVContext ;



__attribute__((used)) static void FUNC_0(MagicYUVContext *VAR_0,
                         uint8_t *VAR_1, uint8_t *VAR_2, ptrdiff_t VAR_3,
                         int VAR_4, int VAR_5)
{
    uint8_t VAR_6 = 0;
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_2[VAR_7] = VAR_1[VAR_7] - VAR_6;
        VAR_6 = VAR_1[VAR_7];
    }
    VAR_2 += VAR_4;
    VAR_1 += VAR_3;
    for (VAR_8 = 1; VAR_8 < VAR_5; VAR_8++) {
        VAR_6 = VAR_1[-VAR_3];
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            VAR_2[VAR_7] = VAR_1[VAR_7] - VAR_6;
            VAR_6 = VAR_1[VAR_7];
        }
        VAR_2 += VAR_4;
        VAR_1 += VAR_3;
    }
}
