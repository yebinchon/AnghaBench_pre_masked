
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    struct {
        struct {
            struct { int a; int b; } x;
            struct { char c[8]; } y;
        } w;
    } VAR_0 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, };
    FUNC_0(1, VAR_0.w.x.a);
    FUNC_0(2, VAR_0.w.x.b);
    FUNC_0(3, VAR_0.w.y.c[0]);
    FUNC_0(10, VAR_0.w.y.c[7]);
}
