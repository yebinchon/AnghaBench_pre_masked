
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    union { int a : 10; char b: 5; char c: 5; } VAR_0;
    VAR_0.a = 2;
    FUNC_0(2, VAR_0.a);
    FUNC_0(2, VAR_0.b);
    FUNC_0(2, VAR_0.c);
}
