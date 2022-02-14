
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (double,double) ;
 int FUNC_2 (double,float) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6() {
    FUNC_3("cast");
    FUNC_2(1, (int)1);
    FUNC_2(1.0, (float)1);
    FUNC_1(2.0, (double)2);

    int VAR_0[3];
    *(int *)(VAR_0 + 2) = 5;
    FUNC_0(5, VAR_0[2]);

    FUNC_4();
    FUNC_5();
}
