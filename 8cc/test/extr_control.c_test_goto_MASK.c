
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    int VAR_0 = 0;
    goto x;
    VAR_0 = 5;
 x: FUNC_0(0, VAR_0);

    int VAR_1 = 0;
    VAR_0 = 0;
 y: if (VAR_1 > 10) goto z;
    VAR_0 += VAR_1++;
    goto y;
 z: if (VAR_1 > 11) goto a;
    FUNC_0(55, VAR_0);
    VAR_1++;
    goto y;
 a:
    ;
}
