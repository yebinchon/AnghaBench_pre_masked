
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{




    int VAR_3;

    VAR_3 = 16;
    VAR_3 += VAR_1 * ((7+VAR_2+7)/8);
    if (VAR_1 == 2) {

        VAR_3 += (( 2*VAR_2+1) * VAR_0 + 7) / 8;
    } else {
        VAR_3 += ( VAR_1*VAR_2 * VAR_0 + 7) / 8;
    }
    VAR_3 += 2;

    return VAR_3;
}
