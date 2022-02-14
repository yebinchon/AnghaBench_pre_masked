
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

uint64_t FUNC_2(char *VAR_2, size_t VAR_3) {
    uint64_t VAR_4 = 0;
    char *VAR_5 = "0123456789abcdef";

    VAR_1 = 0;
    while(VAR_3--) {
        int VAR_6 = FUNC_1(*VAR_2++);
        char *VAR_7 = FUNC_0(VAR_5,VAR_6);
        int VAR_8;
        if (!VAR_7) {
            VAR_1 = VAR_0;
            VAR_8 = 0;
        } else {
            VAR_8 = VAR_7-VAR_5;
        }
        VAR_4 = (VAR_4 << 4) | VAR_8;
    }
    return VAR_4;
}
