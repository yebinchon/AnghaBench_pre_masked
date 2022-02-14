
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    struct tag4 { int a; struct { char b; int c; } y; } VAR_0;
    struct tag4 VAR_1;
    VAR_1.a = 61;
    VAR_1.y.b = 3;
    VAR_1.y.c = 3;
    FUNC_0(67, VAR_1.a + VAR_1.y.b + VAR_1.y.c);
}
