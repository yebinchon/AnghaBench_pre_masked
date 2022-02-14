
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;

int FUNC_2(void) {
    FUNC_0(*VAR_1 == 'x');
    VAR_1++;
    int VAR_2 = VAR_0[(unsigned char)*VAR_1];
    if (!VAR_2 && *VAR_1 != '0') {
        FUNC_1("\\x needs at least 1 hex digit");
    }
    VAR_1++;
    int VAR_3 = VAR_0[(unsigned char)*VAR_1];
    if (VAR_3 || *VAR_1 == '0') {
        VAR_2 *= 16;
        VAR_2 += VAR_3;
        if (VAR_2 > 0xFF) {
            FUNC_1("\\x argument out of range");
            VAR_2 = 0xFF;
        }
        VAR_1++;
    }
    return VAR_2;
}
