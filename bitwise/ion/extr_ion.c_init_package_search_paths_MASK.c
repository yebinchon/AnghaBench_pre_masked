
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void) {
    const char *VAR_1 = FUNC_3("IONHOME");
    if (!VAR_1) {
        FUNC_6("error: Set the environment variable IONHOME to the Ion home directory (where system_packages is located)\n");
        FUNC_2(1);
    }
    char VAR_2[VAR_0];
    FUNC_4(VAR_2, VAR_1);
    FUNC_5(VAR_2, "system_packages");
    FUNC_0(VAR_2);
    FUNC_0(".");
    const char *VAR_3 = FUNC_3("IONPATH");
    if (VAR_3) {
        const char *VAR_4 = VAR_3;
        for (const char *VAR_5 = VAR_3; *VAR_5; VAR_5++) {
            if (*VAR_5 == ';') {
                FUNC_1(VAR_4, VAR_5);
                VAR_4 = VAR_5 + 1;
            }
        }
        if (*VAR_4) {
            FUNC_0(VAR_4);
        }
    }
}
