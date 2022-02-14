
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, int VAR_1)
{






    uint32_t VAR_2 = FUNC_1(VAR_0 - 3);
    uint32_t VAR_3 = VAR_2 | VAR_2 << 24;
    uint32_t VAR_4 = VAR_2 >> 8 | VAR_2 << 16;
    uint32_t VAR_5 = VAR_2 >> 16 | VAR_2 << 8;


    while (VAR_1 >= 12) {
        FUNC_2(VAR_0, VAR_3);
        FUNC_2(VAR_0 + 4, VAR_4);
        FUNC_2(VAR_0 + 8, VAR_5);
        VAR_0 += 12;
        VAR_1 -= 12;
    }

    if (VAR_1 >= 4) {
        FUNC_2(VAR_0, VAR_3);
        VAR_0 += 4;
        VAR_1 -= 4;
    }

    if (VAR_1 >= 4) {
        FUNC_2(VAR_0, VAR_4);
        VAR_0 += 4;
        VAR_1 -= 4;
    }

    while (VAR_1--) {
        *VAR_0 = VAR_0[-3];
        VAR_0++;
    }
}
