
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmdline ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int) ;

void FUNC_16(void)
{
    FUNC_3();
    FUNC_3();
    FUNC_4("Press ENTER to see the list of tests.");
    FUNC_3();
    int VAR_0 = FUNC_5();
    while (1) {
        char VAR_1[256] = { 0 };
        while (FUNC_8(VAR_1) == 0) {
            FUNC_11(VAR_1, sizeof(VAR_1));
            FUNC_10(VAR_1);
            if (FUNC_8(VAR_1) == 0) {

                FUNC_7();
            }
        }

        if (VAR_1[0] == '-') {
            FUNC_1();
            continue;
        }

        FUNC_0();

        size_t VAR_2 = 0;
        bool VAR_3 = 0;
        if (VAR_1[VAR_2] == '!') {
            VAR_3 = 1;
            ++VAR_2;
        }

        if (VAR_1[VAR_2] == '*') {
            FUNC_12();
        } else if (VAR_1[VAR_2] == '[') {
            FUNC_15(VAR_1 + VAR_2, VAR_3);
        } else if (VAR_1[VAR_2] == '"') {
            char* VAR_4 = FUNC_9(VAR_1, '"');
            if (VAR_4 > &VAR_1[VAR_2]) {
                *VAR_4 = 0;
                FUNC_14(VAR_1 + VAR_2 + 1);
            }
        } else if (FUNC_6((unsigned char)VAR_1[VAR_2])) {
            FUNC_13(VAR_1 + VAR_2, VAR_0);
        }

        FUNC_1();

        FUNC_4("Enter next test, or 'enter' to see menu");
        FUNC_3();
        FUNC_2();
    }
}
