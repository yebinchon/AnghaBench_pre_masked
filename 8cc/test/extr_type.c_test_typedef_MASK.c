
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    typedef int integer;
    integer VAR_0 = 5;
    FUNC_0(5, VAR_0);

    typedef int array[3];
    array VAR_1 = { 1, 2, 3 };
    FUNC_0(2, VAR_1[1]);

    typedef struct tag { int x; } strtype;
    strtype VAR_2;
    VAR_2.x = 5;
    FUNC_0(5, VAR_2.x);

    typedef char x;
    {
        int VAR_3 = 3;
        FUNC_0(3, VAR_3);
    }
    {
        int VAR_4 = sizeof(x), VAR_5 = 5, VAR_6 = sizeof(VAR_5);
        FUNC_0(1, VAR_4);
        FUNC_0(5, VAR_5);
        FUNC_0(4, VAR_6);
    }
}
