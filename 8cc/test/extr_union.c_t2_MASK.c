
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    union { char a[4]; int b; } VAR_0;
    VAR_0.b = 0;
    VAR_0.a[1] = 1;
    FUNC_0(256, VAR_0.b);
}
