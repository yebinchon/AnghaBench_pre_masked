
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    union {
        int i;
        struct { char a:4; char b:4; char : 8; };
    } VAR_0 = { 0 };
    VAR_0.i = 0;
    VAR_0.a = 2;
    VAR_0.b = 4;
    FUNC_0(2, VAR_0.a);
    FUNC_0(4, VAR_0.b);
    FUNC_0(66, VAR_0.i);

    union {
        int i;
        struct { char a:4; char :0; char b:4; };
    } VAR_1 = { 0 };
    VAR_1.a = 2;
    VAR_1.b = 4;
    FUNC_0(2, VAR_1.a);
    FUNC_0(4, VAR_1.b);
    FUNC_0(1026, VAR_1.i);
}
