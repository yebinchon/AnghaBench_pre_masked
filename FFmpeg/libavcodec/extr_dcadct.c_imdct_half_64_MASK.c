
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int*) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (int*,int*) ;
 int FUNC_9 (int*,int*) ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int*,int*,int) ;
 int FUNC_12 (int*,int*,int) ;
 int FUNC_13 (int*,int*,int) ;

__attribute__((used)) static void FUNC_14(int32_t *VAR_0, const int32_t *VAR_1)
{
    int VAR_2[64], VAR_3[64];
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_6 = 0;
    for (VAR_4 = 0; VAR_4 < 64; VAR_4++)
        VAR_6 += FUNC_0(VAR_1[VAR_4]);

    VAR_7 = VAR_6 > 0x400000 ? 2 : 0;
    VAR_8 = VAR_7 > 0 ? 1 << (VAR_7 - 1) : 0;

    for (VAR_4 = 0; VAR_4 < 64; VAR_4++)
        VAR_2[VAR_4] = (VAR_1[VAR_4] + VAR_8) >> VAR_7;

    FUNC_10(VAR_2, VAR_3 + 0, 32);
    FUNC_11(VAR_2, VAR_3 + 32, 32);
    FUNC_2(VAR_3, 64);

    FUNC_10(VAR_3 + 0, VAR_2 + 0, 16);
    FUNC_11(VAR_3 + 0, VAR_2 + 16, 16);
    FUNC_12(VAR_3 + 32, VAR_2 + 32, 16);
    FUNC_13(VAR_3 + 32, VAR_2 + 48, 16);
    FUNC_2(VAR_2, 64);

    FUNC_10(VAR_2 + 0, VAR_3 + 0, 8);
    FUNC_11(VAR_2 + 0, VAR_3 + 8, 8);
    FUNC_12(VAR_2 + 16, VAR_3 + 16, 8);
    FUNC_13(VAR_2 + 16, VAR_3 + 24, 8);
    FUNC_12(VAR_2 + 32, VAR_3 + 32, 8);
    FUNC_13(VAR_2 + 32, VAR_3 + 40, 8);
    FUNC_12(VAR_2 + 48, VAR_3 + 48, 8);
    FUNC_13(VAR_2 + 48, VAR_3 + 56, 8);
    FUNC_2(VAR_3, 64);

    FUNC_3(VAR_3 + 0, VAR_2 + 0);
    FUNC_4(VAR_3 + 8, VAR_2 + 8);
    FUNC_4(VAR_3 + 16, VAR_2 + 16);
    FUNC_4(VAR_3 + 24, VAR_2 + 24);
    FUNC_4(VAR_3 + 32, VAR_2 + 32);
    FUNC_4(VAR_3 + 40, VAR_2 + 40);
    FUNC_4(VAR_3 + 48, VAR_2 + 48);
    FUNC_4(VAR_3 + 56, VAR_2 + 56);
    FUNC_2(VAR_2, 64);

    FUNC_8(VAR_2 + 0, VAR_3 + 0);
    FUNC_9(VAR_2 + 16, VAR_3 + 16);
    FUNC_9(VAR_2 + 32, VAR_3 + 32);
    FUNC_9(VAR_2 + 48, VAR_3 + 48);
    FUNC_2(VAR_3, 64);

    FUNC_5(VAR_3 + 0, VAR_2 + 0);
    FUNC_6(VAR_3 + 32, VAR_2 + 32);
    FUNC_2(VAR_2, 64);

    FUNC_7(VAR_2, VAR_3);

    for (VAR_4 = 0; VAR_4 < 64; VAR_4++)
        VAR_3[VAR_4] = FUNC_1(VAR_3[VAR_4] * (1 << VAR_7));

    for (VAR_4 = 0, VAR_5 = 63; VAR_4 < 32; VAR_4++, VAR_5--) {
        VAR_0[ VAR_4] = FUNC_1(VAR_3[VAR_4] - VAR_3[VAR_5]);
        VAR_0[32 + VAR_4] = FUNC_1(VAR_3[VAR_4] + VAR_3[VAR_5]);
    }
}
