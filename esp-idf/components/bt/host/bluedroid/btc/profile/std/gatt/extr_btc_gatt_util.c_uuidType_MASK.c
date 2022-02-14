
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(unsigned char *VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 1;

    for (VAR_5 = 0; VAR_5 != 16; ++VAR_5) {
        if (VAR_5 == 12 || VAR_5 == 13) {
            continue;
        }

        if (VAR_4[VAR_5] == VAR_0[VAR_5]) {
            ++VAR_6;
        }

        if (VAR_4[VAR_5] != 0) {
            VAR_7 = 0;
        }
    }
    if (VAR_7) {
        return 0;
    }
    if (VAR_6 == 12) {
        return VAR_3;
    }
    if (VAR_6 == 14) {
        return VAR_2;
    }
    return VAR_1;
}
