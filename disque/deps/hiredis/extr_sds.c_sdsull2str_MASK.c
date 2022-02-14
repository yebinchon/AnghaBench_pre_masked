
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(char *VAR_0, unsigned long long VAR_1) {
    char *VAR_2, VAR_3;
    size_t VAR_4;



    VAR_2 = VAR_0;
    do {
        *VAR_2++ = '0'+(VAR_1%10);
        VAR_1 /= 10;
    } while(VAR_1);


    VAR_4 = VAR_2-VAR_0;
    *VAR_2 = '\0';


    VAR_2--;
    while(VAR_0 < VAR_2) {
        VAR_3 = *VAR_0;
        *VAR_0 = *VAR_2;
        *VAR_2 = VAR_3;
        VAR_0++;
        VAR_2--;
    }
    return VAR_4;
}
