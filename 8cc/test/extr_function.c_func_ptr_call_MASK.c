
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,float) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 float FUNC_4 (int) ;
 int FUNC_5 (int (*) (int),int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7() {
    FUNC_1(4, FUNC_4(2));
    int (*VAR_0)(void) = FUNC_2;
    FUNC_0(55, VAR_0());
    int (*VAR_1)(int) = FUNC_3;
    FUNC_0(110, VAR_1(55));
    float (*VAR_2)(float) = FUNC_4;
    FUNC_1(4, VAR_2(2));
    int (*VAR_3)(void) = &FUNC_2;
    FUNC_0(55, (**VAR_3)());
    FUNC_0(10, FUNC_5(FUNC_3, 5));
}
