
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long FUNC_0(void) {
    unsigned char VAR_0[256], VAR_1, VAR_2, VAR_3;
    int VAR_4 = 1000, VAR_5;
    unsigned long VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < 256; VAR_5++) VAR_0[VAR_5] = VAR_5;

    VAR_1 = 0;
    VAR_2 = 0;
    while(VAR_4--) {
        VAR_1++;
        VAR_2 = VAR_2 + VAR_0[VAR_1];
        VAR_3 = VAR_0[VAR_1];
        VAR_0[VAR_1] = VAR_0[VAR_2];
        VAR_0[VAR_2] = VAR_3;
        VAR_6 += VAR_0[(VAR_0[VAR_1]+VAR_0[VAR_2])&255];
    }
    return VAR_6;
}
