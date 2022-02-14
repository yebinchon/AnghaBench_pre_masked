
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9()
{
    char VAR_3[512];
    char* VAR_4;

    VAR_2 = FUNC_7(0);

    FUNC_4("You are standing in an open field west of a white house.\n");
    while (FUNC_5(VAR_3, sizeof(VAR_3))) {
        if (VAR_3[0]) {
            if (VAR_3[0] == 'q') {
                break;
            }

            if (VAR_3[0] == 't') {
                FUNC_4("Shutting off Discord.\n");
                FUNC_1();
                continue;
            }

            if (VAR_3[0] == 'c') {
                if (VAR_1) {
                    FUNC_4("Clearing presence information.\n");
                    VAR_1 = 0;
                }
                else {
                    FUNC_4("Restoring presence information.\n");
                    VAR_1 = 1;
                }
                FUNC_8();
                continue;
            }

            if (VAR_3[0] == 'y') {
                FUNC_4("Reinit Discord.\n");
                FUNC_3();
                continue;
            }

            if (FUNC_7(((void*)0)) & 1) {
                FUNC_4("I don't understand that.\n");
            }
            else {
                VAR_4 = FUNC_6(VAR_3, ' ');
                if (VAR_4) {
                    *VAR_4 = 0;
                }
                FUNC_4("I don't know the word \"%s\".\n", VAR_3);
            }

            ++VAR_0;

            FUNC_8();
        }




        FUNC_0();
    }
}
