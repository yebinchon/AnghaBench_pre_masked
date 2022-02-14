
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(const double VAR_0[3][3], double VAR_1[3][3])
{
    double VAR_2 = VAR_0[0][0], VAR_3 = VAR_0[0][1], VAR_4 = VAR_0[0][2],
           VAR_5 = VAR_0[1][0], VAR_6 = VAR_0[1][1], VAR_7 = VAR_0[1][2],
           VAR_8 = VAR_0[2][0], VAR_9 = VAR_0[2][1], VAR_10 = VAR_0[2][2];
    int VAR_11, VAR_12;
    double VAR_13;

    VAR_1[0][0] = (VAR_6 * VAR_10 - VAR_9 * VAR_7);
    VAR_1[0][1] = -(VAR_3 * VAR_10 - VAR_9 * VAR_4);
    VAR_1[0][2] = (VAR_3 * VAR_7 - VAR_6 * VAR_4);
    VAR_1[1][0] = -(VAR_5 * VAR_10 - VAR_8 * VAR_7);
    VAR_1[1][1] = (VAR_2 * VAR_10 - VAR_8 * VAR_4);
    VAR_1[1][2] = -(VAR_2 * VAR_7 - VAR_5 * VAR_4);
    VAR_1[2][0] = (VAR_5 * VAR_9 - VAR_8 * VAR_6);
    VAR_1[2][1] = -(VAR_2 * VAR_9 - VAR_8 * VAR_3);
    VAR_1[2][2] = (VAR_2 * VAR_6 - VAR_5 * VAR_3);

    VAR_13 = VAR_2 * VAR_1[0][0] + VAR_5 * VAR_1[0][1] + VAR_8 * VAR_1[0][2];
    VAR_13 = 1.0 / VAR_13;

    for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
            VAR_1[VAR_11][VAR_12] *= VAR_13;
    }
}
