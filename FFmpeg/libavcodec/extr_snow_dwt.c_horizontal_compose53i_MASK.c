
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDWTELEM ;



__attribute__((used)) static void FUNC_0(IDWTELEM *VAR_0, IDWTELEM *VAR_1, int VAR_2)
{
    const int VAR_3 = VAR_2 >> 1;
    const int VAR_4 = (VAR_2 + 1) >> 1;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_1[2 * VAR_5] = VAR_0[VAR_5];
        VAR_1[2 * VAR_5 + 1] = VAR_0[VAR_5 + VAR_4];
    }
    if (VAR_2 & 1)
        VAR_1[2 * VAR_5] = VAR_0[VAR_5];

    VAR_0[0] = VAR_1[0] - ((VAR_1[1] + 1) >> 1);
    for (VAR_5 = 2; VAR_5 < VAR_2 - 1; VAR_5 += 2) {
        VAR_0[VAR_5] = VAR_1[VAR_5] - ((VAR_1[VAR_5 - 1] + VAR_1[VAR_5 + 1] + 2) >> 2);
        VAR_0[VAR_5 - 1] = VAR_1[VAR_5 - 1] + ((VAR_0[VAR_5 - 2] + VAR_0[VAR_5] + 1) >> 1);
    }
    if (VAR_2 & 1) {
        VAR_0[VAR_5] = VAR_1[VAR_5] - ((VAR_1[VAR_5 - 1] + 1) >> 1);
        VAR_0[VAR_5 - 1] = VAR_1[VAR_5 - 1] + ((VAR_0[VAR_5 - 2] + VAR_0[VAR_5] + 1) >> 1);
    } else
        VAR_0[VAR_5 - 1] = VAR_1[VAR_5 - 1] + VAR_0[VAR_5 - 2];
}
