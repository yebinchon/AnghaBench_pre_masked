
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (double,int ) ;
 int FUNC_2 (char*) ;

void FUNC_3() {
    FUNC_2("statement expression");

    FUNC_0(3, ({ 1; 2; 3; }));
    FUNC_1(3.0, ({ 1; 2; 3.0; }));
    FUNC_0(5, ({ int VAR_0 = 5; VAR_0; }));
}
