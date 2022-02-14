
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
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int*,int*,int) ;
 int FUNC_11 (int*,int*,int) ;

__attribute__((used)) static void FUNC_12(int32_t *VAR_0, const int32_t *VAR_1)
{
    int VAR_2[32], VAR_3[32];
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_6 = 0;
    for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
        VAR_6 += FUNC_0(VAR_1[VAR_4]);

    VAR_7 = VAR_6 > 0x400000 ? 2 : 0;
    VAR_8 = VAR_7 > 0 ? 1 << (VAR_7 - 1) : 0;

    for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
        VAR_2[VAR_4] = (VAR_1[VAR_4] + VAR_8) >> VAR_7;

    FUNC_8(VAR_2, VAR_3 + 0, 16);
    FUNC_9(VAR_2, VAR_3 + 16, 16);
    FUNC_2(VAR_3, 32);

    FUNC_8(VAR_3 + 0, VAR_2 + 0, 8);
    FUNC_9(VAR_3 + 0, VAR_2 + 8, 8);
    FUNC_10(VAR_3 + 16, VAR_2 + 16, 8);
    FUNC_11(VAR_3 + 16, VAR_2 + 24, 8);
    FUNC_2(VAR_2, 32);

    FUNC_3(VAR_2 + 0, VAR_3 + 0);
    FUNC_4(VAR_2 + 8, VAR_3 + 8);
    FUNC_4(VAR_2 + 16, VAR_3 + 16);
    FUNC_4(VAR_2 + 24, VAR_3 + 24);
    FUNC_2(VAR_3, 32);

    FUNC_5(VAR_3 + 0, VAR_2 + 0);
    FUNC_6(VAR_3 + 16, VAR_2 + 16);
    FUNC_2(VAR_2, 32);

    FUNC_7(VAR_2, VAR_3);

    for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
        VAR_3[VAR_4] = FUNC_1(VAR_3[VAR_4] * (1 << VAR_7));

    for (VAR_4 = 0, VAR_5 = 31; VAR_4 < 16; VAR_4++, VAR_5--) {
        VAR_0[ VAR_4] = FUNC_1(VAR_3[VAR_4] - VAR_3[VAR_5]);
        VAR_0[16 + VAR_4] = FUNC_1(VAR_3[VAR_4] + VAR_3[VAR_5]);
    }
}
