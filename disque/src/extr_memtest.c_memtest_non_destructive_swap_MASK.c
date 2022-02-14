
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(void *VAR_0, size_t VAR_1) {
    volatile unsigned long *VAR_2 = VAR_0;
    size_t VAR_3 = VAR_1 / sizeof(unsigned long);
    size_t VAR_4;


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2) {
        unsigned long VAR_5, VAR_6;

        VAR_5 = VAR_2[VAR_4];
        VAR_6 = VAR_2[VAR_4+1];
        VAR_2[VAR_4] = VAR_6;
        VAR_2[VAR_4+1] = VAR_5;
    }
}
