
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char) ;

__attribute__((used)) static void FUNC_1() {
    struct {
        union {
            struct { int x; int y; };
            struct { char c[8]; };
        };
    } VAR_0;
    VAR_0.x = 1;
    VAR_0.y = 7;
    FUNC_0(1, VAR_0.c[0]);
    FUNC_0(7, VAR_0.c[4]);
}
