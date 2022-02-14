
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

void FUNC_0(int VAR_1, int VAR_2, int VAR_3) {
    int VAR_4 = VAR_1 % 7;
    int VAR_5 = VAR_1 / 7;
    int VAR_6;

    switch(VAR_3) {
        case 130:
            VAR_6 = VAR_5 * 14 + VAR_4;
            break;
        case 131:
            VAR_6 = VAR_5 * 14 + VAR_4 + 7;
            break;
        case 128:
            VAR_6 = (VAR_5 + 7) * 14 + VAR_4;
            break;
        case 129:
            VAR_6 = (VAR_5 + 7) * 14 + VAR_4 + 7;
            break;
    }
    int VAR_7 = VAR_6 / 8;
    int VAR_8 = 7-(VAR_6 - (VAR_7*8));

    if(VAR_2)
        VAR_0[4+VAR_7] |= (1 << VAR_8);
    else
        VAR_0[4+VAR_7] &= ~(1 << VAR_8);
}
