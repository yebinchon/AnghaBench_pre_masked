
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const) ;

void FUNC_5(const char *VAR_2, bool VAR_3) {
    if (VAR_3) {
        VAR_1++;
        FUNC_2();
    }
    FUNC_1("\"");
    while (*VAR_2) {
        const char *VAR_4 = VAR_2;
        while (*VAR_2 && FUNC_4(*VAR_2) && !VAR_0[(unsigned char)*VAR_2]) {
            VAR_2++;
        }
        if (VAR_4 != VAR_2) {
            FUNC_1("%.*s", VAR_2 - VAR_4, VAR_4);
        }
        if (*VAR_2) {
            if (VAR_0[(unsigned char)*VAR_2]) {
                FUNC_1("\\%c", VAR_0[(unsigned char)*VAR_2]);
                if (VAR_2[0] == '\n' && VAR_2[1]) {
                    FUNC_1("\"");
                    FUNC_3("\"");
                }
            } else {
                FUNC_0(!FUNC_4(*VAR_2));
                FUNC_1("\\x%X", (unsigned char)*VAR_2);
            }
            VAR_2++;
        }
    }
    FUNC_1("\"");
    if (VAR_3) {
        VAR_1--;
    }
}
