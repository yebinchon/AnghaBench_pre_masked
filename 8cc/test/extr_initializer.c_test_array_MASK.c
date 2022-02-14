
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int**,int) ;
 int FUNC_2 (short*,short***,int) ;

__attribute__((used)) static void FUNC_3() {
    int VAR_0[] = { 1, 3, 5 };
    FUNC_0(1, VAR_0[0]);
    FUNC_0(3, VAR_0[1]);
    FUNC_0(5, VAR_0[2]);

    int VAR_1[] = { 1, 3, 5, 2, 4, 6, 3, 5, 7, 0, 0, 0 };
    int VAR_2[4][3] = { { 1, 3, 5 }, { 2, 4, 6 }, { 3, 5, 7 }, };
    FUNC_1(VAR_1, VAR_2, 12);
    int VAR_3[4][3] = { 1, 3, 5, 2, 4, 6, 3, 5, 7 };
    FUNC_1(VAR_1, VAR_3, 12);

    int VAR_4[] = { 1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0 };
    int VAR_5[4][3] = { { 1 }, { 2 }, { 3 }, { 4 } };
    FUNC_1(VAR_4, VAR_5, 12);

    short VAR_6[24] = { 1, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 4, 5, 6 };
    short VAR_7[4][3][2] = { { 1 }, { 2, 3 }, { 4, 5, 6 } };
    FUNC_2(VAR_6, VAR_7, 24);

    int VAR_8[] = {{{ 3 }}};
    FUNC_0(3, VAR_8[0]);
}
