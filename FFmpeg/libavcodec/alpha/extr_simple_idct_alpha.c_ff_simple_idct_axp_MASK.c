
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int int16_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

void FUNC_4(int16_t *VAR_0)
{

    int VAR_1;
    int VAR_2 = 1;
    int VAR_3 = 1;

    for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
        int VAR_4 = FUNC_2(VAR_0 + 8 * VAR_1);

        if (VAR_1 > 0 && VAR_4 > 0)
            VAR_2 = 0;
        if (VAR_4 == 2)
            VAR_3 = 0;
    }

    if (VAR_2) {
        FUNC_1(VAR_0);
    } else if (VAR_3) {
        FUNC_0(VAR_0);
        for (VAR_1 = 0; VAR_1 < 8; VAR_1 += 2) {
            uint64_t VAR_5 = (uint16_t) VAR_0[0];
            uint64_t VAR_6 = (uint16_t) VAR_0[8];

            VAR_5 |= VAR_5 << 16;
            VAR_6 |= VAR_6 << 16;
            VAR_5 |= VAR_5 << 32;
            VAR_6 |= VAR_6 << 32;
            FUNC_3(VAR_5, VAR_0 + 0 * 4);
            FUNC_3(VAR_5, VAR_0 + 1 * 4);
            FUNC_3(VAR_6, VAR_0 + 2 * 4);
            FUNC_3(VAR_6, VAR_0 + 3 * 4);
            VAR_0 += 4 * 4;
        }
    } else {
        for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
            FUNC_0(VAR_0 + VAR_1);
    }
}
