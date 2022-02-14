
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(double VAR_0, double VAR_1, int VAR_2, double *VAR_3)
{
    double VAR_4 = -VAR_0, VAR_5 = -VAR_1;
    double VAR_6, VAR_7;
    int VAR_8;

    for (VAR_8 = VAR_2; VAR_8 >= 1; VAR_8--) {
        VAR_6 = VAR_3[2 * VAR_8 + 0];
        VAR_7 = VAR_3[2 * VAR_8 + 1];

        VAR_3[2 * VAR_8 + 0] = (VAR_4 * VAR_6 - VAR_5 * VAR_7) + VAR_3[2 * (VAR_8 - 1) + 0];
        VAR_3[2 * VAR_8 + 1] = (VAR_4 * VAR_7 + VAR_5 * VAR_6) + VAR_3[2 * (VAR_8 - 1) + 1];
    }

    VAR_6 = VAR_3[0];
    VAR_7 = VAR_3[1];
    VAR_3[0] = VAR_4 * VAR_6 - VAR_5 * VAR_7;
    VAR_3[1] = VAR_4 * VAR_7 + VAR_5 * VAR_6;
}
