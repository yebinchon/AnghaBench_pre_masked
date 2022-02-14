
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,float,float,float,float,float) ;

void FUNC_2(float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5) {
    if (!VAR_0) {
        return;
    }
    static float VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = 0;
    float VAR_11 =
        (VAR_6 - VAR_1) * (VAR_6 - VAR_1) +
        (VAR_7 - VAR_2) * (VAR_7 - VAR_2) +
        (VAR_8 - VAR_3) * (VAR_8 - VAR_3) +
        (VAR_9 - VAR_4) * (VAR_9 - VAR_4) +
        (VAR_10 - VAR_5) * (VAR_10 - VAR_5);
    if (VAR_11 < 0.0001) {
        return;
    }
    VAR_6 = VAR_1; VAR_7 = VAR_2; VAR_8 = VAR_3; VAR_9 = VAR_4; VAR_10 = VAR_5;
    char VAR_12[1024];
    FUNC_1(VAR_12, 1024, "P,%.2f,%.2f,%.2f,%.2f,%.2f\n", VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_0(VAR_12);
}
