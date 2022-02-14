
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int) ;
 scalar_t__ FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,...) ;

void FUNC_4() {
    char VAR_0[128] = {0};
    char VAR_1[128] = {0};
    char VAR_2[128] = {0};
    if (FUNC_1(VAR_0, 128, VAR_1, 128)) {
        FUNC_3("Contacting login server for username: %s\n", VAR_0);
        if (FUNC_2(
            VAR_2, 128, VAR_0, VAR_1))
        {
            FUNC_3("Successfully authenticated with the login server\n");
            FUNC_0(VAR_0, VAR_2);
        }
        else {
            FUNC_3("Failed to authenticate with the login server\n");
            FUNC_0("", "");
        }
    }
    else {
        FUNC_3("Logging in anonymously\n");
        FUNC_0("", "");
    }
}
