
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    union {
        int i;
        struct { char a:5; int b:5; };
    } VAR_0;
    VAR_0.a = 10;
    VAR_0.b = 11;
    FUNC_0(10, VAR_0.a);
    FUNC_0(11, VAR_0.b);
    FUNC_0(362, VAR_0.i);
}
