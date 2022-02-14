
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_4 = VAR_0 / VAR_1;
    if (!VAR_3) {
        if ((VAR_2 == 48000 && VAR_4 >= 56) ||
            (VAR_4 >= 56 && VAR_4 <= 80))
            VAR_5 = 0;
        else if (VAR_2 != 48000 && VAR_4 >= 96)
            VAR_5 = 1;
        else if (VAR_2 != 32000 && VAR_4 <= 48)
            VAR_5 = 2;
        else
            VAR_5 = 3;
    } else {
        VAR_5 = 4;
    }
    return VAR_5;
}
