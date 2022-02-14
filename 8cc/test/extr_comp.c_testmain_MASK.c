
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

void FUNC_2() {
    FUNC_1("comparison operators");
    FUNC_0(1, 1 < 2);
    FUNC_0(0, 2 < 1);
    FUNC_0(1, 1 == 1);
    FUNC_0(0, 1 == 2);
    FUNC_0(0, 1 != 1);
    FUNC_0(1, 1 != 2);

    FUNC_0(1, 1 <= 2);
    FUNC_0(1, 2 <= 2);
    FUNC_0(0, 2 <= 1);

    FUNC_0(0, 1 >= 2);
    FUNC_0(1, 2 >= 2);
    FUNC_0(1, 2 >= 1);

    int VAR_0 = -1;
    FUNC_0(0, VAR_0 >= 0);

    FUNC_0(1, 10.0 == 10.0);
    FUNC_0(0, 10.0 == 20.0);
    FUNC_0(0, 10.0 != 10.0);
    FUNC_0(1, 10.0 != 20.0);

    FUNC_0(1, 10.0f == 10.0f);
    FUNC_0(0, 10.0f == 20.0f);
    FUNC_0(0, 10.0f != 10.0f);
    FUNC_0(1, 10.0f != 20.0f);

    FUNC_0(1, 10.0f == 10.0);
    FUNC_0(0, 10.0f == 20.0);
    FUNC_0(0, 10.0f != 10.0);
    FUNC_0(1, 10.0f != 20.0);
}
