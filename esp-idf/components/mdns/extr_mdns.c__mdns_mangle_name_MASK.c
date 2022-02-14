
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char**,int) ;

__attribute__((used)) static char * FUNC_6(char* VAR_1) {
    char *VAR_2 = FUNC_4(VAR_1, '-');
    int VAR_3 = 0;
    if (VAR_2 == ((void*)0)) {

        VAR_3 = 2;
    } else {
        char *VAR_4 = ((void*)0);
        VAR_3 = FUNC_5(VAR_2 + 1, &VAR_4, 10);
        if (*VAR_4 != 0) {

            VAR_3 = 2;
            VAR_2 = ((void*)0);
        }
    }
    char *VAR_5;
    if (VAR_2 == ((void*)0)) {

        VAR_5 = FUNC_0(FUNC_3(VAR_1) + 3);
        if (VAR_5 == ((void*)0)) {
            VAR_0;
            return ((void*)0);
        }
        FUNC_1(VAR_5, "%s-2", VAR_1);
    } else {
        VAR_5 = FUNC_0(FUNC_3(VAR_1) + 2);
        if (VAR_5 == ((void*)0)) {
            VAR_0;
            return ((void*)0);
        }
        FUNC_2(VAR_5, VAR_1);
        int VAR_6 = VAR_2 - VAR_1;

        FUNC_1(VAR_5 + VAR_6, "-%d", VAR_3 + 1);
    }
    return VAR_5;
}
