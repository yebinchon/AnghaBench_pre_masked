
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(void) {
    const char *VAR_2 = FUNC_2("IONOS");
    if (VAR_2) {
        int VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 == -1) {
            FUNC_3("Unknown target operating system in IONOS environment variable: %s\n", VAR_2);
        } else {
            VAR_1 = VAR_3;
        }
    }
    const char *VAR_4 = FUNC_2("IONARCH");
    if (VAR_4) {
        int VAR_5 = FUNC_0(VAR_4);
        if (VAR_5 == -1) {
            FUNC_3("Unknown target architecture in IONARCH environment variable: %s\n", VAR_4);
        } else {
            VAR_0 = VAR_5;
        }
    }
}
