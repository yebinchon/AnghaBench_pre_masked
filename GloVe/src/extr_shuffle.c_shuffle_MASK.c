
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CREC ;


 long FUNC_0 (long) ;

void FUNC_1(CREC *VAR_0, long VAR_1) {
    long VAR_2, VAR_3;
    CREC VAR_4;
    for (VAR_2 = VAR_1 - 1; VAR_2 > 0; VAR_2--) {
        VAR_3 = FUNC_0(VAR_2 + 1);
        VAR_4 = VAR_0[VAR_3];
        VAR_0[VAR_3] = VAR_0[VAR_2];
        VAR_0[VAR_2] = VAR_4;
    }
}
