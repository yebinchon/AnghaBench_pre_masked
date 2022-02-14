
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,...) ;
 int VAR_1 ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*,int) ;

int FUNC_15(int VAR_2, char **VAR_3) {
    char *VAR_4;
    char *VAR_5 = VAR_3[0];


    while(VAR_2 > 1) {
        VAR_2--;
        VAR_3++;
        if (!FUNC_13(*VAR_3,"--multiline")) {
            FUNC_11(1);
            FUNC_12("Multi-line mode enabled.\n");
        } else if (!FUNC_13(*VAR_3,"--keycodes")) {
            FUNC_9();
            FUNC_1(0);
        } else {
            FUNC_2(VAR_1, "Usage: %s [--multiline] [--keycodes]\n", VAR_5);
            FUNC_1(1);
        }
    }



    FUNC_10(VAR_0);



    FUNC_6("history.txt");







    while((VAR_4 = FUNC_4("hello> ")) != ((void*)0)) {

        if (VAR_4[0] != '\0' && VAR_4[0] != '/') {
            FUNC_12("echo: '%s'\n", VAR_4);
            FUNC_5(VAR_4);
            FUNC_7("history.txt");
        } else if (!FUNC_14(VAR_4,"/historylen",11)) {

            int VAR_6 = FUNC_0(VAR_4+11);
            FUNC_8(VAR_6);
        } else if (VAR_4[0] == '/') {
            FUNC_12("Unreconized command: %s\n", VAR_4);
        }
        FUNC_3(VAR_4);
    }
    return 0;
}
