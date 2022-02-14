
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float **VAR_0, float **VAR_1,
                          int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    float VAR_7, VAR_8;

    if (VAR_2 == 2) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_7 = VAR_8 = 0.0f;
            for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
                VAR_7 += VAR_0[VAR_6][VAR_5] * VAR_1[0][VAR_6];
                VAR_8 += VAR_0[VAR_6][VAR_5] * VAR_1[1][VAR_6];
            }
            VAR_0[0][VAR_5] = VAR_7;
            VAR_0[1][VAR_5] = VAR_8;
        }
    } else if (VAR_2 == 1) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_7 = 0.0f;
            for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
                VAR_7 += VAR_0[VAR_6][VAR_5] * VAR_1[0][VAR_6];
            VAR_0[0][VAR_5] = VAR_7;
        }
    }
}
