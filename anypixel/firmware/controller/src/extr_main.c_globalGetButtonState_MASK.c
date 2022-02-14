
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

bool FUNC_0(int VAR_1, int VAR_2) {
    int VAR_3 = VAR_1 % 7;
    int VAR_4 = VAR_1 / 7;
    int VAR_5;

    switch(VAR_2) {
        case 130:
            VAR_5 = VAR_4 * 14 + VAR_3;
            break;
        case 131:
            VAR_5 = VAR_4 * 14 + VAR_3 + 7;
            break;
        case 128:
            VAR_5 = (VAR_4 + 7) * 14 + VAR_3;
            break;
        case 129:
            VAR_5 = (VAR_4 + 7) * 14 + VAR_3 + 7;
            break;
    }
    int VAR_6 = VAR_5 / 8;
    int VAR_7 = 7-(VAR_5 - (VAR_6*8));
    if( VAR_0[4+VAR_6] & (1 << VAR_7) )
        return 1;
    return 0;
}
