
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,float,float) ;
 int FUNC_2 () ;

void FUNC_3(char *VAR_0, int VAR_1, float VAR_2, float VAR_3) {
    if (VAR_2 == VAR_3)
        return;
    FUNC_2();
    FUNC_1("%s:%d: %f expected, but got %f\n", VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_0(1);
}
