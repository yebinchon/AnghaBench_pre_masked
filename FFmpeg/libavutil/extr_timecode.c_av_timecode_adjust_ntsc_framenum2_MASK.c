
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0, int VAR_1)
{

    int VAR_2 = 0;
    int VAR_3, VAR_4, VAR_5;

    if (VAR_1 == 30) {
        VAR_2 = 2;
        VAR_5 = 17982;
    } else if (VAR_1 == 60) {
        VAR_2 = 4;
        VAR_5 = 35964;
    } else
        return VAR_0;

    VAR_3 = VAR_0 / VAR_5;
    VAR_4 = VAR_0 % VAR_5;

    return VAR_0 + 9 * VAR_2 * VAR_3 + VAR_2 * ((VAR_4 - VAR_2) / (VAR_5 / 10));
}
